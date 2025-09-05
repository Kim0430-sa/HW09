#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SAGameStateBase.generated.h"

UCLASS()
class HW09_API ASAGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	UFUNCTION(NetMulticast, Reliable)
	
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));
};
