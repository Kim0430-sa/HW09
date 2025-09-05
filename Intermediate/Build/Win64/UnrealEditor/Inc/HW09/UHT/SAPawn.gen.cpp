// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW09/Player/SAPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
HW09_API UClass* Z_Construct_UClass_ASAPawn();
HW09_API UClass* Z_Construct_UClass_ASAPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW09();
// End Cross Module References

// Begin Class ASAPawn
void ASAPawn::StaticRegisterNativesASAPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAPawn);
UClass* Z_Construct_UClass_ASAPawn_NoRegister()
{
	return ASAPawn::StaticClass();
}
struct Z_Construct_UClass_ASAPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SAPawn.h" },
		{ "ModuleRelativePath", "Player/SAPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASAPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAPawn_Statics::ClassParams = {
	&ASAPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAPawn()
{
	if (!Z_Registration_Info_UClass_ASAPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAPawn.OuterSingleton, Z_Construct_UClass_ASAPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAPawn.OuterSingleton;
}
template<> HW09_API UClass* StaticClass<ASAPawn>()
{
	return ASAPawn::StaticClass();
}
ASAPawn::ASAPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAPawn);
ASAPawn::~ASAPawn() {}
// End Class ASAPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Player_SAPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAPawn, ASAPawn::StaticClass, TEXT("ASAPawn"), &Z_Registration_Info_UClass_ASAPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAPawn), 3268319777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Player_SAPawn_h_130866962(TEXT("/Script/HW09"),
	Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Player_SAPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Player_SAPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
