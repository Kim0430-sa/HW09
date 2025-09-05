// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SAPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAPlayerController_generated_h
#error "SAPlayerController.generated.h already included, missing '#pragma once' in SAPlayerController.h"
#endif
#define HW09_SAPlayerController_generated_h

#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_CALLBACK_WRAPPERS
#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAPlayerController(); \
	friend struct Z_Construct_UClass_ASAPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASAPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(ASAPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAPlayerController(ASAPlayerController&&); \
	ASAPlayerController(const ASAPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASAPlayerController) \
	NO_API virtual ~ASAPlayerController();


#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_10_PROLOG
#define FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_CALLBACK_WRAPPERS \
	FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Player_SAPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class ASAPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_Player_SAPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
