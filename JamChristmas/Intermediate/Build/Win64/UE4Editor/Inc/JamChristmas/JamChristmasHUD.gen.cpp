// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamChristmas/JamChristmasHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamChristmasHUD() {}
// Cross Module References
	JAMCHRISTMAS_API UClass* Z_Construct_UClass_AJamChristmasHUD_NoRegister();
	JAMCHRISTMAS_API UClass* Z_Construct_UClass_AJamChristmasHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_JamChristmas();
// End Cross Module References
	void AJamChristmasHUD::StaticRegisterNativesAJamChristmasHUD()
	{
	}
	UClass* Z_Construct_UClass_AJamChristmasHUD_NoRegister()
	{
		return AJamChristmasHUD::StaticClass();
	}
	struct Z_Construct_UClass_AJamChristmasHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamChristmasHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_JamChristmas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamChristmasHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "JamChristmasHUD.h" },
		{ "ModuleRelativePath", "JamChristmasHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamChristmasHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamChristmasHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJamChristmasHUD_Statics::ClassParams = {
		&AJamChristmasHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJamChristmasHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamChristmasHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamChristmasHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJamChristmasHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJamChristmasHUD, 3276781698);
	template<> JAMCHRISTMAS_API UClass* StaticClass<AJamChristmasHUD>()
	{
		return AJamChristmasHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJamChristmasHUD(Z_Construct_UClass_AJamChristmasHUD, &AJamChristmasHUD::StaticClass, TEXT("/Script/JamChristmas"), TEXT("AJamChristmasHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamChristmasHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
