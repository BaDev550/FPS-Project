// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSCProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSC_FPSCProjectile_generated_h
#error "FPSCProjectile.generated.h already included, missing '#pragma once' in FPSCProjectile.h"
#endif
#define FPSC_FPSCProjectile_generated_h

#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_SPARSE_DATA
#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_ACCESSORS
#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCProjectile(); \
	friend struct Z_Construct_UClass_AFPSCProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSCProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSC"), NO_API) \
	DECLARE_SERIALIZER(AFPSCProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCProjectile(AFPSCProjectile&&); \
	NO_API AFPSCProjectile(const AFPSCProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCProjectile) \
	NO_API virtual ~AFPSCProjectile();


#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_12_PROLOG
#define FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_SPARSE_DATA \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_ACCESSORS \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSC_API UClass* StaticClass<class AFPSCProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FPSC_Source_FPSC_FPSCProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
