// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/System/CPP_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_GameInstance() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_UCPP_GameInstance();
BASEPROJECT_API UClass* Z_Construct_UClass_UCPP_GameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class UCPP_GameInstance
void UCPP_GameInstance::StaticRegisterNativesUCPP_GameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_GameInstance);
UClass* Z_Construct_UClass_UCPP_GameInstance_NoRegister()
{
	return UCPP_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UCPP_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/CPP_GameInstance.h" },
		{ "ModuleRelativePath", "System/CPP_GameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_GameInstance_Statics::ClassParams = {
	&UCPP_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_GameInstance()
{
	if (!Z_Registration_Info_UClass_UCPP_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_GameInstance.OuterSingleton, Z_Construct_UClass_UCPP_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_GameInstance.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<UCPP_GameInstance>()
{
	return UCPP_GameInstance::StaticClass();
}
UCPP_GameInstance::UCPP_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_GameInstance);
UCPP_GameInstance::~UCPP_GameInstance() {}
// End Class UCPP_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_GameInstance, UCPP_GameInstance::StaticClass, TEXT("UCPP_GameInstance"), &Z_Registration_Info_UClass_UCPP_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_GameInstance), 2083397281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_2604819570(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
