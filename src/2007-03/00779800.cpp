// roc 2007-03 00779800  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779800
//
// 00779800  a10cbd8b00           mov eax, dword ptr [0x8bbd0c]
// 00779805  50                   push eax
// 00779806  e8e548eaff           call 0x61e0f0
// 0077980b  83c404               add esp, 4
// 0077980e  c705f4bc8b0064617800 mov dword ptr [0x8bbcf4], 0x786164
// 00779818  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
