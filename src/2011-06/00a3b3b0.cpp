// roc 2011-06 00a3b3b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b3b0
//
// 00a3b3b0  a188e6cc00           mov eax, dword ptr [0xcce688]
// 00a3b3b5  85c0                 test eax, eax
// 00a3b3b7  7409                 je 0xa3b3c2
// 00a3b3b9  50                   push eax
// 00a3b3ba  e899ecdcff           call 0x80a058
// 00a3b3bf  83c404               add esp, 4
// 00a3b3c2  c70568e6cc00e0bea500 mov dword ptr [0xcce668], 0xa5bee0
// 00a3b3cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
