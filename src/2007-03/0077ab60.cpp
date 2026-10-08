// roc 2007-03 0077ab60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ab60
//
// 0077ab60  a150ec8b00           mov eax, dword ptr [0x8bec50]
// 0077ab65  50                   push eax
// 0077ab66  e88535eaff           call 0x61e0f0
// 0077ab6b  83c404               add esp, 4
// 0077ab6e  c70538ec8b0064617800 mov dword ptr [0x8bec38], 0x786164
// 0077ab78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
