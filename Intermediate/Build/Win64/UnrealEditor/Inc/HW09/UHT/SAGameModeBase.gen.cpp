// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW09/Game/SAGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW09_API UClass* Z_Construct_UClass_ASAGameModeBase();
HW09_API UClass* Z_Construct_UClass_ASAGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW09();
// End Cross Module References

// Begin Class ASAGameModeBase
void ASAGameModeBase::StaticRegisterNativesASAGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAGameModeBase);
UClass* Z_Construct_UClass_ASAGameModeBase_NoRegister()
{
	return ASAGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASAGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/SAGameModeBase.h" },
		{ "ModuleRelativePath", "Game/SAGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASAGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAGameModeBase_Statics::ClassParams = {
	&ASAGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASAGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAGameModeBase.OuterSingleton, Z_Construct_UClass_ASAGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAGameModeBase.OuterSingleton;
}
template<> HW09_API UClass* StaticClass<ASAGameModeBase>()
{
	return ASAGameModeBase::StaticClass();
}
ASAGameModeBase::ASAGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAGameModeBase);
ASAGameModeBase::~ASAGameModeBase() {}
// End Class ASAGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAGameModeBase, ASAGameModeBase::StaticClass, TEXT("ASAGameModeBase"), &Z_Registration_Info_UClass_ASAGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAGameModeBase), 1453937457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_2167214782(TEXT("/Script/HW09"),
	Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_HW09_Source_HW09_Game_SAGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
