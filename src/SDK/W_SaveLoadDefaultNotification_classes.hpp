#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SaveLoadDefaultNotification

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SaveLoadDefaultNotification.W_SaveLoadDefaultNotification_C
// 0x0008 (0x0308 - 0x0300)
class UW_SaveLoadDefaultNotification_C final : public USaveLoadNotificationBase
{
public:
	class UW_SaveLoadNotificationBackground_C*    Background;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SaveLoadDefaultNotification_C">();
	}
	static class UW_SaveLoadDefaultNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SaveLoadDefaultNotification_C>();
	}
};
static_assert(alignof(UW_SaveLoadDefaultNotification_C) == 0x000008, "Wrong alignment on UW_SaveLoadDefaultNotification_C");
static_assert(sizeof(UW_SaveLoadDefaultNotification_C) == 0x000308, "Wrong size on UW_SaveLoadDefaultNotification_C");
static_assert(offsetof(UW_SaveLoadDefaultNotification_C, Background) == 0x000300, "Member 'UW_SaveLoadDefaultNotification_C::Background' has a wrong offset!");

}

