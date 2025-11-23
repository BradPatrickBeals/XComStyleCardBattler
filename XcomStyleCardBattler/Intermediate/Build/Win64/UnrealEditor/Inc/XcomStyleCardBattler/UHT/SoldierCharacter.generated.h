// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoldierCharacter.h"

#ifdef XCOMSTYLECARDBATTLER_SoldierCharacter_generated_h
#error "SoldierCharacter.generated.h already included, missing '#pragma once' in SoldierCharacter.h"
#endif
#define XCOMSTYLECARDBATTLER_SoldierCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASoldierCharacter ********************************************************
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_ASoldierCharacter_NoRegister();

#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoldierCharacter(); \
	friend struct Z_Construct_UClass_ASoldierCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_ASoldierCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASoldierCharacter, AGridCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XcomStyleCardBattler"), Z_Construct_UClass_ASoldierCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASoldierCharacter)


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASoldierCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASoldierCharacter(ASoldierCharacter&&) = delete; \
	ASoldierCharacter(const ASoldierCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoldierCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoldierCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoldierCharacter) \
	NO_API virtual ~ASoldierCharacter();


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_12_PROLOG
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASoldierCharacter;

// ********** End Class ASoldierCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
