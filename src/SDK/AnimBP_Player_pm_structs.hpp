#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Player_pm

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_Player_pm.AnimBP_Player_pm_C.AnimBlueprintGeneratedConstantData
// 0x01C7 (0x01C8 - 0x0001)
struct AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   m_NameProperty_237;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 m_ArrayProperty_238;                               // 0x0010(0x0010)(BlueprintVisible, EditFixedSize)
	class UAnimSequenceBase*                      m_AnimSequenceBase_239;                            // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      m_AnimSequenceBase_240;                            // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      m_AnimSequenceBase_241;                            // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      m_AnimSequenceBase_242;                            // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<float>                                 m_ArrayProperty_243;                               // 0x0040(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 m_ArrayProperty_244;                               // 0x0050(0x0010)(BlueprintVisible)
	ESequenceEvalReinit                           m_ByteProperty_245;                                // 0x0060(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          m_BoolProperty_246;                                // 0x0061(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         m_FloatProperty_247;                               // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      m_AnimSequenceBase_248;                            // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAnimSyncMethod                               m_EnumProperty_249;                                // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                m_ByteProperty_250;                                // 0x0071(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   m_NameProperty_251;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          m_BlendProfile_252;                                // 0x0080(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            m_CurveFloat_253;                                  // 0x0088(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          m_BoolProperty_254;                                // 0x0090(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             m_EnumProperty_255;                                // 0x0091(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      m_EnumProperty_256;                                // 0x0092(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x5];                                       // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 m_ArrayProperty_257;                               // 0x0098(0x0010)(BlueprintVisible, EditFixedSize)
	ERefPoseType                                  m_ByteProperty_258;                                // 0x00A8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   m_StructProperty_259;                              // 0x00B0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_Tag                     AnimBlueprintExtension_Tag;                        // 0x00D0(0x0060)()
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0130(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x01B0(0x0018)()
};
static_assert(alignof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData) == 0x0001C8, "Wrong size on AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_NameProperty_237) == 0x000004, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_NameProperty_237' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ArrayProperty_238) == 0x000010, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ArrayProperty_238' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_AnimSequenceBase_239) == 0x000020, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_AnimSequenceBase_239' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_AnimSequenceBase_240) == 0x000028, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_AnimSequenceBase_240' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_AnimSequenceBase_241) == 0x000030, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_AnimSequenceBase_241' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_AnimSequenceBase_242) == 0x000038, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_AnimSequenceBase_242' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ArrayProperty_243) == 0x000040, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ArrayProperty_243' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ArrayProperty_244) == 0x000050, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ArrayProperty_244' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ByteProperty_245) == 0x000060, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ByteProperty_245' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_BoolProperty_246) == 0x000061, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_BoolProperty_246' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_FloatProperty_247) == 0x000064, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_FloatProperty_247' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_AnimSequenceBase_248) == 0x000068, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_AnimSequenceBase_248' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_EnumProperty_249) == 0x000070, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_EnumProperty_249' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ByteProperty_250) == 0x000071, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ByteProperty_250' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_NameProperty_251) == 0x000074, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_NameProperty_251' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_BlendProfile_252) == 0x000080, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_BlendProfile_252' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_CurveFloat_253) == 0x000088, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_CurveFloat_253' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_BoolProperty_254) == 0x000090, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_BoolProperty_254' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_EnumProperty_255) == 0x000091, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_EnumProperty_255' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_EnumProperty_256) == 0x000092, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_EnumProperty_256' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ArrayProperty_257) == 0x000098, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ArrayProperty_257' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_ByteProperty_258) == 0x0000A8, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_ByteProperty_258' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, m_StructProperty_259) == 0x0000B0, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::m_StructProperty_259' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Tag) == 0x0000D0, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000130, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001B0, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AnimBP_Player_pm.AnimBP_Player_pm_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          m_BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         m_FloatProperty_0;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         m_FloatProperty_1;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         m_ByteProperty_2;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          m_BoolProperty_3;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          m_BoolProperty_4;                                  // 0x000E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_BoolProperty) == 0x000001, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_BoolProperty' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_FloatProperty_0) == 0x000004, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_FloatProperty_0' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_FloatProperty_1) == 0x000008, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_FloatProperty_1' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_ByteProperty_2) == 0x00000C, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_ByteProperty_2' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_BoolProperty_3) == 0x00000D, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_BoolProperty_3' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData, m_BoolProperty_4) == 0x00000E, "Member 'AnimBP_Player_pm::FAnimBlueprintGeneratedMutableData::m_BoolProperty_4' has a wrong offset!");

}

