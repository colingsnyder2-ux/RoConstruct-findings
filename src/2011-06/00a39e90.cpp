// roc 2011-06 00a39e90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39e90
//
// 00a39e90  a108c3cc00           mov eax, dword ptr [0xccc308]
// 00a39e95  85c0                 test eax, eax
// 00a39e97  7409                 je 0xa39ea2
// 00a39e99  50                   push eax
// 00a39e9a  e8b901ddff           call 0x80a058
// 00a39e9f  83c404               add esp, 4
// 00a39ea2  c705ecc2cc00e0bea500 mov dword ptr [0xccc2ec], 0xa5bee0
// 00a39eac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
