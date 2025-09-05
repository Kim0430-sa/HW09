#include "SAPawn.h"
#include "HW09/HW09.h"

void ASAPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("SAPawn::BeginPlay() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetRoleString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ASAPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("SAPawn::PossessedBy() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetRoleString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}