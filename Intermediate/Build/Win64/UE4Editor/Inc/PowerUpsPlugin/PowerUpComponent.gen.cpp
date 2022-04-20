// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerUpsPlugin/Public/PowerUpComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpComponent() {}
// Cross Module References
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpComponent_NoRegister();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PowerUpsPlugin();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpUser_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPowerUpComponent::execActivatePowerUp)
	{
		P_GET_OBJECT(UPowerUpUser,Z_Param_PowerUpUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePowerUp(Z_Param_PowerUpUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerUpComponent::execGetPowerUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPowerUp();
		P_NATIVE_END;
	}
	void UPowerUpComponent::StaticRegisterNativesUPowerUpComponent()
	{
		UClass* Class = UPowerUpComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePowerUp", &UPowerUpComponent::execActivatePowerUp },
			{ "GetPowerUp", &UPowerUpComponent::execGetPowerUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics
	{
		struct PowerUpComponent_eventActivatePowerUp_Parms
		{
			UPowerUpUser* PowerUpUser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerUpUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::NewProp_PowerUpUser_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::NewProp_PowerUpUser = { "PowerUpUser", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUpComponent_eventActivatePowerUp_Parms, PowerUpUser), Z_Construct_UClass_UPowerUpUser_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::NewProp_PowerUpUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::NewProp_PowerUpUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::NewProp_PowerUpUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerUpComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerUpComponent, nullptr, "ActivatePowerUp", nullptr, nullptr, sizeof(PowerUpComponent_eventActivatePowerUp_Parms), Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerUpComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerUpComponent, nullptr, "GetPowerUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerUpComponent_GetPowerUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerUpComponent_GetPowerUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerUpComponent_NoRegister()
	{
		return UPowerUpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_effects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_effects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PowerUpsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerUpComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerUpComponent_ActivatePowerUp, "ActivatePowerUp" }, // 1468596812
		{ &Z_Construct_UFunction_UPowerUpComponent_GetPowerUp, "GetPowerUp" }, // 174618831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PowerUpComponent.h" },
		{ "ModuleRelativePath", "Public/PowerUpComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects_Inner = { "effects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPowerUpEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects_MetaData[] = {
		{ "Category", "PowerUpComponent" },
		{ "ModuleRelativePath", "Public/PowerUpComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects = { "effects", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpComponent, effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerUpComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpComponent_Statics::NewProp_effects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpComponent_Statics::ClassParams = {
		&UPowerUpComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerUpComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpComponent, 683932719);
	template<> POWERUPSPLUGIN_API UClass* StaticClass<UPowerUpComponent>()
	{
		return UPowerUpComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpComponent(Z_Construct_UClass_UPowerUpComponent, &UPowerUpComponent::StaticClass, TEXT("/Script/PowerUpsPlugin"), TEXT("UPowerUpComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
