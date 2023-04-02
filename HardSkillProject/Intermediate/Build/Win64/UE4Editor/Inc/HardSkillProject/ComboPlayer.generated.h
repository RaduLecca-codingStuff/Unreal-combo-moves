// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HARDSKILLPROJECT_ComboPlayer_generated_h
#error "ComboPlayer.generated.h already included, missing '#pragma once' in ComboPlayer.h"
#endif
#define HARDSKILLPROJECT_ComboPlayer_generated_h

#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_SPARSE_DATA
#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightHit); \
	DECLARE_FUNCTION(execLeftHit); \
	DECLARE_FUNCTION(execHit); \
	DECLARE_FUNCTION(execWipeCombo);


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightHit); \
	DECLARE_FUNCTION(execLeftHit); \
	DECLARE_FUNCTION(execHit); \
	DECLARE_FUNCTION(execWipeCombo);


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComboPlayer(); \
	friend struct Z_Construct_UClass_AComboPlayer_Statics; \
public: \
	DECLARE_CLASS(AComboPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardSkillProject"), NO_API) \
	DECLARE_SERIALIZER(AComboPlayer)


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAComboPlayer(); \
	friend struct Z_Construct_UClass_AComboPlayer_Statics; \
public: \
	DECLARE_CLASS(AComboPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardSkillProject"), NO_API) \
	DECLARE_SERIALIZER(AComboPlayer)


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComboPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComboPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComboPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComboPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComboPlayer(AComboPlayer&&); \
	NO_API AComboPlayer(const AComboPlayer&); \
public:


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComboPlayer(AComboPlayer&&); \
	NO_API AComboPlayer(const AComboPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComboPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComboPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AComboPlayer)


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_9_PROLOG
#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_SPARSE_DATA \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_RPC_WRAPPERS \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_INCLASS \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_SPARSE_DATA \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_INCLASS_NO_PURE_DECLS \
	HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HARDSKILLPROJECT_API UClass* StaticClass<class AComboPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HardSkillProject_Source_HardSkillProject_Public_ComboPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
