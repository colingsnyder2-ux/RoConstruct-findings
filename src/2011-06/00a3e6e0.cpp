// roc 2011-06 00a3e6e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e6e0
//
// 00a3e6e0  a17038cd00           mov eax, dword ptr [0xcd3870]
// 00a3e6e5  85c0                 test eax, eax
// 00a3e6e7  7409                 je 0xa3e6f2
// 00a3e6e9  50                   push eax
// 00a3e6ea  e869b9dcff           call 0x80a058
// 00a3e6ef  83c404               add esp, 4
// 00a3e6f2  c7055038cd00e0bea500 mov dword ptr [0xcd3850], 0xa5bee0
// 00a3e6fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
