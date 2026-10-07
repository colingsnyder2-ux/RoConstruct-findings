// roc 2011-06 00a3a930  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a930
//
// 00a3a930  a1b0cfcc00           mov eax, dword ptr [0xcccfb0]
// 00a3a935  85c0                 test eax, eax
// 00a3a937  7409                 je 0xa3a942
// 00a3a939  50                   push eax
// 00a3a93a  e819f7dcff           call 0x80a058
// 00a3a93f  83c404               add esp, 4
// 00a3a942  c70594cfcc00e0bea500 mov dword ptr [0xcccf94], 0xa5bee0
// 00a3a94c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
