// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BaseProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BaseProject()
	{
		if (!Z_Registration_Info_UPackage__Script_BaseProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BaseProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA6E8A2FD,
				0x337A68C2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BaseProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BaseProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BaseProject(Z_Construct_UPackage__Script_BaseProject, TEXT("/Script/BaseProject"), Z_Registration_Info_UPackage__Script_BaseProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA6E8A2FD, 0x337A68C2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
