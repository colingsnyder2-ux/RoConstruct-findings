// roc 2011-06 00a3ee90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ee90
//
// 00a3ee90  a10044cd00           mov eax, dword ptr [0xcd4400]
// 00a3ee95  85c0                 test eax, eax
// 00a3ee97  7409                 je 0xa3eea2
// 00a3ee99  50                   push eax
// 00a3ee9a  e8b9b1dcff           call 0x80a058
// 00a3ee9f  83c404               add esp, 4
// 00a3eea2  c705e043cd00e0bea500 mov dword ptr [0xcd43e0], 0xa5bee0
// 00a3eeac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
