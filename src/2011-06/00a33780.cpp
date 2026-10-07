// roc 2011-06 00a33780  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33780
//
// 00a33780  a1547bcb00           mov eax, dword ptr [0xcb7b54]
// 00a33785  85c0                 test eax, eax
// 00a33787  7409                 je 0xa33792
// 00a33789  50                   push eax
// 00a3378a  e8c968ddff           call 0x80a058
// 00a3378f  83c404               add esp, 4
// 00a33792  c705387bcb00e0bea500 mov dword ptr [0xcb7b38], 0xa5bee0
// 00a3379c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
