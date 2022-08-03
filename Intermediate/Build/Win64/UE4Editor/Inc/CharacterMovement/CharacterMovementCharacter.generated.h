// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHARACTERMOVEMENT_CharacterMovementCharacter_generated_h
#error "CharacterMovementCharacter.generated.h already included, missing '#pragma once' in CharacterMovementCharacter.h"
#endif
#define CHARACTERMOVEMENT_CharacterMovementCharacter_generated_h

#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_SPARSE_DATA
#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_RPC_WRAPPERS
#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMovementCharacter(); \
	friend struct Z_Construct_UClass_ACharacterMovementCharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovementCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovementCharacter)


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterMovementCharacter(); \
	friend struct Z_Construct_UClass_ACharacterMovementCharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovementCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovementCharacter)


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterMovementCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterMovementCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovementCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovementCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovementCharacter(ACharacterMovementCharacter&&); \
	NO_API ACharacterMovementCharacter(const ACharacterMovementCharacter&); \
public:


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovementCharacter(ACharacterMovementCharacter&&); \
	NO_API ACharacterMovementCharacter(const ACharacterMovementCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovementCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovementCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMovementCharacter)


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACharacterMovementCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACharacterMovementCharacter, FollowCamera); }


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_9_PROLOG
#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_RPC_WRAPPERS \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_INCLASS \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERMOVEMENT_API UClass* StaticClass<class ACharacterMovementCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CharacterMovement_Source_CharacterMovement_CharacterMovementCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
