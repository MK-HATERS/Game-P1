// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/Character/CPP_PlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PlayerState() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_PlayerState();
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_PlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class ACPP_PlayerState
void ACPP_PlayerState::StaticRegisterNativesACPP_PlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_PlayerState);
UClass* Z_Construct_UClass_ACPP_PlayerState_NoRegister()
{
	return ACPP_PlayerState::StaticClass();
}
struct Z_Construct_UClass_ACPP_PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/CPP_PlayerState.h" },
		{ "ModuleRelativePath", "Character/CPP_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PlayerState_Statics::ClassParams = {
	&ACPP_PlayerState::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_PlayerState()
{
	if (!Z_Registration_Info_UClass_ACPP_PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_PlayerState.OuterSingleton, Z_Construct_UClass_ACPP_PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_PlayerState.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<ACPP_PlayerState>()
{
	return ACPP_PlayerState::StaticClass();
}
ACPP_PlayerState::ACPP_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PlayerState);
ACPP_PlayerState::~ACPP_PlayerState() {}
// End Class ACPP_PlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_PlayerState, ACPP_PlayerState::StaticClass, TEXT("ACPP_PlayerState"), &Z_Registration_Info_UClass_ACPP_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_PlayerState), 3253257522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerState_h_1618957599(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
