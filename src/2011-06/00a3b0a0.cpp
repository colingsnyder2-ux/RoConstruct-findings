// roc 2011-06 00a3b0a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b0a0
//
// 00a3b0a0  a1a0dfcc00           mov eax, dword ptr [0xccdfa0]
// 00a3b0a5  85c0                 test eax, eax
// 00a3b0a7  7409                 je 0xa3b0b2
// 00a3b0a9  50                   push eax
// 00a3b0aa  e8a9efdcff           call 0x80a058
// 00a3b0af  83c404               add esp, 4
// 00a3b0b2  c70584dfcc00e0bea500 mov dword ptr [0xccdf84], 0xa5bee0
// 00a3b0bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
