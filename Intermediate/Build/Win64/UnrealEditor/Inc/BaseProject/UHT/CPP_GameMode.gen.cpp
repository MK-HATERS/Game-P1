// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/GameFramework/CPP_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_GameMode() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_GameMode();
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class ACPP_GameMode
void ACPP_GameMode::StaticRegisterNativesACPP_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_GameMode);
UClass* Z_Construct_UClass_ACPP_GameMode_NoRegister()
{
	return ACPP_GameMode::StaticClass();
}
struct Z_Construct_UClass_ACPP_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/CPP_GameMode.h" },
		{ "ModuleRelativePath", "GameFramework/CPP_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_GameMode_Statics::ClassParams = {
	&ACPP_GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_GameMode()
{
	if (!Z_Registration_Info_UClass_ACPP_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_GameMode.OuterSingleton, Z_Construct_UClass_ACPP_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_GameMode.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<ACPP_GameMode>()
{
	return ACPP_GameMode::StaticClass();
}
ACPP_GameMode::ACPP_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_GameMode);
ACPP_GameMode::~ACPP_GameMode() {}
// End Class ACPP_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_GameMode, ACPP_GameMode::StaticClass, TEXT("ACPP_GameMode"), &Z_Registration_Info_UClass_ACPP_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_GameMode), 3150807433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_2939363864(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
