// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerUpsPlugin/Public/PowerUpUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpUser() {}
// Cross Module References
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpUser_NoRegister();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpUser();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PowerUpsPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPowerUpUser::execAddPowerUps)
	{
		P_GET_TARRAY(TSubclassOf<UPowerUpEffect> ,Z_Param_PowerUps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPowerUps(Z_Param_PowerUps);
		P_NATIVE_END;
	}
	void UPowerUpUser::StaticRegisterNativesUPowerUpUser()
	{
		UClass* Class = UPowerUpUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPowerUps", &UPowerUpUser::execAddPowerUps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics
	{
		struct PowerUpUser_eventAddPowerUps_Parms
		{
			TArray<TSubclassOf<UPowerUpEffect> > PowerUps;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUps_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PowerUps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::NewProp_PowerUps_Inner = { "PowerUps", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPowerUpEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::NewProp_PowerUps = { "PowerUps", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUpUser_eventAddPowerUps_Parms, PowerUps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::NewProp_PowerUps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::NewProp_PowerUps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerUpUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerUpUser, nullptr, "AddPowerUps", nullptr, nullptr, sizeof(PowerUpUser_eventAddPowerUps_Parms), Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerUpUser_AddPowerUps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerUpUser_AddPowerUps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerUpUser_NoRegister()
	{
		return UPowerUpUser::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuStack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PuStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PowerUpsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerUpUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerUpUser_AddPowerUps, "AddPowerUps" }, // 2574386899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PowerUpUser.h" },
		{ "ModuleRelativePath", "Public/PowerUpUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack_Inner = { "PuStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPowerUpEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerUpUser.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack = { "PuStack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpUser, PuStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerUpUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpUser_Statics::NewProp_PuStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpUser_Statics::ClassParams = {
		&UPowerUpUser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerUpUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpUser_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpUser, 2106723676);
	template<> POWERUPSPLUGIN_API UClass* StaticClass<UPowerUpUser>()
	{
		return UPowerUpUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpUser(Z_Construct_UClass_UPowerUpUser, &UPowerUpUser::StaticClass, TEXT("/Script/PowerUpsPlugin"), TEXT("UPowerUpUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
