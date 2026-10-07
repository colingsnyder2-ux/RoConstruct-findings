// roc 2011-06 00a3a0a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a0a0
//
// 00a3a0a0  a15cc7cc00           mov eax, dword ptr [0xccc75c]
// 00a3a0a5  85c0                 test eax, eax
// 00a3a0a7  7409                 je 0xa3a0b2
// 00a3a0a9  50                   push eax
// 00a3a0aa  e8a9ffdcff           call 0x80a058
// 00a3a0af  83c404               add esp, 4
// 00a3a0b2  c70540c7cc00e0bea500 mov dword ptr [0xccc740], 0xa5bee0
// 00a3a0bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
