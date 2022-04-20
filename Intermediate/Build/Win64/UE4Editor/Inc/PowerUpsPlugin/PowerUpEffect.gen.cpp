// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerUpsPlugin/Public/PowerUpEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpEffect() {}
// Cross Module References
	POWERUPSPLUGIN_API UEnum* Z_Construct_UEnum_PowerUpsPlugin_EOperation();
	UPackage* Z_Construct_UPackage__Script_PowerUpsPlugin();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister();
	POWERUPSPLUGIN_API UClass* Z_Construct_UClass_UPowerUpEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PowerUpsPlugin_EOperation, Z_Construct_UPackage__Script_PowerUpsPlugin(), TEXT("EOperation"));
		}
		return Singleton;
	}
	template<> POWERUPSPLUGIN_API UEnum* StaticEnum<EOperation>()
	{
		return EOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOperation(EOperation_StaticEnum, TEXT("/Script/PowerUpsPlugin"), TEXT("EOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PowerUpsPlugin_EOperation_Hash() { return 137925241U; }
	UEnum* Z_Construct_UEnum_PowerUpsPlugin_EOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PowerUpsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOperation"), 0, Get_Z_Construct_UEnum_PowerUpsPlugin_EOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOperation::Sum", (int64)EOperation::Sum },
				{ "EOperation::Product", (int64)EOperation::Product },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
				{ "Product.DisplayName", "Product" },
				{ "Product.Name", "EOperation::Product" },
				{ "Sum.DisplayName", "Sum" },
				{ "Sum.Name", "EOperation::Sum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PowerUpsPlugin,
				nullptr,
				"EOperation",
				"EOperation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPowerUpEffect::StaticRegisterNativesUPowerUpEffect()
	{
	}
	UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister()
	{
		return UPowerUpEffect::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modification_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PowerUpsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Editor" },
		{ "IncludePath", "PowerUpEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PowerUpEffect" },
		{ "Comment", "// Parameters\n" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
		{ "ToolTip", "Parameters" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffect, Name), METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Variable_MetaData[] = {
		{ "Category", "PowerUpEffect" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffect, Variable), METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Modification_MetaData[] = {
		{ "Category", "PowerUpEffect" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Modification = { "Modification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffect, Modification), METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Modification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Modification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "PowerUpEffect" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "PowerUpEffect" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffect, Operation), Z_Construct_UEnum_PowerUpsPlugin_EOperation, METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerUpEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Modification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffect_Statics::NewProp_Operation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpEffect_Statics::ClassParams = {
		&UPowerUpEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPowerUpEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpEffect, 3417902031);
	template<> POWERUPSPLUGIN_API UClass* StaticClass<UPowerUpEffect>()
	{
		return UPowerUpEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpEffect(Z_Construct_UClass_UPowerUpEffect, &UPowerUpEffect::StaticClass, TEXT("/Script/PowerUpsPlugin"), TEXT("UPowerUpEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
