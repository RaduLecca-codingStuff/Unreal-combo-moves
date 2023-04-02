// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HARDSKILLPROJECT_ComboCharacter_generated_h
#error "ComboCharacter.generated.h already included, missing '#pragma once' in ComboCharacter.h"
#endif
#define HARDSKILLPROJECT_ComboCharacter_generated_h

#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_SPARSE_DATA
#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execreleaseComboKey); \
	DECLARE_FUNCTION(execRightHit); \
	DECLARE_FUNCTION(execLeftHit); \
	DECLARE_FUNCTION(execGetHitType); \
	DECLARE_FUNCTION(execGetCombo); \
	DECLARE_FUNCTION(execClearCombo); \
	DECLARE_FUNCTION(execHit);


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execreleaseComboKey); \
	DECLARE_FUNCTION(execRightHit); \
	DECLARE_FUNCTION(execLeftHit); \
	DECLARE_FUNCTION(execGetHitType); \
	DECLARE_FUNCTION(execGetCombo); \
	DECLARE_FUNCTION(execClearCombo); \
	DECLARE_FUNCTION(execHit);


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComboCharacter(); \
	friend struct Z_Construct_UClass_AComboCharacter_Statics; \
public: \
	DECLARE_CLASS(AComboCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardSkillProject"), NO_API) \
	DECLARE_SERIALIZER(AComboCharacter)


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAComboCharacter(); \
	friend struct Z_Construct_UClass_AComboCharacter_Statics; \
public: \
	DECLARE_CLASS(AComboCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardSkillProject"), NO_API) \
	DECLARE_SERIALIZER(AComboCharacter)


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComboCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComboCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComboCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComboCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComboCharacter(AComboCharacter&&); \
	NO_API AComboCharacter(const AComboCharacter&); \
public:


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComboCharacter(AComboCharacter&&); \
	NO_API AComboCharacter(const AComboCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComboCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComboCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AComboCharacter)


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_9_PROLOG
#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_SPARSE_DATA \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_RPC_WRAPPERS \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_INCLASS \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_SPARSE_DATA \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HARDSKILLPROJECT_API UClass* StaticClass<class AComboCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HardSkillProject_Source_HardSkillProject_Public_ComboCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
