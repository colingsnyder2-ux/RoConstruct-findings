// roc 2011-06 00a3ee70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ee70
//
// 00a3ee70  a12844cd00           mov eax, dword ptr [0xcd4428]
// 00a3ee75  85c0                 test eax, eax
// 00a3ee77  7409                 je 0xa3ee82
// 00a3ee79  50                   push eax
// 00a3ee7a  e8d9b1dcff           call 0x80a058
// 00a3ee7f  83c404               add esp, 4
// 00a3ee82  c7050844cd00e0bea500 mov dword ptr [0xcd4408], 0xa5bee0
// 00a3ee8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
