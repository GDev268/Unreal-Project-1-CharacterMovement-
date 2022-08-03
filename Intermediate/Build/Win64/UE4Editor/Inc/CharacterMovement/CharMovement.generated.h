// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHARACTERMOVEMENT_CharMovement_generated_h
#error "CharMovement.generated.h already included, missing '#pragma once' in CharMovement.h"
#endif
#define CHARACTERMOVEMENT_CharMovement_generated_h

#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_SPARSE_DATA
#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_RPC_WRAPPERS
#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharMovement(); \
	friend struct Z_Construct_UClass_ACharMovement_Statics; \
public: \
	DECLARE_CLASS(ACharMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(ACharMovement)


#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACharMovement(); \
	friend struct Z_Construct_UClass_ACharMovement_Statics; \
public: \
	DECLARE_CLASS(ACharMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(ACharMovement)


#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharMovement(ACharMovement&&); \
	NO_API ACharMovement(const ACharMovement&); \
public:


#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharMovement(ACharMovement&&); \
	NO_API ACharMovement(const ACharMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharMovement)


#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_PRIVATE_PROPERTY_OFFSET
#define CharacterMovement_Source_CharacterMovement_CharMovement_h_15_PROLOG
#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_RPC_WRAPPERS \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_INCLASS \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CharacterMovement_Source_CharacterMovement_CharMovement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_INCLASS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_CharMovement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERMOVEMENT_API UClass* StaticClass<class ACharMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CharacterMovement_Source_CharacterMovement_CharMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
