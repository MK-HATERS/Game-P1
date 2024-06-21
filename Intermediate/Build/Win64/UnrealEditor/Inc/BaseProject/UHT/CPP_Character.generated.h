// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CPP_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEPROJECT_CPP_Character_generated_h
#error "CPP_Character.generated.h already included, missing '#pragma once' in CPP_Character.h"
#endif
#define BASEPROJECT_CPP_Character_generated_h

#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Character(); \
	friend struct Z_Construct_UClass_ACPP_Character_Statics; \
public: \
	DECLARE_CLASS(ACPP_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Character)


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_Character(ACPP_Character&&); \
	ACPP_Character(const ACPP_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Character) \
	NO_API virtual ~ACPP_Character();


#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_9_PROLOG
#define FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEPROJECT_API UClass* StaticClass<class ACPP_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_NewGameProject_Source_BaseProject_Character_CPP_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
