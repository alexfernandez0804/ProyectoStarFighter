// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoStarFighter/Bala.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBala() {}
// Cross Module References
	PROYECTOSTARFIGHTER_API UClass* Z_Construct_UClass_ABala_NoRegister();
	PROYECTOSTARFIGHTER_API UClass* Z_Construct_UClass_ABala();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProyectoStarFighter();
// End Cross Module References
	void ABala::StaticRegisterNativesABala()
	{
	}
	UClass* Z_Construct_UClass_ABala_NoRegister()
	{
		return ABala::StaticClass();
	}
	struct Z_Construct_UClass_ABala_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABala_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoStarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bala.h" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABala_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABala>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABala_Statics::ClassParams = {
		&ABala::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABala()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABala_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABala, 521205889);
	template<> PROYECTOSTARFIGHTER_API UClass* StaticClass<ABala>()
	{
		return ABala::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABala(Z_Construct_UClass_ABala, &ABala::StaticClass, TEXT("/Script/ProyectoStarFighter"), TEXT("ABala"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABala);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
