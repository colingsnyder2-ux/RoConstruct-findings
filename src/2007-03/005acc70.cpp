// roc 2007-03 005acc70  unit: seg_005a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acc70
//
// 005acc70  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005acc73  e9182c0400           jmp 0x5ef890
// library rbxgs/v8world\World.cpp (function ?onJointPrimitiveNulling@World@RBX@@QAEXPAVJoint@2@PAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
