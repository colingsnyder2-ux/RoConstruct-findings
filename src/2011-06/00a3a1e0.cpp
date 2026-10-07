// roc 2011-06 00a3a1e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a1e0
//
// 00a3a1e0  a1dcc3cc00           mov eax, dword ptr [0xccc3dc]
// 00a3a1e5  85c0                 test eax, eax
// 00a3a1e7  7409                 je 0xa3a1f2
// 00a3a1e9  50                   push eax
// 00a3a1ea  e869fedcff           call 0x80a058
// 00a3a1ef  83c404               add esp, 4
// 00a3a1f2  c705c0c3cc00e0bea500 mov dword ptr [0xccc3c0], 0xa5bee0
// 00a3a1fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
