// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAMCHRISTMAS_JamChristmasCharacter_generated_h
#error "JamChristmasCharacter.generated.h already included, missing '#pragma once' in JamChristmasCharacter.h"
#endif
#define JAMCHRISTMAS_JamChristmasCharacter_generated_h

#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_SPARSE_DATA
#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_RPC_WRAPPERS
#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamChristmasCharacter(); \
	friend struct Z_Construct_UClass_AJamChristmasCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamChristmasCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamChristmas"), NO_API) \
	DECLARE_SERIALIZER(AJamChristmasCharacter)


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAJamChristmasCharacter(); \
	friend struct Z_Construct_UClass_AJamChristmasCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamChristmasCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamChristmas"), NO_API) \
	DECLARE_SERIALIZER(AJamChristmasCharacter)


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJamChristmasCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJamChristmasCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamChristmasCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamChristmasCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamChristmasCharacter(AJamChristmasCharacter&&); \
	NO_API AJamChristmasCharacter(const AJamChristmasCharacter&); \
public:


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamChristmasCharacter(AJamChristmasCharacter&&); \
	NO_API AJamChristmasCharacter(const AJamChristmasCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamChristmasCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamChristmasCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamChristmasCharacter)


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AJamChristmasCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AJamChristmasCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AJamChristmasCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AJamChristmasCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AJamChristmasCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AJamChristmasCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AJamChristmasCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AJamChristmasCharacter, L_MotionController); }


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_11_PROLOG
#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_SPARSE_DATA \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_RPC_WRAPPERS \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_INCLASS \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_SPARSE_DATA \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_INCLASS_NO_PURE_DECLS \
	JamChristmas_Source_JamChristmas_JamChristmasCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMCHRISTMAS_API UClass* StaticClass<class AJamChristmasCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamChristmas_Source_JamChristmas_JamChristmasCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
