// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Udemy_MP_Steam/Udemy_MP_SteamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemy_MP_SteamGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UDEMY_MP_STEAM_API UClass* Z_Construct_UClass_AUdemy_MP_SteamGameMode();
	UDEMY_MP_STEAM_API UClass* Z_Construct_UClass_AUdemy_MP_SteamGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Udemy_MP_Steam();
// End Cross Module References
	void AUdemy_MP_SteamGameMode::StaticRegisterNativesAUdemy_MP_SteamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemy_MP_SteamGameMode);
	UClass* Z_Construct_UClass_AUdemy_MP_SteamGameMode_NoRegister()
	{
		return AUdemy_MP_SteamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Udemy_MP_Steam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Udemy_MP_SteamGameMode.h" },
		{ "ModuleRelativePath", "Udemy_MP_SteamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemy_MP_SteamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::ClassParams = {
		&AUdemy_MP_SteamGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUdemy_MP_SteamGameMode()
	{
		if (!Z_Registration_Info_UClass_AUdemy_MP_SteamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemy_MP_SteamGameMode.OuterSingleton, Z_Construct_UClass_AUdemy_MP_SteamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUdemy_MP_SteamGameMode.OuterSingleton;
	}
	template<> UDEMY_MP_STEAM_API UClass* StaticClass<AUdemy_MP_SteamGameMode>()
	{
		return AUdemy_MP_SteamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemy_MP_SteamGameMode);
	AUdemy_MP_SteamGameMode::~AUdemy_MP_SteamGameMode() {}
	struct Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUdemy_MP_SteamGameMode, AUdemy_MP_SteamGameMode::StaticClass, TEXT("AUdemy_MP_SteamGameMode"), &Z_Registration_Info_UClass_AUdemy_MP_SteamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemy_MP_SteamGameMode), 2078348578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamGameMode_h_4019826663(TEXT("/Script/Udemy_MP_Steam"),
		Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
