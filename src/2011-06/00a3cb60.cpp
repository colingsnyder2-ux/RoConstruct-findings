// roc 2011-06 00a3cb60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cb60
//
// 00a3cb60  a1640fcd00           mov eax, dword ptr [0xcd0f64]
// 00a3cb65  85c0                 test eax, eax
// 00a3cb67  7409                 je 0xa3cb72
// 00a3cb69  50                   push eax
// 00a3cb6a  e8e9d4dcff           call 0x80a058
// 00a3cb6f  83c404               add esp, 4
// 00a3cb72  c705480fcd00e0bea500 mov dword ptr [0xcd0f48], 0xa5bee0
// 00a3cb7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
