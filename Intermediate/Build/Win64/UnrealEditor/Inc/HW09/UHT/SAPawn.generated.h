// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SAPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAPawn_generated_h
#error "SAPawn.generated.h already included, missing '#pragma once' in SAPawn.h"
#endif
#define HW09_SAPawn_generated_h

#define FID_git_HW09_Source_HW09_Player_SAPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAPawn(); \
	friend struct Z_Construct_UClass_ASAPawn_Statics; \
public: \
	DECLARE_CLASS(ASAPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(ASAPawn)


#define FID_git_HW09_Source_HW09_Player_SAPawn_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAPawn(ASAPawn&&); \
	ASAPawn(const ASAPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAPawn) \
	NO_API virtual ~ASAPawn();


#define FID_git_HW09_Source_HW09_Player_SAPawn_h_7_PROLOG
#define FID_git_HW09_Source_HW09_Player_SAPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_Player_SAPawn_h_10_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_Player_SAPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class ASAPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_Player_SAPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
