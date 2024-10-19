// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSC/Public/FPSCPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FPSC_API UClass* Z_Construct_UClass_AFPSCPlayerController();
	FPSC_API UClass* Z_Construct_UClass_AFPSCPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSC();
// End Cross Module References
	void AFPSCPlayerController::StaticRegisterNativesAFPSCPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCPlayerController);
	UClass* Z_Construct_UClass_AFPSCPlayerController_NoRegister()
	{
		return AFPSCPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPSCPlayerController.h" },
		{ "ModuleRelativePath", "Public/FPSCPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCPlayerController_Statics::ClassParams = {
		&AFPSCPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPSCPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFPSCPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCPlayerController.OuterSingleton, Z_Construct_UClass_AFPSCPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSCPlayerController.OuterSingleton;
	}
	template<> FPSC_API UClass* StaticClass<AFPSCPlayerController>()
	{
		return AFPSCPlayerController::StaticClass();
	}
	AFPSCPlayerController::AFPSCPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCPlayerController);
	AFPSCPlayerController::~AFPSCPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_FPSCPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_FPSCPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCPlayerController, AFPSCPlayerController::StaticClass, TEXT("AFPSCPlayerController"), &Z_Registration_Info_UClass_AFPSCPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCPlayerController), 3810772967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_FPSCPlayerController_h_3645408653(TEXT("/Script/FPSC"),
		Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_FPSCPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_FPSCPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
