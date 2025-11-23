// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapGrid.h"

#ifdef XCOMSTYLECARDBATTLER_MapGrid_generated_h
#error "MapGrid.generated.h already included, missing '#pragma once' in MapGrid.h"
#endif
#define XCOMSTYLECARDBATTLER_MapGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AMapGrid *****************************************************************
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDistanceBetweenCells); \
	DECLARE_FUNCTION(execGetActorGridPosition); \
	DECLARE_FUNCTION(execSnapActorToNearestCell); \
	DECLARE_FUNCTION(execSnapActorToCell); \
	DECLARE_FUNCTION(execIsValidGridPosition); \
	DECLARE_FUNCTION(execGetCellFromWorldPosition); \
	DECLARE_FUNCTION(execGetCellWorldPosition); \
	DECLARE_FUNCTION(execRegenerateGrid);


XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AMapGrid_NoRegister();

#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGrid(); \
	friend struct Z_Construct_UClass_AMapGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AMapGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XcomStyleCardBattler"), Z_Construct_UClass_AMapGrid_NoRegister) \
	DECLARE_SERIALIZER(AMapGrid)


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapGrid(AMapGrid&&) = delete; \
	AMapGrid(const AMapGrid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGrid) \
	NO_API virtual ~AMapGrid();


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_10_PROLOG
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_INCLASS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapGrid;

// ********** End Class AMapGrid *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
