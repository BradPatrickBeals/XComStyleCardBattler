// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridCharacter.h"

#ifdef XCOMSTYLECARDBATTLER_GridCharacter_generated_h
#error "GridCharacter.generated.h already included, missing '#pragma once' in GridCharacter.h"
#endif
#define XCOMSTYLECARDBATTLER_GridCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridCharacter ***********************************************************
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDistanceToCell); \
	DECLARE_FUNCTION(execUpdateGridPosition); \
	DECLARE_FUNCTION(execCanMoveToCell); \
	DECLARE_FUNCTION(execMoveToCell);


XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridCharacter_NoRegister();

#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridCharacter(); \
	friend struct Z_Construct_UClass_AGridCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XcomStyleCardBattler"), Z_Construct_UClass_AGridCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGridCharacter)


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridCharacter(AGridCharacter&&) = delete; \
	AGridCharacter(const AGridCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGridCharacter) \
	NO_API virtual ~AGridCharacter();


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_10_PROLOG
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridCharacter;

// ********** End Class AGridCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
