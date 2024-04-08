// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Udemy_MP_Steam/Udemy_MP_SteamCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemy_MP_SteamCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UDEMY_MP_STEAM_API UClass* Z_Construct_UClass_AUdemy_MP_SteamCharacter();
	UDEMY_MP_STEAM_API UClass* Z_Construct_UClass_AUdemy_MP_SteamCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Udemy_MP_Steam();
// End Cross Module References
	DEFINE_FUNCTION(AUdemy_MP_SteamCharacter::execJoinGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUdemy_MP_SteamCharacter::execCreateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSession();
		P_NATIVE_END;
	}
	void AUdemy_MP_SteamCharacter::StaticRegisterNativesAUdemy_MP_SteamCharacter()
	{
		UClass* Class = AUdemy_MP_SteamCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSession", &AUdemy_MP_SteamCharacter::execCreateGameSession },
			{ "JoinGameSession", &AUdemy_MP_SteamCharacter::execJoinGameSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUdemy_MP_SteamCharacter, nullptr, "CreateGameSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUdemy_MP_SteamCharacter, nullptr, "JoinGameSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemy_MP_SteamCharacter);
	UClass* Z_Construct_UClass_AUdemy_MP_SteamCharacter_NoRegister()
	{
		return AUdemy_MP_SteamCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Udemy_MP_Steam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUdemy_MP_SteamCharacter_CreateGameSession, "CreateGameSession" }, // 3277188642
		{ &Z_Construct_UFunction_AUdemy_MP_SteamCharacter_JoinGameSession, "JoinGameSession" }, // 1929613051
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Udemy_MP_SteamCharacter.h" },
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Udemy_MP_SteamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUdemy_MP_SteamCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemy_MP_SteamCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::ClassParams = {
		&AUdemy_MP_SteamCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUdemy_MP_SteamCharacter()
	{
		if (!Z_Registration_Info_UClass_AUdemy_MP_SteamCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemy_MP_SteamCharacter.OuterSingleton, Z_Construct_UClass_AUdemy_MP_SteamCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUdemy_MP_SteamCharacter.OuterSingleton;
	}
	template<> UDEMY_MP_STEAM_API UClass* StaticClass<AUdemy_MP_SteamCharacter>()
	{
		return AUdemy_MP_SteamCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemy_MP_SteamCharacter);
	AUdemy_MP_SteamCharacter::~AUdemy_MP_SteamCharacter() {}
	struct Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUdemy_MP_SteamCharacter, AUdemy_MP_SteamCharacter::StaticClass, TEXT("AUdemy_MP_SteamCharacter"), &Z_Registration_Info_UClass_AUdemy_MP_SteamCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemy_MP_SteamCharacter), 3403913234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamCharacter_h_524990935(TEXT("/Script/Udemy_MP_Steam"),
		Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_MP_Steam_Source_Udemy_MP_Steam_Udemy_MP_SteamCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
