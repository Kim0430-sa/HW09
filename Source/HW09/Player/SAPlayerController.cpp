#include "SAPlayerController.h"
#include "HW09/UI/SAChatInput.h"
#include "HW09/HW09.h"
#include "EngineUtils.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "HW09/Game/SAGameModeBase.h"
#include "SAPlayerState.h"
#include "Net/UnrealNetwork.h"

ASAPlayerController::ASAPlayerController()
{
	bReplicates = true;
}

void ASAPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsLocalController() == false)
	{
		return;
	}
	
	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<USAChatInput>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}

	if (IsValid(NotificationTextWidgetClass) == true)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance) == true)
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ASAPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;

	if (IsLocalController() == true)
	{
		ASAPlayerState* SAPS = GetPlayerState<ASAPlayerState>();
		if (IsValid(SAPS) == true)
		{
			FString CombinedMessageString = SAPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;

			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
	}
}

void ASAPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	HW09FunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

void ASAPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}

void ASAPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ASAGameModeBase* SAGM = Cast<ASAGameModeBase>(GM);
		if (IsValid(SAGM) == true)
		{
			SAGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}

void ASAPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}