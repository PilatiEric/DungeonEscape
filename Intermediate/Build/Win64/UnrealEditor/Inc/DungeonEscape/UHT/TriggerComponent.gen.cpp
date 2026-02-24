// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTriggerComponent ********************************************************
void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTriggerComponent;
UClass* UTriggerComponent::GetPrivateStaticClass()
{
	using TClass = UTriggerComponent;
	if (!Z_Registration_Info_UClass_UTriggerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TriggerComponent"),
			Z_Registration_Info_UClass_UTriggerComponent.InnerSingleton,
			StaticRegisterNativesUTriggerComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTriggerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
{
	return UTriggerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTriggerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverActor_MetaData[] = {
		{ "Category", "TriggerComponent" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoverActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_MoverActor = { "MoverActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerComponent, MoverActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverActor_MetaData), NewProp_MoverActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_MoverActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
	&UTriggerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriggerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerComponent()
{
	if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
UTriggerComponent::~UTriggerComponent() {}
// ********** End Class UTriggerComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_game_dev_unreal_CppCourseProjects_UnrealLessons_3_Dungeon_Escape_DungeonEscape_Source_DungeonEscape_TriggerComponent_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 668434487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_dev_unreal_CppCourseProjects_UnrealLessons_3_Dungeon_Escape_DungeonEscape_Source_DungeonEscape_TriggerComponent_h__Script_DungeonEscape_1001647780(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_game_dev_unreal_CppCourseProjects_UnrealLessons_3_Dungeon_Escape_DungeonEscape_Source_DungeonEscape_TriggerComponent_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_dev_unreal_CppCourseProjects_UnrealLessons_3_Dungeon_Escape_DungeonEscape_Source_DungeonEscape_TriggerComponent_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
