// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestVillage/TestVillageGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestVillageGameMode() {}
// Cross Module References
	TESTVILLAGE_API UClass* Z_Construct_UClass_ATestVillageGameMode_NoRegister();
	TESTVILLAGE_API UClass* Z_Construct_UClass_ATestVillageGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestVillage();
// End Cross Module References
	void ATestVillageGameMode::StaticRegisterNativesATestVillageGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestVillageGameMode);
	UClass* Z_Construct_UClass_ATestVillageGameMode_NoRegister()
	{
		return ATestVillageGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestVillageGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestVillageGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestVillageGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestVillageGameMode.h" },
		{ "ModuleRelativePath", "TestVillageGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestVillageGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestVillageGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestVillageGameMode_Statics::ClassParams = {
		&ATestVillageGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestVillageGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestVillageGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestVillageGameMode()
	{
		if (!Z_Registration_Info_UClass_ATestVillageGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestVillageGameMode.OuterSingleton, Z_Construct_UClass_ATestVillageGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestVillageGameMode.OuterSingleton;
	}
	template<> TESTVILLAGE_API UClass* StaticClass<ATestVillageGameMode>()
	{
		return ATestVillageGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestVillageGameMode);
	struct Z_CompiledInDeferFile_FID_TestVillage_Source_TestVillage_TestVillageGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestVillage_Source_TestVillage_TestVillageGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestVillageGameMode, ATestVillageGameMode::StaticClass, TEXT("ATestVillageGameMode"), &Z_Registration_Info_UClass_ATestVillageGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestVillageGameMode), 2092259165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestVillage_Source_TestVillage_TestVillageGameMode_h_918142977(TEXT("/Script/TestVillage"),
		Z_CompiledInDeferFile_FID_TestVillage_Source_TestVillage_TestVillageGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestVillage_Source_TestVillage_TestVillageGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
