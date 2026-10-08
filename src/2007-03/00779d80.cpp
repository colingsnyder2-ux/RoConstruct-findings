// roc 2007-03 00779d80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779d80
//
// 00779d80  a128ca8b00           mov eax, dword ptr [0x8bca28]
// 00779d85  50                   push eax
// 00779d86  e86543eaff           call 0x61e0f0
// 00779d8b  83c404               add esp, 4
// 00779d8e  c70510ca8b0064617800 mov dword ptr [0x8bca10], 0x786164
// 00779d98  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
