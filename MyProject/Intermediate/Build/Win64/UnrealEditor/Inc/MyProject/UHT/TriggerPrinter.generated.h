// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerPrinter.h"

#ifdef MYPROJECT_TriggerPrinter_generated_h
#error "TriggerPrinter.generated.h already included, missing '#pragma once' in TriggerPrinter.h"
#endif
#define MYPROJECT_TriggerPrinter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ATriggerPrinter **********************************************************
#define FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


MYPROJECT_API UClass* Z_Construct_UClass_ATriggerPrinter_NoRegister();

#define FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerPrinter(); \
	friend struct Z_Construct_UClass_ATriggerPrinter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_ATriggerPrinter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerPrinter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ATriggerPrinter_NoRegister) \
	DECLARE_SERIALIZER(ATriggerPrinter)


#define FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerPrinter(ATriggerPrinter&&) = delete; \
	ATriggerPrinter(const ATriggerPrinter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerPrinter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerPrinter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerPrinter) \
	NO_API virtual ~ATriggerPrinter();


#define FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_10_PROLOG
#define FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerPrinter;

// ********** End Class ATriggerPrinter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_saman_Documents_Unreal_Projects_MyProject_Source_MyProject_TriggerPrinter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
