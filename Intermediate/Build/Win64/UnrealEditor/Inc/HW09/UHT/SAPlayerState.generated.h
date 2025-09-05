// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SAPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAPlayerState_generated_h
#error "SAPlayerState.generated.h already included, missing '#pragma once' in SAPlayerState.h"
#endif
#define HW09_SAPlayerState_generated_h

#define FID_git_HW09_Source_HW09_Player_SAPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAPlayerState(); \
	friend struct Z_Construct_UClass_ASAPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASAPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(ASAPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_HW09_Source_HW09_Player_SAPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAPlayerState(ASAPlayerState&&); \
	ASAPlayerState(const ASAPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASAPlayerState) \
	NO_API virtual ~ASAPlayerState();


#define FID_git_HW09_Source_HW09_Player_SAPlayerState_h_7_PROLOG
#define FID_git_HW09_Source_HW09_Player_SAPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_Player_SAPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Player_SAPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class ASAPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_Player_SAPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
