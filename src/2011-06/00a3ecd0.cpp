// roc 2011-06 00a3ecd0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ecd0
//
// 00a3ecd0  a16040cd00           mov eax, dword ptr [0xcd4060]
// 00a3ecd5  85c0                 test eax, eax
// 00a3ecd7  7409                 je 0xa3ece2
// 00a3ecd9  50                   push eax
// 00a3ecda  e879b3dcff           call 0x80a058
// 00a3ecdf  83c404               add esp, 4
// 00a3ece2  c7054040cd00e0bea500 mov dword ptr [0xcd4040], 0xa5bee0
// 00a3ecec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
