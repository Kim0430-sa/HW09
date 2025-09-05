#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SAGameModeBase.generated.h"

class ASAPlayerController;

UCLASS()
class HW09_API ASAGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void OnPostLogin(AController* NewPlayer) override;
	
	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	virtual void BeginPlay() override;
	
	void PrintChatMessageString(ASAPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ASAPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ASAPlayerController* InChattingPlayerController, int InStrikeCount);
protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ASAPlayerController>> AllPlayerControllers;
};
