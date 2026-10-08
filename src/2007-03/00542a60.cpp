// roc 2007-03 00542a60  unit: seg_00540000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542a60
//
// 00542a60  a0d9b38b00           mov al, byte ptr [0x8bb3d9]
// 00542a65  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getValidatingDebug@DebugSettings@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
