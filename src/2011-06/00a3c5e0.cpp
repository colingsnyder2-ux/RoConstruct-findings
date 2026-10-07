// roc 2011-06 00a3c5e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c5e0
//
// 00a3c5e0  a16c04cd00           mov eax, dword ptr [0xcd046c]
// 00a3c5e5  85c0                 test eax, eax
// 00a3c5e7  7409                 je 0xa3c5f2
// 00a3c5e9  50                   push eax
// 00a3c5ea  e869dadcff           call 0x80a058
// 00a3c5ef  83c404               add esp, 4
// 00a3c5f2  c7055004cd00e0bea500 mov dword ptr [0xcd0450], 0xa5bee0
// 00a3c5fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
