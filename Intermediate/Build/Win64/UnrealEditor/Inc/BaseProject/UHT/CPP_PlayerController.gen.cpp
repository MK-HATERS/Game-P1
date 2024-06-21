// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/Character/CPP_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PlayerController() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_PlayerController();
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class ACPP_PlayerController
void ACPP_PlayerController::StaticRegisterNativesACPP_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_PlayerController);
UClass* Z_Construct_UClass_ACPP_PlayerController_NoRegister()
{
	return ACPP_PlayerController::StaticClass();
}
struct Z_Construct_UClass_ACPP_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/CPP_PlayerController.h" },
		{ "ModuleRelativePath", "Character/CPP_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PlayerController_Statics::ClassParams = {
	&ACPP_PlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_PlayerController()
{
	if (!Z_Registration_Info_UClass_ACPP_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_PlayerController.OuterSingleton, Z_Construct_UClass_ACPP_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_PlayerController.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<ACPP_PlayerController>()
{
	return ACPP_PlayerController::StaticClass();
}
ACPP_PlayerController::ACPP_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PlayerController);
ACPP_PlayerController::~ACPP_PlayerController() {}
// End Class ACPP_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_PlayerController, ACPP_PlayerController::StaticClass, TEXT("ACPP_PlayerController"), &Z_Registration_Info_UClass_ACPP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_PlayerController), 1454486898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_2398560937(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
