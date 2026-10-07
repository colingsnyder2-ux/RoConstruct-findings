// roc 2011-06 00a34950  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34950
//
// 00a34950  a148b5cb00           mov eax, dword ptr [0xcbb548]
// 00a34955  85c0                 test eax, eax
// 00a34957  7409                 je 0xa34962
// 00a34959  50                   push eax
// 00a3495a  e8f956ddff           call 0x80a058
// 00a3495f  83c404               add esp, 4
// 00a34962  c7052cb5cb00e0bea500 mov dword ptr [0xcbb52c], 0xa5bee0
// 00a3496c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
