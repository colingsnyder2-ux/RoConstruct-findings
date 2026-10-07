// roc 2011-06 00a3d6e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d6e0
//
// 00a3d6e0  a13824cd00           mov eax, dword ptr [0xcd2438]
// 00a3d6e5  85c0                 test eax, eax
// 00a3d6e7  7409                 je 0xa3d6f2
// 00a3d6e9  50                   push eax
// 00a3d6ea  e869c9dcff           call 0x80a058
// 00a3d6ef  83c404               add esp, 4
// 00a3d6f2  c7051c24cd00e0bea500 mov dword ptr [0xcd241c], 0xa5bee0
// 00a3d6fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
