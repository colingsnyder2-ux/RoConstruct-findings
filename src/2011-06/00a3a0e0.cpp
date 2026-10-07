// roc 2011-06 00a3a0e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a0e0
//
// 00a3a0e0  a11cc6cc00           mov eax, dword ptr [0xccc61c]
// 00a3a0e5  85c0                 test eax, eax
// 00a3a0e7  7409                 je 0xa3a0f2
// 00a3a0e9  50                   push eax
// 00a3a0ea  e869ffdcff           call 0x80a058
// 00a3a0ef  83c404               add esp, 4
// 00a3a0f2  c70500c6cc00e0bea500 mov dword ptr [0xccc600], 0xa5bee0
// 00a3a0fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
