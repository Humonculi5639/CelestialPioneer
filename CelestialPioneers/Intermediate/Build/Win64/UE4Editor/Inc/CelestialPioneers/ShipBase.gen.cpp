// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CelestialPioneers/Public/ShipBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipBase() {}
// Cross Module References
	CELESTIALPIONEERS_API UClass* Z_Construct_UClass_AShipBase_NoRegister();
	CELESTIALPIONEERS_API UClass* Z_Construct_UClass_AShipBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CelestialPioneers();
// End Cross Module References
	void AShipBase::StaticRegisterNativesAShipBase()
	{
	}
	UClass* Z_Construct_UClass_AShipBase_NoRegister()
	{
		return AShipBase::StaticClass();
	}
	struct Z_Construct_UClass_AShipBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CelestialPioneers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShipBase.h" },
		{ "ModuleRelativePath", "Public/ShipBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShipBase_Statics::ClassParams = {
		&AShipBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AShipBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShipBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShipBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipBase, 4142576493);
	template<> CELESTIALPIONEERS_API UClass* StaticClass<AShipBase>()
	{
		return AShipBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipBase(Z_Construct_UClass_AShipBase, &AShipBase::StaticClass, TEXT("/Script/CelestialPioneers"), TEXT("AShipBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
