// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	SALWARTS_API UEnum* Z_Construct_UEnum_SalwaRTS_ETeam();
	UPackage* Z_Construct_UPackage__Script_SalwaRTS();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SALWARTS_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_Attack();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_DamageReceived();
	SALWARTS_API UFunction* Z_Construct_UFunction_AMyCharacter_MoveTo();
// End Cross Module References
	static UEnum* ETeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SalwaRTS_ETeam, Z_Construct_UPackage__Script_SalwaRTS(), TEXT("ETeam"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeam(ETeam_StaticEnum, TEXT("/Script/SalwaRTS"), TEXT("ETeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SalwaRTS_ETeam_CRC() { return 2280337551U; }
	UEnum* Z_Construct_UEnum_SalwaRTS_ETeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SalwaRTS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeam"), 0, Get_Z_Construct_UEnum_SalwaRTS_ETeam_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeam::Player", (int64)ETeam::Player },
				{ "ETeam::AI", (int64)ETeam::AI },
				{ "ETeam::Unknown", (int64)ETeam::Unknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SalwaRTS,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETeam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETeam",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AMyCharacter_Attack = FName(TEXT("Attack"));
	void AMyCharacter::Attack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_Attack),NULL);
	}
	static FName NAME_AMyCharacter_DamageReceived = FName(TEXT("DamageReceived"));
	void AMyCharacter::DamageReceived(float Amount)
	{
		MyCharacter_eventDamageReceived_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_DamageReceived),&Parms);
	}
	static FName NAME_AMyCharacter_MoveTo = FName(TEXT("MoveTo"));
	void AMyCharacter::MoveTo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_MoveTo),NULL);
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_DamageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventDamageReceived_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amount,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "DamageReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MyCharacter_eventDamageReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "MoveTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_SalwaRTS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyCharacter_Attack, "Attack" }, // 1732198705
				{ &Z_Construct_UFunction_AMyCharacter_DamageReceived, "DamageReceived" }, // 3991705061
				{ &Z_Construct_UFunction_AMyCharacter_MoveTo, "MoveTo" }, // 3495412222
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyCharacter.h" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			auto NewProp_bCanAttack_SetBit = [](void* Obj){ ((AMyCharacter*)Obj)->bCanAttack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttack = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanAttack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanAttack_MetaData, ARRAY_COUNT(NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			auto NewProp_bIsAttacking_SetBit = [](void* Obj){ ((AMyCharacter*)Obj)->bIsAttacking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAttacking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAttacking_MetaData, ARRAY_COUNT(NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
				{ "Category", "Teams" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Enum, "Team", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Team), Z_Construct_UEnum_SalwaRTS_ETeam, METADATA_PARAMS(NewProp_Team_MetaData, ARRAY_COUNT(NewProp_Team_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerAttack_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerAttack = { UE4CodeGen_Private::EPropertyClass::Float, "DamagePerAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, DamagePerAttack), METADATA_PARAMS(NewProp_DamagePerAttack_MetaData, ARRAY_COUNT(NewProp_DamagePerAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDuration_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDuration = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, AttackDuration), METADATA_PARAMS(NewProp_AttackDuration_MetaData, ARRAY_COUNT(NewProp_AttackDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownBetweenAttacks_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownBetweenAttacks = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownBetweenAttacks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CooldownBetweenAttacks), METADATA_PARAMS(NewProp_CooldownBetweenAttacks_MetaData, ARRAY_COUNT(NewProp_CooldownBetweenAttacks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHp = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentHp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CurrentHp), METADATA_PARAMS(NewProp_CurrentHp_MetaData, ARRAY_COUNT(NewProp_CurrentHp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHp = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, MaxHp), METADATA_PARAMS(NewProp_MaxHp_MetaData, ARRAY_COUNT(NewProp_MaxHp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleUnits_MetaData[] = {
				{ "Category", "Units" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleUnits = { UE4CodeGen_Private::EPropertyClass::Array, "VisibleUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, VisibleUnits), METADATA_PARAMS(NewProp_VisibleUnits_MetaData, ARRAY_COUNT(NewProp_VisibleUnits_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleUnits_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "VisibleUnits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAttacking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Team,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Team_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagePerAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownBetweenAttacks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentHp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibleUnits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibleUnits_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 1069270076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/SalwaRTS"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
