#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HubMarker

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HubMarker.W_HubMarker_C
// 0x0018 (0x0358 - 0x0340)
class UW_HubMarker_C final : public UWorldMapMarker
{
public:
	class UWidgetAnimation*                       ClickAnim;                                         // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CollisionZone;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        UnknownSwitcher;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HubMarker_C">();
	}
	static class UW_HubMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HubMarker_C>();
	}
};
static_assert(alignof(UW_HubMarker_C) == 0x000008, "Wrong alignment on UW_HubMarker_C");
static_assert(sizeof(UW_HubMarker_C) == 0x000358, "Wrong size on UW_HubMarker_C");
static_assert(offsetof(UW_HubMarker_C, ClickAnim) == 0x000340, "Member 'UW_HubMarker_C::ClickAnim' has a wrong offset!");
static_assert(offsetof(UW_HubMarker_C, CollisionZone) == 0x000348, "Member 'UW_HubMarker_C::CollisionZone' has a wrong offset!");
static_assert(offsetof(UW_HubMarker_C, UnknownSwitcher) == 0x000350, "Member 'UW_HubMarker_C::UnknownSwitcher' has a wrong offset!");

}

