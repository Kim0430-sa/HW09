// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/SAGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAGameModeBase_generated_h
#error "SAGameModeBase.generated.h already included, missing '#pragma once' in SAGameModeBase.h"
#endif
#define HW09_SAGameModeBase_generated_h

#define FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAGameModeBase(); \
	friend struct Z_Construct_UClass_ASAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(ASAGameModeBase)


#define FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAGameModeBase(ASAGameModeBase&&); \
	ASAGameModeBase(const ASAGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAGameModeBase) \
	NO_API virtual ~ASAGameModeBase();


#define FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_9_PROLOG
#define FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class ASAGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_Game_SAGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
