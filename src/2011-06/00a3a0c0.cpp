// roc 2011-06 00a3a0c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a0c0
//
// 00a3a0c0  a1dcc5cc00           mov eax, dword ptr [0xccc5dc]
// 00a3a0c5  85c0                 test eax, eax
// 00a3a0c7  7409                 je 0xa3a0d2
// 00a3a0c9  50                   push eax
// 00a3a0ca  e889ffdcff           call 0x80a058
// 00a3a0cf  83c404               add esp, 4
// 00a3a0d2  c705c0c5cc00e0bea500 mov dword ptr [0xccc5c0], 0xa5bee0
// 00a3a0dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
