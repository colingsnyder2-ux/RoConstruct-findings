// roc 2011-06 00a3e7a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e7a0
//
// 00a3e7a0  a11839cd00           mov eax, dword ptr [0xcd3918]
// 00a3e7a5  85c0                 test eax, eax
// 00a3e7a7  7409                 je 0xa3e7b2
// 00a3e7a9  50                   push eax
// 00a3e7aa  e8a9b8dcff           call 0x80a058
// 00a3e7af  83c404               add esp, 4
// 00a3e7b2  c705fc38cd00e0bea500 mov dword ptr [0xcd38fc], 0xa5bee0
// 00a3e7bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
