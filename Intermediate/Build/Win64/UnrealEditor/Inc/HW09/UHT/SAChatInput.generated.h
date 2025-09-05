// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SAChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_SAChatInput_generated_h
#error "SAChatInput.generated.h already included, missing '#pragma once' in SAChatInput.h"
#endif
#define HW09_SAChatInput_generated_h

#define FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAChatInput(); \
	friend struct Z_Construct_UClass_USAChatInput_Statics; \
public: \
	DECLARE_CLASS(USAChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HW09"), NO_API) \
	DECLARE_SERIALIZER(USAChatInput)


#define FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USAChatInput(USAChatInput&&); \
	USAChatInput(const USAChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAChatInput) \
	NO_API virtual ~USAChatInput();


#define FID_git_HW09_Source_HW09_UI_SAChatInput_h_10_PROLOG
#define FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_INCLASS_NO_PURE_DECLS \
	FID_git_HW09_Source_HW09_UI_SAChatInput_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class USAChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW09_Source_HW09_UI_SAChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
