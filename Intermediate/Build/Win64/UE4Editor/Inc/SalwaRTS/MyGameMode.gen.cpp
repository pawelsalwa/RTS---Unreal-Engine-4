// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	SALWARTS_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AMyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
// End Cross Module References
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyGameMode.h" },
				{ "ModuleRelativePath", "MyGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AiUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AiUnits = { UE4CodeGen_Private::EPropertyClass::Array, "AiUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyGameMode, AiUnits), METADATA_PARAMS(NewProp_AiUnits_MetaData, ARRAY_COUNT(NewProp_AiUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AiUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AiUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerUnits = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyGameMode, PlayerUnits), METADATA_PARAMS(NewProp_PlayerUnits_MetaData, ARRAY_COUNT(NewProp_PlayerUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AiUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AiUnits_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerUnits_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameMode, 1851531474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameMode(Z_Construct_UClass_AMyGameMode, &AMyGameMode::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AMyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
