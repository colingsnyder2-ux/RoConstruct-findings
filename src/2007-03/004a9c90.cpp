// roc 2007-03 004a9c90  unit: seg_004a0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9c90
//
// 004a9c90  a074918b00           mov al, byte ptr [0x8b9174]
// 004a9c95  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getValidatingDebug@DebugSettings@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
