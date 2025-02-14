// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEAPMOTION_LeapTool_generated_h
#error "LeapTool.generated.h already included, missing '#pragma once' in LeapTool.h"
#endif
#define LEAPMOTION_LeapTool_generated_h

#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_RPC_WRAPPERS
#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapTool(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapTool(); \
	public: \
	DECLARE_CLASS(ULeapTool, ULeapPointable, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapTool) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapTool*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesULeapTool(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapTool(); \
	public: \
	DECLARE_CLASS(ULeapTool, ULeapPointable, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapTool) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapTool*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapTool); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapTool(const ULeapTool& InCopy); \
public:


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapTool(const ULeapTool& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapTool)


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_7_PROLOG
#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_RPC_WRAPPERS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_INCLASS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_INCLASS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapTool."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
