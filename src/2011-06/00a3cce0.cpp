// roc 2011-06 00a3cce0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cce0
//
// 00a3cce0  a19010cd00           mov eax, dword ptr [0xcd1090]
// 00a3cce5  85c0                 test eax, eax
// 00a3cce7  7409                 je 0xa3ccf2
// 00a3cce9  50                   push eax
// 00a3ccea  e869d3dcff           call 0x80a058
// 00a3ccef  83c404               add esp, 4
// 00a3ccf2  c7057410cd00e0bea500 mov dword ptr [0xcd1074], 0xa5bee0
// 00a3ccfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
