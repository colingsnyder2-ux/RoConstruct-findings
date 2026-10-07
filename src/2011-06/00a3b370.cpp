// roc 2011-06 00a3b370  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b370
//
// 00a3b370  a1cce5cc00           mov eax, dword ptr [0xcce5cc]
// 00a3b375  85c0                 test eax, eax
// 00a3b377  7409                 je 0xa3b382
// 00a3b379  50                   push eax
// 00a3b37a  e8d9ecdcff           call 0x80a058
// 00a3b37f  83c404               add esp, 4
// 00a3b382  c705ace5cc00e0bea500 mov dword ptr [0xcce5ac], 0xa5bee0
// 00a3b38c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
