// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XcomStyleCardBattler/GridCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_XcomStyleCardBattler();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridCharacter();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridCharacter_NoRegister();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AMapGrid_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGridCharacter Function CanMoveToCell ************************************
struct Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics
{
	struct GridCharacter_eventCanMoveToCell_Parms
	{
		int32 TargetX;
		int32 TargetY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "GridCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_TargetX = { "TargetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventCanMoveToCell_Parms, TargetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_TargetY = { "TargetY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventCanMoveToCell_Parms, TargetY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridCharacter_eventCanMoveToCell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridCharacter_eventCanMoveToCell_Parms), &Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_TargetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_TargetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridCharacter, nullptr, "CanMoveToCell", Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::GridCharacter_eventCanMoveToCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::GridCharacter_eventCanMoveToCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridCharacter_CanMoveToCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridCharacter_CanMoveToCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridCharacter::execCanMoveToCell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveToCell(Z_Param_TargetX,Z_Param_TargetY);
	P_NATIVE_END;
}
// ********** End Class AGridCharacter Function CanMoveToCell **************************************

// ********** Begin Class AGridCharacter Function GetDistanceToCell ********************************
struct Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics
{
	struct GridCharacter_eventGetDistanceToCell_Parms
	{
		int32 TargetX;
		int32 TargetY;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "GridCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_TargetX = { "TargetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventGetDistanceToCell_Parms, TargetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_TargetY = { "TargetY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventGetDistanceToCell_Parms, TargetY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventGetDistanceToCell_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_TargetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_TargetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridCharacter, nullptr, "GetDistanceToCell", Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::GridCharacter_eventGetDistanceToCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::GridCharacter_eventGetDistanceToCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridCharacter_GetDistanceToCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridCharacter_GetDistanceToCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridCharacter::execGetDistanceToCell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDistanceToCell(Z_Param_TargetX,Z_Param_TargetY);
	P_NATIVE_END;
}
// ********** End Class AGridCharacter Function GetDistanceToCell **********************************

// ********** Begin Class AGridCharacter Function MoveToCell ***************************************
struct Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics
{
	struct GridCharacter_eventMoveToCell_Parms
	{
		int32 TargetX;
		int32 TargetY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement functions\n" },
#endif
		{ "ModuleRelativePath", "GridCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::NewProp_TargetX = { "TargetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventMoveToCell_Parms, TargetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::NewProp_TargetY = { "TargetY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCharacter_eventMoveToCell_Parms, TargetY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::NewProp_TargetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::NewProp_TargetY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridCharacter, nullptr, "MoveToCell", Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::GridCharacter_eventMoveToCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::GridCharacter_eventMoveToCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridCharacter_MoveToCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridCharacter_MoveToCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridCharacter::execMoveToCell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToCell(Z_Param_TargetX,Z_Param_TargetY);
	P_NATIVE_END;
}
// ********** End Class AGridCharacter Function MoveToCell *****************************************

// ********** Begin Class AGridCharacter Function UpdateGridPosition *******************************
struct Z_Construct_UFunction_AGridCharacter_UpdateGridPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
		{ "ModuleRelativePath", "GridCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridCharacter_UpdateGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridCharacter, nullptr, "UpdateGridPosition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridCharacter_UpdateGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridCharacter_UpdateGridPosition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridCharacter_UpdateGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridCharacter_UpdateGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridCharacter::execUpdateGridPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGridPosition();
	P_NATIVE_END;
}
// ********** End Class AGridCharacter Function UpdateGridPosition *********************************

// ********** Begin Class AGridCharacter ***********************************************************
void AGridCharacter::StaticRegisterNativesAGridCharacter()
{
	UClass* Class = AGridCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMoveToCell", &AGridCharacter::execCanMoveToCell },
		{ "GetDistanceToCell", &AGridCharacter::execGetDistanceToCell },
		{ "MoveToCell", &AGridCharacter::execMoveToCell },
		{ "UpdateGridPosition", &AGridCharacter::execUpdateGridPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridCharacter;
UClass* AGridCharacter::GetPrivateStaticClass()
{
	using TClass = AGridCharacter;
	if (!Z_Registration_Info_UClass_AGridCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridCharacter"),
			Z_Registration_Info_UClass_AGridCharacter.InnerSingleton,
			StaticRegisterNativesAGridCharacter,
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
	return Z_Registration_Info_UClass_AGridCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridCharacter_NoRegister()
{
	return AGridCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GridCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GridCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGrid_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the grid this character is on\n" },
#endif
		{ "ModuleRelativePath", "GridCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the grid this character is on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindGrid_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-find nearest grid if CurrentGrid is not manually assigned\n" },
#endif
		{ "ModuleRelativePath", "GridCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-find nearest grid if CurrentGrid is not manually assigned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current grid position\n" },
#endif
		{ "ModuleRelativePath", "GridCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current grid position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "GridCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRange_MetaData[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement range in cells\n" },
#endif
		{ "ModuleRelativePath", "GridCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement range in cells" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGrid;
	static void NewProp_bAutoFindGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindGrid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridCharacter_CanMoveToCell, "CanMoveToCell" }, // 724926748
		{ &Z_Construct_UFunction_AGridCharacter_GetDistanceToCell, "GetDistanceToCell" }, // 2143141900
		{ &Z_Construct_UFunction_AGridCharacter_MoveToCell, "MoveToCell" }, // 4200605646
		{ &Z_Construct_UFunction_AGridCharacter_UpdateGridPosition, "UpdateGridPosition" }, // 1190869436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCharacter_Statics::NewProp_CurrentGrid = { "CurrentGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCharacter, CurrentGrid), Z_Construct_UClass_AMapGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGrid_MetaData), NewProp_CurrentGrid_MetaData) };
void Z_Construct_UClass_AGridCharacter_Statics::NewProp_bAutoFindGrid_SetBit(void* Obj)
{
	((AGridCharacter*)Obj)->bAutoFindGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridCharacter_Statics::NewProp_bAutoFindGrid = { "bAutoFindGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridCharacter), &Z_Construct_UClass_AGridCharacter_Statics::NewProp_bAutoFindGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindGrid_MetaData), NewProp_bAutoFindGrid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCharacter_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCharacter, GridX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridX_MetaData), NewProp_GridX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCharacter_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCharacter, GridY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridY_MetaData), NewProp_GridY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCharacter_Statics::NewProp_MovementRange = { "MovementRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCharacter, MovementRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRange_MetaData), NewProp_MovementRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCharacter_Statics::NewProp_CurrentGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCharacter_Statics::NewProp_bAutoFindGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCharacter_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCharacter_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCharacter_Statics::NewProp_MovementRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_XcomStyleCardBattler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridCharacter_Statics::ClassParams = {
	&AGridCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridCharacter_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridCharacter()
{
	if (!Z_Registration_Info_UClass_AGridCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridCharacter.OuterSingleton, Z_Construct_UClass_AGridCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridCharacter);
AGridCharacter::~AGridCharacter() {}
// ********** End Class AGridCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h__Script_XcomStyleCardBattler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridCharacter, AGridCharacter::StaticClass, TEXT("AGridCharacter"), &Z_Registration_Info_UClass_AGridCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridCharacter), 2592585171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h__Script_XcomStyleCardBattler_4124276482(TEXT("/Script/XcomStyleCardBattler"),
	Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h__Script_XcomStyleCardBattler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridCharacter_h__Script_XcomStyleCardBattler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
