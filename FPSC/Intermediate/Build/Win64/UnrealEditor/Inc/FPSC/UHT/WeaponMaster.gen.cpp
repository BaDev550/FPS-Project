// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSC/Public/Weapons/WeaponMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPSC_API UClass* Z_Construct_UClass_AWeaponMaster();
	FPSC_API UClass* Z_Construct_UClass_AWeaponMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSC();
// End Cross Module References
	void AWeaponMaster::StaticRegisterNativesAWeaponMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponMaster);
	UClass* Z_Construct_UClass_AWeaponMaster_NoRegister()
	{
		return AWeaponMaster::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMaster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponMaster.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponMaster_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponMaster_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponMaster, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMaster_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AWeaponMaster_Statics::NewProp_WeaponMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMaster_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponMaster_Statics::ClassParams = {
		&AWeaponMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponMaster()
	{
		if (!Z_Registration_Info_UClass_AWeaponMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponMaster.OuterSingleton, Z_Construct_UClass_AWeaponMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponMaster.OuterSingleton;
	}
	template<> FPSC_API UClass* StaticClass<AWeaponMaster>()
	{
		return AWeaponMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponMaster);
	AWeaponMaster::~AWeaponMaster() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_Weapons_WeaponMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_Weapons_WeaponMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponMaster, AWeaponMaster::StaticClass, TEXT("AWeaponMaster"), &Z_Registration_Info_UClass_AWeaponMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponMaster), 1369841287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_Weapons_WeaponMaster_h_248736751(TEXT("/Script/FPSC"),
		Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_Weapons_WeaponMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FPS_Project_FPSC_Source_FPSC_Public_Weapons_WeaponMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
