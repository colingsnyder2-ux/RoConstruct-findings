// roc 2011-06 00a3a260  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a260
//
// 00a3a260  a1fcc7cc00           mov eax, dword ptr [0xccc7fc]
// 00a3a265  85c0                 test eax, eax
// 00a3a267  7409                 je 0xa3a272
// 00a3a269  50                   push eax
// 00a3a26a  e8e9fddcff           call 0x80a058
// 00a3a26f  83c404               add esp, 4
// 00a3a272  c705e0c7cc00e0bea500 mov dword ptr [0xccc7e0], 0xa5bee0
// 00a3a27c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
