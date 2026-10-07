// roc 2011-06 00a3a100  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a100
//
// 00a3a100  a11cc8cc00           mov eax, dword ptr [0xccc81c]
// 00a3a105  85c0                 test eax, eax
// 00a3a107  7409                 je 0xa3a112
// 00a3a109  50                   push eax
// 00a3a10a  e849ffdcff           call 0x80a058
// 00a3a10f  83c404               add esp, 4
// 00a3a112  c70500c8cc00e0bea500 mov dword ptr [0xccc800], 0xa5bee0
// 00a3a11c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
