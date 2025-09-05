#include "SAGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "HW09/Player/SAPlayerController.h"

void ASAGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ASAPlayerController* SAPC = Cast<ASAPlayerController>(PC);
			if (IsValid(SAPC) == true)
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				SAPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}
