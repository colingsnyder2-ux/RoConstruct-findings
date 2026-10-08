// roc 2007-03 00779d60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779d60
//
// 00779d60  a160ca8b00           mov eax, dword ptr [0x8bca60]
// 00779d65  50                   push eax
// 00779d66  e88543eaff           call 0x61e0f0
// 00779d6b  83c404               add esp, 4
// 00779d6e  c70548ca8b0064617800 mov dword ptr [0x8bca48], 0x786164
// 00779d78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
