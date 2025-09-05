#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SAPlayerState.generated.h"

UCLASS()
class HW09_API ASAPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ASAPlayerState();
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	FString GetPlayerInfoString();
public:
	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;
};
