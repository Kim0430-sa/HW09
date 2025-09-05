#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SAPawn.generated.h"

UCLASS()
class HW09_API ASAPawn : public APawn
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

};
