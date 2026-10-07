// roc 2011-06 00a3e1e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e1e0
//
// 00a3e1e0  a10832cd00           mov eax, dword ptr [0xcd3208]
// 00a3e1e5  85c0                 test eax, eax
// 00a3e1e7  7409                 je 0xa3e1f2
// 00a3e1e9  50                   push eax
// 00a3e1ea  e869bedcff           call 0x80a058
// 00a3e1ef  83c404               add esp, 4
// 00a3e1f2  c705ec31cd00e0bea500 mov dword ptr [0xcd31ec], 0xa5bee0
// 00a3e1fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
