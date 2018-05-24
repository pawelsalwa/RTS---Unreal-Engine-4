// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SALWARTS_MyCharacter_generated_h

#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_RPC_WRAPPERS
#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_EVENT_PARMS \
	struct MyCharacter_eventDamageReceived_Parms \
	{ \
		float Amount; \
	};


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_CALLBACK_WRAPPERS
#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyCharacter(); \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyCharacter(); \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_17_PROLOG \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_EVENT_PARMS


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_RPC_WRAPPERS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_CALLBACK_WRAPPERS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_INCLASS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_CALLBACK_WRAPPERS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_INCLASS_NO_PURE_DECLS \
	SalwaRTS_Source_SalwaRTS_MyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SalwaRTS_Source_SalwaRTS_MyCharacter_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::Player) \
	op(ETeam::AI) \
	op(ETeam::Unknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
