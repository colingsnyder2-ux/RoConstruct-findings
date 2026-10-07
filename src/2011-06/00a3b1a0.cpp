// roc 2011-06 00a3b1a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b1a0
//
// 00a3b1a0  a10ce0cc00           mov eax, dword ptr [0xcce00c]
// 00a3b1a5  85c0                 test eax, eax
// 00a3b1a7  7409                 je 0xa3b1b2
// 00a3b1a9  50                   push eax
// 00a3b1aa  e8a9eedcff           call 0x80a058
// 00a3b1af  83c404               add esp, 4
// 00a3b1b2  c705f0dfcc00e0bea500 mov dword ptr [0xccdff0], 0xa5bee0
// 00a3b1bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
