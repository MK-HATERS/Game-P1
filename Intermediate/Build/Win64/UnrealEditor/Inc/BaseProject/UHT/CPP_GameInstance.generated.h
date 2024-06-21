// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CPP_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEPROJECT_CPP_GameInstance_generated_h
#error "CPP_GameInstance.generated.h already included, missing '#pragma once' in CPP_GameInstance.h"
#endif
#define BASEPROJECT_CPP_GameInstance_generated_h

#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_GameInstance(); \
	friend struct Z_Construct_UClass_UCPP_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UCPP_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(UCPP_GameInstance)


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_GameInstance(UCPP_GameInstance&&); \
	UCPP_GameInstance(const UCPP_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_GameInstance) \
	NO_API virtual ~UCPP_GameInstance();


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_12_PROLOG
#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEPROJECT_API UClass* StaticClass<class UCPP_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_System_CPP_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
