#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SAPlayerController.generated.h"

class USAChatInput;
class UUserWidget;

UCLASS()
class HW09_API ASAPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ASAPlayerController();
	
	virtual void BeginPlay() override;

	void SetChatMessageString(const FString& InChatMessageString);

	void PrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InChatMessageString);

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USAChatInput> ChatInputWidgetClass;
	
	UPROPERTY()
	TObjectPtr<USAChatInput> ChatInputWidgetInstance;
	
	FString ChatMessageString;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;

public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;
};
