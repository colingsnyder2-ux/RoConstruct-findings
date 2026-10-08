// roc 2007-03 007798c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007798c0
//
// 007798c0  a1f4bb8b00           mov eax, dword ptr [0x8bbbf4]
// 007798c5  50                   push eax
// 007798c6  e82548eaff           call 0x61e0f0
// 007798cb  83c404               add esp, 4
// 007798ce  c705dcbb8b0064617800 mov dword ptr [0x8bbbdc], 0x786164
// 007798d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
