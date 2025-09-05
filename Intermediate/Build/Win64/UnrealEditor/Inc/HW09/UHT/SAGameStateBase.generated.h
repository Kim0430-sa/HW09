// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/SAGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAGameStateBase_generated_h
#error "SAGameStateBase.generated.h already included, missing '#pragma once' in SAGameStateBase.h"
#endif
#define HW09_SAGameStateBase_generated_h

#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_CALLBACK_WRAPPERS
#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAGameStateBase(); \
	friend struct Z_Construct_UClass_ASAGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ASAGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(ASAGameStateBase)


#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAGameStateBase(ASAGameStateBase&&); \
	ASAGameStateBase(const ASAGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAGameStateBase) \
	NO_API virtual ~ASAGameStateBase();


#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_7_PROLOG
#define FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_CALLBACK_WRAPPERS \
	FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Game_SAGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class ASAGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_Game_SAGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
