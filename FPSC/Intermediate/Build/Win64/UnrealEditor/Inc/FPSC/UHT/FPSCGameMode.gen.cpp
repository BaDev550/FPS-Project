// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSC/Public/GameMode/FPSCGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPSC_API UClass* Z_Construct_UClass_AFPSCGameMode();
	FPSC_API UClass* Z_Construct_UClass_AFPSCGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSC();
// End Cross Module References
	void AFPSCGameMode::StaticRegisterNativesAFPSCGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCGameMode);
	UClass* Z_Construct_UClass_AFPSCGameMode_NoRegister()
	{
		return AFPSCGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/FPSCGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/FPSCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCGameMode_Statics::ClassParams = {
		&AFPSCGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPSCGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPSCGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCGameMode.OuterSingleton, Z_Construct_UClass_AFPSCGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSCGameMode.OuterSingleton;
	}
	template<> FPSC_API UClass* StaticClass<AFPSCGameMode>()
	{
		return AFPSCGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCGameMode);
	AFPSCGameMode::~AFPSCGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_GameMode_FPSCGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_GameMode_FPSCGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCGameMode, AFPSCGameMode::StaticClass, TEXT("AFPSCGameMode"), &Z_Registration_Info_UClass_AFPSCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCGameMode), 1159777566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_GameMode_FPSCGameMode_h_3243382600(TEXT("/Script/FPSC"),
		Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_GameMode_FPSCGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_GameMode_FPSCGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
