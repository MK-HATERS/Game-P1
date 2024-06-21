// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/System/CPP_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_GameState() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_GameState();
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_GameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class ACPP_GameState
void ACPP_GameState::StaticRegisterNativesACPP_GameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_GameState);
UClass* Z_Construct_UClass_ACPP_GameState_NoRegister()
{
	return ACPP_GameState::StaticClass();
}
struct Z_Construct_UClass_ACPP_GameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/CPP_GameState.h" },
		{ "ModuleRelativePath", "System/CPP_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_GameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_GameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_GameState_Statics::ClassParams = {
	&ACPP_GameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_GameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_GameState()
{
	if (!Z_Registration_Info_UClass_ACPP_GameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_GameState.OuterSingleton, Z_Construct_UClass_ACPP_GameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_GameState.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<ACPP_GameState>()
{
	return ACPP_GameState::StaticClass();
}
ACPP_GameState::ACPP_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_GameState);
ACPP_GameState::~ACPP_GameState() {}
// End Class ACPP_GameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_GameState, ACPP_GameState::StaticClass, TEXT("ACPP_GameState"), &Z_Registration_Info_UClass_ACPP_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_GameState), 1541690160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameState_h_302814359(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
