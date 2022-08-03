// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMovement/CharMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharMovement() {}
// Cross Module References
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharMovement_NoRegister();
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharMovement();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACharMovement::StaticRegisterNativesACharMovement()
	{
	}
	UClass* Z_Construct_UClass_ACharMovement_NoRegister()
	{
		return ACharMovement::StaticClass();
	}
	struct Z_Construct_UClass_ACharMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThaCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThaCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraFollow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharMovement_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharMovement.h" },
		{ "ModuleRelativePath", "CharMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharMovement_Statics::NewProp_ThaCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Camera Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharMovement.h" },
		{ "ToolTip", "Camera Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharMovement_Statics::NewProp_ThaCamera = { "ThaCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharMovement, ThaCamera), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharMovement_Statics::NewProp_ThaCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharMovement_Statics::NewProp_ThaCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharMovement_Statics::NewProp_CameraFollow_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Camera Properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharMovement.h" },
		{ "ToolTip", "Camera Properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharMovement_Statics::NewProp_CameraFollow = { "CameraFollow", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharMovement, CameraFollow), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharMovement_Statics::NewProp_CameraFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharMovement_Statics::NewProp_CameraFollow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharMovement_Statics::NewProp_ThaCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharMovement_Statics::NewProp_CameraFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharMovement_Statics::ClassParams = {
		&ACharMovement::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharMovement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharMovement, 1828671045);
	template<> CHARACTERMOVEMENT_API UClass* StaticClass<ACharMovement>()
	{
		return ACharMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharMovement(Z_Construct_UClass_ACharMovement, &ACharMovement::StaticClass, TEXT("/Script/CharacterMovement"), TEXT("ACharMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
