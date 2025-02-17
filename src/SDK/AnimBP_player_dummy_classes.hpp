#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_player_dummy

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_player_dummy.AnimBP_player_dummy_C
// 0x0050 (0x14C0 - 0x1470)
class UAnimBP_player_dummy_C final : public UAnimInstancePlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1478(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1480(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1488(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x14A8(0x0010)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AnimBP_player_dummy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_player_dummy_C">();
	}
	static class UAnimBP_player_dummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_player_dummy_C>();
	}
};
static_assert(alignof(UAnimBP_player_dummy_C) == 0x000010, "Wrong alignment on UAnimBP_player_dummy_C");
static_assert(sizeof(UAnimBP_player_dummy_C) == 0x0014C0, "Wrong size on UAnimBP_player_dummy_C");
static_assert(offsetof(UAnimBP_player_dummy_C, UberGraphFrame) == 0x001470, "Member 'UAnimBP_player_dummy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_dummy_C, AnimBlueprintExtension_PropertyAccess) == 0x001478, "Member 'UAnimBP_player_dummy_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_dummy_C, AnimBlueprintExtension_Base) == 0x001480, "Member 'UAnimBP_player_dummy_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_dummy_C, AnimGraphNode_Root) == 0x001488, "Member 'UAnimBP_player_dummy_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_dummy_C, AnimGraphNode_IdentityPose) == 0x0014A8, "Member 'UAnimBP_player_dummy_C::AnimGraphNode_IdentityPose' has a wrong offset!");

}

