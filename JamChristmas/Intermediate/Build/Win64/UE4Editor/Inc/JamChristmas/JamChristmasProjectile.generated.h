// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef JAMCHRISTMAS_JamChristmasProjectile_generated_h
#error "JamChristmasProjectile.generated.h already included, missing '#pragma once' in JamChristmasProjectile.h"
#endif
#define JAMCHRISTMAS_JamChristmasProjectile_generated_h

#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_SPARSE_DATA
#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamChristmasProjectile(); \
	friend struct Z_Construct_UClass_AJamChristmasProjectile_Statics; \
public: \
	DECLARE_CLASS(AJamChristmasProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamChristmas"), NO_API) \
	DECLARE_SERIALIZER(AJamChristmasProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAJamChristmasProjectile(); \
	friend struct Z_Construct_UClass_AJamChristmasProjectile_Statics; \
public: \
	DECLARE_CLASS(AJamChristmasProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamChristmas"), NO_API) \
	DECLARE_SERIALIZER(AJamChristmasProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJamChristmasProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJamChristmasProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamChristmasProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamChristmasProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamChristmasProjectile(AJamChristmasProjectile&&); \
	NO_API AJamChristmasProjectile(const AJamChristmasProjectile&); \
public:


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamChristmasProjectile(AJamChristmasProjectile&&); \
	NO_API AJamChristmasProjectile(const AJamChristmasProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamChristmasProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamChristmasProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamChristmasProjectile)


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AJamChristmasProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AJamChristmasProjectile, ProjectileMovement); }


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_9_PROLOG
#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_SPARSE_DATA \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_RPC_WRAPPERS \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_INCLASS \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_SPARSE_DATA \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_INCLASS_NO_PURE_DECLS \
	JamChristmas_Source_JamChristmas_JamChristmasProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMCHRISTMAS_API UClass* StaticClass<class AJamChristmasProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamChristmas_Source_JamChristmas_JamChristmasProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
