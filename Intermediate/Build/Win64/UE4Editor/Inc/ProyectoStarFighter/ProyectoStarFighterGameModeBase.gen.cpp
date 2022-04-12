// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoStarFighter/ProyectoStarFighterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoStarFighterGameModeBase() {}
// Cross Module References
	PROYECTOSTARFIGHTER_API UClass* Z_Construct_UClass_AProyectoStarFighterGameModeBase_NoRegister();
	PROYECTOSTARFIGHTER_API UClass* Z_Construct_UClass_AProyectoStarFighterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProyectoStarFighter();
// End Cross Module References
	void AProyectoStarFighterGameModeBase::StaticRegisterNativesAProyectoStarFighterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProyectoStarFighterGameModeBase_NoRegister()
	{
		return AProyectoStarFighterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoStarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProyectoStarFighterGameModeBase.h" },
		{ "ModuleRelativePath", "ProyectoStarFighterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoStarFighterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::ClassParams = {
		&AProyectoStarFighterGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoStarFighterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectoStarFighterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectoStarFighterGameModeBase, 3786422340);
	template<> PROYECTOSTARFIGHTER_API UClass* StaticClass<AProyectoStarFighterGameModeBase>()
	{
		return AProyectoStarFighterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectoStarFighterGameModeBase(Z_Construct_UClass_AProyectoStarFighterGameModeBase, &AProyectoStarFighterGameModeBase::StaticClass, TEXT("/Script/ProyectoStarFighter"), TEXT("AProyectoStarFighterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoStarFighterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
