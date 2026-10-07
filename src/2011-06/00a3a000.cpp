// roc 2011-06 00a3a000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a000
//
// 00a3a000  a1dcc4cc00           mov eax, dword ptr [0xccc4dc]
// 00a3a005  85c0                 test eax, eax
// 00a3a007  7409                 je 0xa3a012
// 00a3a009  50                   push eax
// 00a3a00a  e84900ddff           call 0x80a058
// 00a3a00f  83c404               add esp, 4
// 00a3a012  c705c0c4cc00e0bea500 mov dword ptr [0xccc4c0], 0xa5bee0
// 00a3a01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
