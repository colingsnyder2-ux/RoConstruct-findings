// roc 2007-03 00779700  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779700
//
// 00779700  a19cbc8b00           mov eax, dword ptr [0x8bbc9c]
// 00779705  50                   push eax
// 00779706  e8e549eaff           call 0x61e0f0
// 0077970b  83c404               add esp, 4
// 0077970e  c70584bc8b0064617800 mov dword ptr [0x8bbc84], 0x786164
// 00779718  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
