// roc 2011-06 00a3a2a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a2a0
//
// 00a3a2a0  a17cc4cc00           mov eax, dword ptr [0xccc47c]
// 00a3a2a5  85c0                 test eax, eax
// 00a3a2a7  7409                 je 0xa3a2b2
// 00a3a2a9  50                   push eax
// 00a3a2aa  e8a9fddcff           call 0x80a058
// 00a3a2af  83c404               add esp, 4
// 00a3a2b2  c70560c4cc00e0bea500 mov dword ptr [0xccc460], 0xa5bee0
// 00a3a2bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
