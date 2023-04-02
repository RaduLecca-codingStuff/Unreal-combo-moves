// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HardSkillProject/HardSkillProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardSkillProjectGameModeBase() {}
// Cross Module References
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AHardSkillProjectGameModeBase_NoRegister();
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AHardSkillProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HardSkillProject();
// End Cross Module References
	void AHardSkillProjectGameModeBase::StaticRegisterNativesAHardSkillProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHardSkillProjectGameModeBase_NoRegister()
	{
		return AHardSkillProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HardSkillProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HardSkillProjectGameModeBase.h" },
		{ "ModuleRelativePath", "HardSkillProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHardSkillProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::ClassParams = {
		&AHardSkillProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHardSkillProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHardSkillProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHardSkillProjectGameModeBase, 3801914919);
	template<> HARDSKILLPROJECT_API UClass* StaticClass<AHardSkillProjectGameModeBase>()
	{
		return AHardSkillProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHardSkillProjectGameModeBase(Z_Construct_UClass_AHardSkillProjectGameModeBase, &AHardSkillProjectGameModeBase::StaticClass, TEXT("/Script/HardSkillProject"), TEXT("AHardSkillProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHardSkillProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
