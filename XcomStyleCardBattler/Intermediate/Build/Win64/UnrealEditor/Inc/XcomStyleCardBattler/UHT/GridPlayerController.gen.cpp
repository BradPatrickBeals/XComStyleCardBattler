// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XcomStyleCardBattler/GridPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_XcomStyleCardBattler();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridPlayerController();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGridPlayerController ****************************************************
void AGridPlayerController::StaticRegisterNativesAGridPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridPlayerController;
UClass* AGridPlayerController::GetPrivateStaticClass()
{
	using TClass = AGridPlayerController;
	if (!Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridPlayerController"),
			Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton,
			StaticRegisterNativesAGridPlayerController,
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
	return Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridPlayerController_NoRegister()
{
	return AGridPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GridPlayerController.h" },
		{ "ModuleRelativePath", "GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGridPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_XcomStyleCardBattler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPlayerController_Statics::ClassParams = {
	&AGridPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridPlayerController()
{
	if (!Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton, Z_Construct_UClass_AGridPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton;
}
AGridPlayerController::AGridPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPlayerController);
AGridPlayerController::~AGridPlayerController() {}
// ********** End Class AGridPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h__Script_XcomStyleCardBattler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridPlayerController, AGridPlayerController::StaticClass, TEXT("AGridPlayerController"), &Z_Registration_Info_UClass_AGridPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPlayerController), 3342952274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h__Script_XcomStyleCardBattler_518084683(TEXT("/Script/XcomStyleCardBattler"),
	Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h__Script_XcomStyleCardBattler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h__Script_XcomStyleCardBattler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
