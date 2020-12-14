// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamChristmas/JamChristmasGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamChristmasGameMode() {}
// Cross Module References
	JAMCHRISTMAS_API UClass* Z_Construct_UClass_AJamChristmasGameMode_NoRegister();
	JAMCHRISTMAS_API UClass* Z_Construct_UClass_AJamChristmasGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JamChristmas();
// End Cross Module References
	void AJamChristmasGameMode::StaticRegisterNativesAJamChristmasGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJamChristmasGameMode_NoRegister()
	{
		return AJamChristmasGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJamChristmasGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamChristmasGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JamChristmas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamChristmasGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JamChristmasGameMode.h" },
		{ "ModuleRelativePath", "JamChristmasGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamChristmasGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamChristmasGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJamChristmasGameMode_Statics::ClassParams = {
		&AJamChristmasGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJamChristmasGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamChristmasGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamChristmasGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJamChristmasGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJamChristmasGameMode, 2887129904);
	template<> JAMCHRISTMAS_API UClass* StaticClass<AJamChristmasGameMode>()
	{
		return AJamChristmasGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJamChristmasGameMode(Z_Construct_UClass_AJamChristmasGameMode, &AJamChristmasGameMode::StaticClass, TEXT("/Script/JamChristmas"), TEXT("AJamChristmasGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamChristmasGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
