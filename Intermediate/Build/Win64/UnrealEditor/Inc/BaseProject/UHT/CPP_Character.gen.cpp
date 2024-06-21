// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseProject/Character/CPP_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Character() {}

// Begin Cross Module References
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_Character();
BASEPROJECT_API UClass* Z_Construct_UClass_ACPP_Character_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BaseProject();
// End Cross Module References

// Begin Class ACPP_Character
void ACPP_Character::StaticRegisterNativesACPP_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Character);
UClass* Z_Construct_UClass_ACPP_Character_NoRegister()
{
	return ACPP_Character::StaticClass();
}
struct Z_Construct_UClass_ACPP_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CPP_Character.h" },
		{ "ModuleRelativePath", "Character/CPP_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Character_Statics::ClassParams = {
	&ACPP_Character::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_Character()
{
	if (!Z_Registration_Info_UClass_ACPP_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Character.OuterSingleton, Z_Construct_UClass_ACPP_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_Character.OuterSingleton;
}
template<> BASEPROJECT_API UClass* StaticClass<ACPP_Character>()
{
	return ACPP_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Character);
ACPP_Character::~ACPP_Character() {}
// End Class ACPP_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Character, ACPP_Character::StaticClass, TEXT("ACPP_Character"), &Z_Registration_Info_UClass_ACPP_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Character), 2104122804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_3765747797(TEXT("/Script/BaseProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
