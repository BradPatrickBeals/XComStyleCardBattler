// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridPlayerController.h"

#ifdef XCOMSTYLECARDBATTLER_GridPlayerController_generated_h
#error "GridPlayerController.generated.h already included, missing '#pragma once' in GridPlayerController.h"
#endif
#define XCOMSTYLECARDBATTLER_GridPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridPlayerController ****************************************************
XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();

#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridPlayerController(); \
	friend struct Z_Construct_UClass_AGridPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XCOMSTYLECARDBATTLER_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XcomStyleCardBattler"), Z_Construct_UClass_AGridPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGridPlayerController)


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridPlayerController(AGridPlayerController&&) = delete; \
	AGridPlayerController(const AGridPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridPlayerController) \
	NO_API virtual ~AGridPlayerController();


#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_12_PROLOG
#define FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridPlayerController;

// ********** End Class AGridPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XcomStyleCardBattler_Source_XcomStyleCardBattler_GridPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
