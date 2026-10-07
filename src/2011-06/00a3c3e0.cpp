// roc 2011-06 00a3c3e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c3e0
//
// 00a3c3e0  a1c401cd00           mov eax, dword ptr [0xcd01c4]
// 00a3c3e5  85c0                 test eax, eax
// 00a3c3e7  7409                 je 0xa3c3f2
// 00a3c3e9  50                   push eax
// 00a3c3ea  e869dcdcff           call 0x80a058
// 00a3c3ef  83c404               add esp, 4
// 00a3c3f2  c705a801cd00e0bea500 mov dword ptr [0xcd01a8], 0xa5bee0
// 00a3c3fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
