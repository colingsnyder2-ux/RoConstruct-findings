// roc 2007-03 0077a350  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a350
//
// 0077a350  a10cd58b00           mov eax, dword ptr [0x8bd50c]
// 0077a355  50                   push eax
// 0077a356  e8953deaff           call 0x61e0f0
// 0077a35b  83c404               add esp, 4
// 0077a35e  c705f4d48b0064617800 mov dword ptr [0x8bd4f4], 0x786164
// 0077a368  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
