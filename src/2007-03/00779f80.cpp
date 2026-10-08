// roc 2007-03 00779f80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779f80
//
// 00779f80  a1bccc8b00           mov eax, dword ptr [0x8bccbc]
// 00779f85  50                   push eax
// 00779f86  e86541eaff           call 0x61e0f0
// 00779f8b  83c404               add esp, 4
// 00779f8e  c705a4cc8b0064617800 mov dword ptr [0x8bcca4], 0x786164
// 00779f98  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
