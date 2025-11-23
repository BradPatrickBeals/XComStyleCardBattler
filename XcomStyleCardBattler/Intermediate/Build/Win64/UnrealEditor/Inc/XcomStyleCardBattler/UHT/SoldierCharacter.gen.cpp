// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XcomStyleCardBattler/SoldierCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoldierCharacter() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_XcomStyleCardBattler();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridCharacter();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_ASoldierCharacter();
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_ASoldierCharacter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoldierCharacter ********************************************************
void ASoldierCharacter::StaticRegisterNativesASoldierCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASoldierCharacter;
UClass* ASoldierCharacter::GetPrivateStaticClass()
{
	using TClass = ASoldierCharacter;
	if (!Z_Registration_Info_UClass_ASoldierCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoldierCharacter"),
			Z_Registration_Info_UClass_ASoldierCharacter.InnerSingleton,
			StaticRegisterNativesASoldierCharacter,
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
	return Z_Registration_Info_UClass_ASoldierCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoldierCharacter_NoRegister()
{
	return ASoldierCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoldierCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SoldierCharacter.h" },
		{ "ModuleRelativePath", "SoldierCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoldierCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASoldierCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGridCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_XcomStyleCardBattler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoldierCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoldierCharacter_Statics::ClassParams = {
	&ASoldierCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoldierCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoldierCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoldierCharacter()
{
	if (!Z_Registration_Info_UClass_ASoldierCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoldierCharacter.OuterSingleton, Z_Construct_UClass_ASoldierCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoldierCharacter.OuterSingleton;
}
ASoldierCharacter::ASoldierCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoldierCharacter);
ASoldierCharacter::~ASoldierCharacter() {}
// ********** End Class ASoldierCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h__Script_XcomStyleCardBattler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoldierCharacter, ASoldierCharacter::StaticClass, TEXT("ASoldierCharacter"), &Z_Registration_Info_UClass_ASoldierCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoldierCharacter), 1000957357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h__Script_XcomStyleCardBattler_3424273929(TEXT("/Script/XcomStyleCardBattler"),
	Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h__Script_XcomStyleCardBattler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_SoldierCharacter_h__Script_XcomStyleCardBattler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
