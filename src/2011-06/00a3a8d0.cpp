// roc 2011-06 00a3a8d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a8d0
//
// 00a3a8d0  a114d0cc00           mov eax, dword ptr [0xccd014]
// 00a3a8d5  85c0                 test eax, eax
// 00a3a8d7  7409                 je 0xa3a8e2
// 00a3a8d9  50                   push eax
// 00a3a8da  e879f7dcff           call 0x80a058
// 00a3a8df  83c404               add esp, 4
// 00a3a8e2  c705f8cfcc00e0bea500 mov dword ptr [0xcccff8], 0xa5bee0
// 00a3a8ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
