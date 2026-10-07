// roc 2011-06 00a3c460  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c460
//
// 00a3c460  a1dc02cd00           mov eax, dword ptr [0xcd02dc]
// 00a3c465  85c0                 test eax, eax
// 00a3c467  7409                 je 0xa3c472
// 00a3c469  50                   push eax
// 00a3c46a  e8e9dbdcff           call 0x80a058
// 00a3c46f  83c404               add esp, 4
// 00a3c472  c705c002cd00e0bea500 mov dword ptr [0xcd02c0], 0xa5bee0
// 00a3c47c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
