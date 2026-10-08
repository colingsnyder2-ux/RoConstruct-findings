// roc 2007-03 0077ab00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ab00
//
// 0077ab00  a118ec8b00           mov eax, dword ptr [0x8bec18]
// 0077ab05  50                   push eax
// 0077ab06  e8e535eaff           call 0x61e0f0
// 0077ab0b  83c404               add esp, 4
// 0077ab0e  c70500ec8b0064617800 mov dword ptr [0x8bec00], 0x786164
// 0077ab18  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
