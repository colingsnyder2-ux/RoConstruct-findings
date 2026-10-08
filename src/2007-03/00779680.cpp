// roc 2007-03 00779680  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779680
//
// 00779680  a148bc8b00           mov eax, dword ptr [0x8bbc48]
// 00779685  50                   push eax
// 00779686  e8654aeaff           call 0x61e0f0
// 0077968b  83c404               add esp, 4
// 0077968e  c70530bc8b0064617800 mov dword ptr [0x8bbc30], 0x786164
// 00779698  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
