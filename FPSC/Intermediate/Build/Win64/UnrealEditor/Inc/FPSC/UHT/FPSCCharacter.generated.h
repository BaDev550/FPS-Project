// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSC_FPSCCharacter_generated_h
#error "FPSCCharacter.generated.h already included, missing '#pragma once' in FPSCCharacter.h"
#endif
#define FPSC_FPSCCharacter_generated_h

#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_SPARSE_DATA
#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCCharacter(); \
	friend struct Z_Construct_UClass_AFPSCCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSC"), NO_API) \
	DECLARE_SERIALIZER(AFPSCCharacter)


#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCCharacter(AFPSCCharacter&&); \
	NO_API AFPSCCharacter(const AFPSCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCCharacter) \
	NO_API virtual ~AFPSCCharacter();


#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_19_PROLOG
#define FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_SPARSE_DATA \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSC_API UClass* StaticClass<class AFPSCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FPSC_Source_FPSC_FPSCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
