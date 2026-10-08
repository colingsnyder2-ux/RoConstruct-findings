// roc 2007-03 00779840  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779840
//
// 00779840  a12cbc8b00           mov eax, dword ptr [0x8bbc2c]
// 00779845  50                   push eax
// 00779846  e8a548eaff           call 0x61e0f0
// 0077984b  83c404               add esp, 4
// 0077984e  c70514bc8b0064617800 mov dword ptr [0x8bbc14], 0x786164
// 00779858  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
