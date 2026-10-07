// roc 2011-06 00a31340  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31340
//
// 00a31340  a11833cb00           mov eax, dword ptr [0xcb3318]
// 00a31345  85c0                 test eax, eax
// 00a31347  7409                 je 0xa31352
// 00a31349  50                   push eax
// 00a3134a  e8098dddff           call 0x80a058
// 00a3134f  83c404               add esp, 4
// 00a31352  c705f832cb00e0bea500 mov dword ptr [0xcb32f8], 0xa5bee0
// 00a3135c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
