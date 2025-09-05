#include "SAGameModeBase.h"
#include "SAGameStateBase.h"
#include "HW09/Player/SAPlayerController.h"
#include "EngineUtils.h"
#include "HW09/Player/SAPlayerState.h"
#include "Engine/Engine.h"

void ASAGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ASAPlayerController* SAPlayerController = Cast<ASAPlayerController>(NewPlayer);
	if (IsValid(SAPlayerController) == true)
	{
		SAPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
		
		AllPlayerControllers.Add(SAPlayerController);

		ASAPlayerState* SAPS = SAPlayerController->GetPlayerState<ASAPlayerState>();
		if (IsValid(SAPS) == true)
		{
			SAPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ASAGameStateBase* SAGameStateBase =  GetGameState<ASAGameStateBase>();
		if (IsValid(SAGameStateBase) == true)
		{
			SAGameStateBase->MulticastRPCBroadcastLoginMessage(SAPS->PlayerNameString);
		}
	}
}

FString ASAGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });
	
	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ASAGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}
			
			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
		
	} while (false);	

	return bCanPlay;
}

FString ASAGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else 
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;				
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ASAGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->bEnableOnScreenDebugMessages = true;
	}
	
	SecretNumberString = GenerateSecretNumber();
}

void ASAGameModeBase::PrintChatMessageString(ASAPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	int Index = InChatMessageString.Len() - 3;
	
	FString GuessNumberString = InChatMessageString.RightChop(Index);

	IncreaseGuessCount(InChattingPlayerController);
	
	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
		for (TActorIterator<ASAPlayerController> It(GetWorld()); It; ++It)
		{
			ASAPlayerController* SAPlayerController = *It;
			if (IsValid(SAPlayerController) == true)
			{
				FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
				SAPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JudgeGame(InChattingPlayerController, StrikeCount);
			}
		}
	}
	else
	{
		for (TActorIterator<ASAPlayerController> It(GetWorld()); It; ++It)
		{
			ASAPlayerController* SAPlayerController = *It;
			if (IsValid(SAPlayerController) == true)
			{
				SAPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
	}
}

void ASAGameModeBase::IncreaseGuessCount(ASAPlayerController* InChattingPlayerController)
{
	ASAPlayerState* SAPS = InChattingPlayerController->GetPlayerState<ASAPlayerState>();
	if (IsValid(SAPS) == true)
	{
		SAPS->CurrentGuessCount++;
	}
}

void ASAGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& SAPlayerController : AllPlayerControllers)
	{
		ASAPlayerState* SAPS = SAPlayerController->GetPlayerState<ASAPlayerState>();
		if (IsValid(SAPS) == true)
		{
			SAPS->CurrentGuessCount = 0;
		}
	}
}

void ASAGameModeBase::JudgeGame(ASAPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ASAPlayerState* SAPS = InChattingPlayerController->GetPlayerState<ASAPlayerState>();
		for (const auto& SAPlayerController : AllPlayerControllers)
		{
			if (IsValid(SAPS) == true)
			{
				FString CombinedMessageString = SAPS->PlayerNameString + TEXT(" has won the game.");
				SAPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& SAPlayerController : AllPlayerControllers)
		{
			ASAPlayerState* SAPS = SAPlayerController->GetPlayerState<ASAPlayerState>();
			if (IsValid(SAPS) == true)
			{
				if (SAPS->CurrentGuessCount < SAPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& SAPlayerController : AllPlayerControllers)
			{
				SAPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}
