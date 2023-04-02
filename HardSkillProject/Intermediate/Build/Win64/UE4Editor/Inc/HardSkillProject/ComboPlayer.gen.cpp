// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HardSkillProject/Public/ComboPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboPlayer() {}
// Cross Module References
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AComboPlayer_NoRegister();
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AComboPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_HardSkillProject();
// End Cross Module References
	DEFINE_FUNCTION(AComboPlayer::execRightHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboPlayer::execLeftHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboPlayer::execHit)
	{
		P_GET_UBOOL(Z_Param_AtkType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hit(Z_Param_AtkType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboPlayer::execWipeCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WipeCombo();
		P_NATIVE_END;
	}
	void AComboPlayer::StaticRegisterNativesAComboPlayer()
	{
		UClass* Class = AComboPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hit", &AComboPlayer::execHit },
			{ "LeftHit", &AComboPlayer::execLeftHit },
			{ "RightHit", &AComboPlayer::execRightHit },
			{ "WipeCombo", &AComboPlayer::execWipeCombo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AComboPlayer_Hit_Statics
	{
		struct ComboPlayer_eventHit_Parms
		{
			bool AtkType;
		};
		static void NewProp_AtkType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AtkType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComboPlayer_Hit_Statics::NewProp_AtkType_SetBit(void* Obj)
	{
		((ComboPlayer_eventHit_Parms*)Obj)->AtkType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComboPlayer_Hit_Statics::NewProp_AtkType = { "AtkType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComboPlayer_eventHit_Parms), &Z_Construct_UFunction_AComboPlayer_Hit_Statics::NewProp_AtkType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComboPlayer_Hit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComboPlayer_Hit_Statics::NewProp_AtkType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboPlayer_Hit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboPlayer_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboPlayer, nullptr, "Hit", nullptr, nullptr, sizeof(ComboPlayer_eventHit_Parms), Z_Construct_UFunction_AComboPlayer_Hit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboPlayer_Hit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboPlayer_Hit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboPlayer_Hit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboPlayer_Hit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboPlayer_Hit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboPlayer_LeftHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboPlayer_LeftHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboPlayer_LeftHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboPlayer, nullptr, "LeftHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboPlayer_LeftHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboPlayer_LeftHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboPlayer_LeftHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboPlayer_LeftHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboPlayer_RightHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboPlayer_RightHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboPlayer_RightHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboPlayer, nullptr, "RightHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboPlayer_RightHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboPlayer_RightHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboPlayer_RightHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboPlayer_RightHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboPlayer, nullptr, "WipeCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboPlayer_WipeCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboPlayer_WipeCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AComboPlayer_NoRegister()
	{
		return AComboPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AComboPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_combolength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_combolength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_combo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_combo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComboPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HardSkillProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AComboPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AComboPlayer_Hit, "Hit" }, // 1740418453
		{ &Z_Construct_UFunction_AComboPlayer_LeftHit, "LeftHit" }, // 1087895908
		{ &Z_Construct_UFunction_AComboPlayer_RightHit, "RightHit" }, // 3754895439
		{ &Z_Construct_UFunction_AComboPlayer_WipeCombo, "WipeCombo" }, // 1498461650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ComboPlayer.h" },
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboPlayer_Statics::NewProp_combolength_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AComboPlayer_Statics::NewProp_combolength = { "combolength", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComboPlayer, combolength), METADATA_PARAMS(Z_Construct_UClass_AComboPlayer_Statics::NewProp_combolength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayer_Statics::NewProp_combolength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboPlayer_Statics::NewProp_combo_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AComboPlayer_Statics::NewProp_combo = { "combo", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComboPlayer, combo), METADATA_PARAMS(Z_Construct_UClass_AComboPlayer_Statics::NewProp_combo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayer_Statics::NewProp_combo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComboPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComboPlayer_Statics::NewProp_combolength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComboPlayer_Statics::NewProp_combo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComboPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComboPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComboPlayer_Statics::ClassParams = {
		&AComboPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AComboPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComboPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComboPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComboPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComboPlayer, 1815816137);
	template<> HARDSKILLPROJECT_API UClass* StaticClass<AComboPlayer>()
	{
		return AComboPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComboPlayer(Z_Construct_UClass_AComboPlayer, &AComboPlayer::StaticClass, TEXT("/Script/HardSkillProject"), TEXT("AComboPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComboPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
