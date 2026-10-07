// roc 2011-06 00a3a6b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a6b0
//
// 00a3a6b0  a1c0cdcc00           mov eax, dword ptr [0xcccdc0]
// 00a3a6b5  85c0                 test eax, eax
// 00a3a6b7  7409                 je 0xa3a6c2
// 00a3a6b9  50                   push eax
// 00a3a6ba  e899f9dcff           call 0x80a058
// 00a3a6bf  83c404               add esp, 4
// 00a3a6c2  c705a4cdcc00e0bea500 mov dword ptr [0xcccda4], 0xa5bee0
// 00a3a6cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
