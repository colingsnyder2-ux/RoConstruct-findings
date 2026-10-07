// roc 2011-06 00a33540  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33540
//
// 00a33540  a1b47bcb00           mov eax, dword ptr [0xcb7bb4]
// 00a33545  85c0                 test eax, eax
// 00a33547  7409                 je 0xa33552
// 00a33549  50                   push eax
// 00a3354a  e8096bddff           call 0x80a058
// 00a3354f  83c404               add esp, 4
// 00a33552  c705987bcb00e0bea500 mov dword ptr [0xcb7b98], 0xa5bee0
// 00a3355c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
