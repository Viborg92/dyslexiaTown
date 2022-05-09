// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestVillage_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestVillage;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestVillage()
	{
		if (!Z_Registration_Info_UPackage__Script_TestVillage.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestVillage",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x09359751,
				0x2147F347,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestVillage.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestVillage.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestVillage(Z_Construct_UPackage__Script_TestVillage, TEXT("/Script/TestVillage"), Z_Registration_Info_UPackage__Script_TestVillage, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09359751, 0x2147F347));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
