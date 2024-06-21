// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CPP_GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEPROJECT_CPP_GameMode_generated_h
#error "CPP_GameMode.generated.h already included, missing '#pragma once' in CPP_GameMode.h"
#endif
#define BASEPROJECT_CPP_GameMode_generated_h

#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_GameMode(); \
	friend struct Z_Construct_UClass_ACPP_GameMode_Statics; \
public: \
	DECLARE_CLASS(ACPP_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(ACPP_GameMode)


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_GameMode(ACPP_GameMode&&); \
	ACPP_GameMode(const ACPP_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_GameMode) \
	NO_API virtual ~ACPP_GameMode();


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_12_PROLOG
#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEPROJECT_API UClass* StaticClass<class ACPP_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_GameFramework_CPP_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
