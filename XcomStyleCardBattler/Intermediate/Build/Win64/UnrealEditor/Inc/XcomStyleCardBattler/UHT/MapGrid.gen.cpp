// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XcomStyleCardBattler/MapGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapGrid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_XcomStyleCardBattler();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AMapGrid();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AMapGrid_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapGrid Function GetActorGridPosition ***********************************
struct Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics
{
	struct MapGrid_eventGetActorGridPosition_Parms
	{
		AActor* Actor;
		int32 OutX;
		int32 OutY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetActorGridPosition_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetActorGridPosition_Parms, OutX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetActorGridPosition_Parms, OutY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapGrid_eventGetActorGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapGrid_eventGetActorGridPosition_Parms), &Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_OutX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_OutY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "GetActorGridPosition", Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::MapGrid_eventGetActorGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::MapGrid_eventGetActorGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_GetActorGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_GetActorGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execGetActorGridPosition)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActorGridPosition(Z_Param_Actor,Z_Param_Out_OutX,Z_Param_Out_OutY);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function GetActorGridPosition *************************************

// ********** Begin Class AMapGrid Function GetCellFromWorldPosition *******************************
struct Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics
{
	struct MapGrid_eventGetCellFromWorldPosition_Parms
	{
		FVector WorldPosition;
		int32 OutX;
		int32 OutY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellFromWorldPosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellFromWorldPosition_Parms, OutX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellFromWorldPosition_Parms, OutY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapGrid_eventGetCellFromWorldPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapGrid_eventGetCellFromWorldPosition_Parms), &Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_OutX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_OutY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "GetCellFromWorldPosition", Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::MapGrid_eventGetCellFromWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::MapGrid_eventGetCellFromWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execGetCellFromWorldPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCellFromWorldPosition(Z_Param_Out_WorldPosition,Z_Param_Out_OutX,Z_Param_Out_OutY);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function GetCellFromWorldPosition *********************************

// ********** Begin Class AMapGrid Function GetCellWorldPosition ***********************************
struct Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics
{
	struct MapGrid_eventGetCellWorldPosition_Parms
	{
		int32 X;
		int32 Y;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellWorldPosition_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellWorldPosition_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetCellWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "GetCellWorldPosition", Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::MapGrid_eventGetCellWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::MapGrid_eventGetCellWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_GetCellWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_GetCellWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execGetCellWorldPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCellWorldPosition(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function GetCellWorldPosition *************************************

// ********** Begin Class AMapGrid Function GetDistanceBetweenCells ********************************
struct Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics
{
	struct MapGrid_eventGetDistanceBetweenCells_Parms
	{
		int32 X1;
		int32 Y1;
		int32 X2;
		int32 Y2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_X1 = { "X1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetDistanceBetweenCells_Parms, X1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_Y1 = { "Y1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetDistanceBetweenCells_Parms, Y1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_X2 = { "X2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetDistanceBetweenCells_Parms, X2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_Y2 = { "Y2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetDistanceBetweenCells_Parms, Y2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventGetDistanceBetweenCells_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_X1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_Y1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_X2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_Y2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "GetDistanceBetweenCells", Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::MapGrid_eventGetDistanceBetweenCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::MapGrid_eventGetDistanceBetweenCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execGetDistanceBetweenCells)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X1);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y1);
	P_GET_PROPERTY(FIntProperty,Z_Param_X2);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDistanceBetweenCells(Z_Param_X1,Z_Param_Y1,Z_Param_X2,Z_Param_Y2);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function GetDistanceBetweenCells **********************************

// ********** Begin Class AMapGrid Function IsValidGridPosition ************************************
struct Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics
{
	struct MapGrid_eventIsValidGridPosition_Parms
	{
		int32 X;
		int32 Y;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventIsValidGridPosition_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventIsValidGridPosition_Parms, Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapGrid_eventIsValidGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapGrid_eventIsValidGridPosition_Parms), &Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "IsValidGridPosition", Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::MapGrid_eventIsValidGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::MapGrid_eventIsValidGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_IsValidGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_IsValidGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execIsValidGridPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidGridPosition(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function IsValidGridPosition **************************************

// ********** Begin Class AMapGrid Function RegenerateGrid *****************************************
struct Z_Construct_UFunction_AMapGrid_RegenerateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility functions\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_RegenerateGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "RegenerateGrid", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_RegenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_RegenerateGrid_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapGrid_RegenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_RegenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execRegenerateGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateGrid();
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function RegenerateGrid *******************************************

// ********** Begin Class AMapGrid Function SnapActorToCell ****************************************
struct Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics
{
	struct MapGrid_eventSnapActorToCell_Parms
	{
		AActor* Actor;
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement functions\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventSnapActorToCell_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventSnapActorToCell_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventSnapActorToCell_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "SnapActorToCell", Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::MapGrid_eventSnapActorToCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::MapGrid_eventSnapActorToCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_SnapActorToCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_SnapActorToCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execSnapActorToCell)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapActorToCell(Z_Param_Actor,Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function SnapActorToCell ******************************************

// ********** Begin Class AMapGrid Function SnapActorToNearestCell *********************************
struct Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics
{
	struct MapGrid_eventSnapActorToNearestCell_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGrid_eventSnapActorToNearestCell_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapGrid, nullptr, "SnapActorToNearestCell", Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::MapGrid_eventSnapActorToNearestCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::MapGrid_eventSnapActorToNearestCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGrid::execSnapActorToNearestCell)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapActorToNearestCell(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AMapGrid Function SnapActorToNearestCell ***********************************

// ********** Begin Class AMapGrid *****************************************************************
void AMapGrid::StaticRegisterNativesAMapGrid()
{
	UClass* Class = AMapGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorGridPosition", &AMapGrid::execGetActorGridPosition },
		{ "GetCellFromWorldPosition", &AMapGrid::execGetCellFromWorldPosition },
		{ "GetCellWorldPosition", &AMapGrid::execGetCellWorldPosition },
		{ "GetDistanceBetweenCells", &AMapGrid::execGetDistanceBetweenCells },
		{ "IsValidGridPosition", &AMapGrid::execIsValidGridPosition },
		{ "RegenerateGrid", &AMapGrid::execRegenerateGrid },
		{ "SnapActorToCell", &AMapGrid::execSnapActorToCell },
		{ "SnapActorToNearestCell", &AMapGrid::execSnapActorToNearestCell },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapGrid;
UClass* AMapGrid::GetPrivateStaticClass()
{
	using TClass = AMapGrid;
	if (!Z_Registration_Info_UClass_AMapGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapGrid"),
			Z_Registration_Info_UClass_AMapGrid.InnerSingleton,
			StaticRegisterNativesAMapGrid,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMapGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapGrid_NoRegister()
{
	return AMapGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapGrid.h" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid dimensions (number of cells)\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid dimensions (number of cells)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of each individual cell\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each individual cell" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeightOffset_MetaData[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height offset above ground to prevent Z-fighting\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height offset above ground to prevent Z-fighting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLineThickness_MetaData[] = {
		{ "Category", "Grid Visuals" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual settings\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridColor_MetaData[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "MapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellMesh_MetaData[] = {
		{ "Category", "Grid Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional: Use a static mesh for grid cells (leave empty to use debug lines)\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Use a static mesh for grid cells (leave empty to use debug lines)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellMaterial_MetaData[] = {
		{ "Category", "Grid Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to apply to the grid cells\n" },
#endif
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to apply to the grid cells" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component to hold instanced meshes if using mesh visualization\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component to hold instanced meshes if using mesh visualization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridHeightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridColor;
	static void NewProp_bShowGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CellMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CellMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapGrid_GetActorGridPosition, "GetActorGridPosition" }, // 601404622
		{ &Z_Construct_UFunction_AMapGrid_GetCellFromWorldPosition, "GetCellFromWorldPosition" }, // 373049879
		{ &Z_Construct_UFunction_AMapGrid_GetCellWorldPosition, "GetCellWorldPosition" }, // 1051666656
		{ &Z_Construct_UFunction_AMapGrid_GetDistanceBetweenCells, "GetDistanceBetweenCells" }, // 2616195224
		{ &Z_Construct_UFunction_AMapGrid_IsValidGridPosition, "IsValidGridPosition" }, // 3485094050
		{ &Z_Construct_UFunction_AMapGrid_RegenerateGrid, "RegenerateGrid" }, // 1375981027
		{ &Z_Construct_UFunction_AMapGrid_SnapActorToCell, "SnapActorToCell" }, // 2279401863
		{ &Z_Construct_UFunction_AMapGrid_SnapActorToNearestCell, "SnapActorToNearestCell" }, // 360814030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridHeightOffset = { "GridHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeightOffset_MetaData), NewProp_GridHeightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridLineThickness = { "GridLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLineThickness_MetaData), NewProp_GridLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridColor = { "GridColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridColor_MetaData), NewProp_GridColor_MetaData) };
void Z_Construct_UClass_AMapGrid_Statics::NewProp_bShowGrid_SetBit(void* Obj)
{
	((AMapGrid*)Obj)->bShowGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapGrid), &Z_Construct_UClass_AMapGrid_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGrid_MetaData), NewProp_bShowGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_CellMesh = { "CellMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, CellMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellMesh_MetaData), NewProp_CellMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_CellMaterial = { "CellMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, CellMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellMaterial_MetaData), NewProp_CellMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGrid_Statics::NewProp_GridMeshComponent = { "GridMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGrid, GridMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMeshComponent_MetaData), NewProp_GridMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_bShowGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_CellMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_CellMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGrid_Statics::NewProp_GridMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_XcomStyleCardBattler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapGrid_Statics::ClassParams = {
	&AMapGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapGrid_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapGrid()
{
	if (!Z_Registration_Info_UClass_AMapGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapGrid.OuterSingleton, Z_Construct_UClass_AMapGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapGrid.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGrid);
AMapGrid::~AMapGrid() {}
// ********** End Class AMapGrid *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h__Script_XcomStyleCardBattler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapGrid, AMapGrid::StaticClass, TEXT("AMapGrid"), &Z_Registration_Info_UClass_AMapGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapGrid), 2131695948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h__Script_XcomStyleCardBattler_541527437(TEXT("/Script/XcomStyleCardBattler"),
	Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h__Script_XcomStyleCardBattler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_MapGrid_h__Script_XcomStyleCardBattler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
