// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CPP_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEPROJECT_CPP_PlayerController_generated_h
#error "CPP_PlayerController.generated.h already included, missing '#pragma once' in CPP_PlayerController.h"
#endif
#define BASEPROJECT_CPP_PlayerController_generated_h

#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_PlayerController(); \
	friend struct Z_Construct_UClass_ACPP_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPP_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(ACPP_PlayerController)


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_PlayerController(ACPP_PlayerController&&); \
	ACPP_PlayerController(const ACPP_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_PlayerController) \
	NO_API virtual ~ACPP_PlayerController();


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_12_PROLOG
#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEPROJECT_API UClass* StaticClass<class ACPP_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
