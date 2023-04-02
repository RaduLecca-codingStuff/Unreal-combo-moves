// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HardSkillProject/Public/ComboCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboCharacter() {}
// Cross Module References
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AComboCharacter_NoRegister();
	HARDSKILLPROJECT_API UClass* Z_Construct_UClass_AComboCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HardSkillProject();
// End Cross Module References
	DEFINE_FUNCTION(AComboCharacter::execreleaseComboKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->releaseComboKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execRightHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execLeftHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execGetHitType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHitType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execGetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execClearCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComboCharacter::execHit)
	{
		P_GET_UBOOL(Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hit(Z_Param_type);
		P_NATIVE_END;
	}
	void AComboCharacter::StaticRegisterNativesAComboCharacter()
	{
		UClass* Class = AComboCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCombo", &AComboCharacter::execClearCombo },
			{ "GetCombo", &AComboCharacter::execGetCombo },
			{ "GetHitType", &AComboCharacter::execGetHitType },
			{ "Hit", &AComboCharacter::execHit },
			{ "LeftHit", &AComboCharacter::execLeftHit },
			{ "releaseComboKey", &AComboCharacter::execreleaseComboKey },
			{ "RightHit", &AComboCharacter::execRightHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "ClearCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_ClearCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_ClearCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_GetCombo_Statics
	{
		struct ComboCharacter_eventGetCombo_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComboCharacter_eventGetCombo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "GetCombo", nullptr, nullptr, sizeof(ComboCharacter_eventGetCombo_Parms), Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_GetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_GetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_GetHitType_Statics
	{
		struct ComboCharacter_eventGetHitType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComboCharacter_eventGetHitType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "GetHitType", nullptr, nullptr, sizeof(ComboCharacter_eventGetHitType_Parms), Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_GetHitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_GetHitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_Hit_Statics
	{
		struct ComboCharacter_eventHit_Parms
		{
			bool type;
		};
		static void NewProp_type_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComboCharacter_Hit_Statics::NewProp_type_SetBit(void* Obj)
	{
		((ComboCharacter_eventHit_Parms*)Obj)->type = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComboCharacter_Hit_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComboCharacter_eventHit_Parms), &Z_Construct_UFunction_AComboCharacter_Hit_Statics::NewProp_type_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComboCharacter_Hit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComboCharacter_Hit_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_Hit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "Hit", nullptr, nullptr, sizeof(ComboCharacter_eventHit_Parms), Z_Construct_UFunction_AComboCharacter_Hit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_Hit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_Hit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_Hit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_Hit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_Hit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_LeftHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_LeftHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_LeftHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "LeftHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_LeftHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_LeftHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_LeftHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_LeftHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "releaseComboKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_releaseComboKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_releaseComboKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComboCharacter_RightHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComboCharacter_RightHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AComboCharacter_RightHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComboCharacter, nullptr, "RightHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComboCharacter_RightHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComboCharacter_RightHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComboCharacter_RightHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AComboCharacter_RightHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AComboCharacter_NoRegister()
	{
		return AComboCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AComboCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComboMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComboCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HardSkillProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AComboCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AComboCharacter_ClearCombo, "ClearCombo" }, // 1063787101
		{ &Z_Construct_UFunction_AComboCharacter_GetCombo, "GetCombo" }, // 1947427464
		{ &Z_Construct_UFunction_AComboCharacter_GetHitType, "GetHitType" }, // 1956518340
		{ &Z_Construct_UFunction_AComboCharacter_Hit, "Hit" }, // 1235001952
		{ &Z_Construct_UFunction_AComboCharacter_LeftHit, "LeftHit" }, // 4249696179
		{ &Z_Construct_UFunction_AComboCharacter_releaseComboKey, "releaseComboKey" }, // 3662345544
		{ &Z_Construct_UFunction_AComboCharacter_RightHit, "RightHit" }, // 3566210040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ComboCharacter.h" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboCharacter_Statics::NewProp_ComboMove_MetaData[] = {
		{ "Category", "ComboComponent" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AComboCharacter_Statics::NewProp_ComboMove = { "ComboMove", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComboCharacter, ComboMove), METADATA_PARAMS(Z_Construct_UClass_AComboCharacter_Statics::NewProp_ComboMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComboCharacter_Statics::NewProp_ComboMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComboCharacter_Statics::NewProp_HitType_MetaData[] = {
		{ "Category", "ComboComponent" },
		{ "ModuleRelativePath", "Public/ComboCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AComboCharacter_Statics::NewProp_HitType = { "HitType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComboCharacter, HitType), METADATA_PARAMS(Z_Construct_UClass_AComboCharacter_Statics::NewProp_HitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComboCharacter_Statics::NewProp_HitType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComboCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComboCharacter_Statics::NewProp_ComboMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComboCharacter_Statics::NewProp_HitType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComboCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComboCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComboCharacter_Statics::ClassParams = {
		&AComboCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AComboCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AComboCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComboCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComboCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComboCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComboCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComboCharacter, 1514745008);
	template<> HARDSKILLPROJECT_API UClass* StaticClass<AComboCharacter>()
	{
		return AComboCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComboCharacter(Z_Construct_UClass_AComboCharacter, &AComboCharacter::StaticClass, TEXT("/Script/HardSkillProject"), TEXT("AComboCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComboCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
