// roc 2007-03 00779820  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779820
//
// 00779820  a148bd8b00           mov eax, dword ptr [0x8bbd48]
// 00779825  50                   push eax
// 00779826  e8c548eaff           call 0x61e0f0
// 0077982b  83c404               add esp, 4
// 0077982e  c70530bd8b0064617800 mov dword ptr [0x8bbd30], 0x786164
// 00779838  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
