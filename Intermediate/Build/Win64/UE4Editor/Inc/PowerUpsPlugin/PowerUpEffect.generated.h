// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POWERUPSPLUGIN_PowerUpEffect_generated_h
#error "PowerUpEffect.generated.h already included, missing '#pragma once' in PowerUpEffect.h"
#endif
#define POWERUPSPLUGIN_PowerUpEffect_generated_h

#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_SPARSE_DATA
#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_RPC_WRAPPERS
#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPowerUpEffect(); \
	friend struct Z_Construct_UClass_UPowerUpEffect_Statics; \
public: \
	DECLARE_CLASS(UPowerUpEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PowerUpsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPowerUpEffect)


#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPowerUpEffect(); \
	friend struct Z_Construct_UClass_UPowerUpEffect_Statics; \
public: \
	DECLARE_CLASS(UPowerUpEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PowerUpsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPowerUpEffect)


#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerUpEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerUpEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerUpEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerUpEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerUpEffect(UPowerUpEffect&&); \
	NO_API UPowerUpEffect(const UPowerUpEffect&); \
public:


#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerUpEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerUpEffect(UPowerUpEffect&&); \
	NO_API UPowerUpEffect(const UPowerUpEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerUpEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerUpEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerUpEffect)


#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_PRIVATE_PROPERTY_OFFSET
#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_16_PROLOG
#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_PRIVATE_PROPERTY_OFFSET \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_SPARSE_DATA \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_RPC_WRAPPERS \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_INCLASS \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_PRIVATE_PROPERTY_OFFSET \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_SPARSE_DATA \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_INCLASS_NO_PURE_DECLS \
	CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POWERUPSPLUGIN_API UClass* StaticClass<class UPowerUpEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPacman_Plugins_PowerUpsPlugin_Source_PowerUpsPlugin_Public_PowerUpEffect_h


#define FOREACH_ENUM_EOPERATION(op) \
	op(EOperation::Sum) \
	op(EOperation::Product) 

enum class EOperation : uint8;
template<> POWERUPSPLUGIN_API UEnum* StaticEnum<EOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
