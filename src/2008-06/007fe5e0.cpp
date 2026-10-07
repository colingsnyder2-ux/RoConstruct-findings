// roc 2008-06 007fe5e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe5e0
//
// 007fe5e0  a114779700           mov eax, dword ptr [0x977714]
// 007fe5e5  85c0                 test eax, eax
// 007fe5e7  7409                 je 0x7fe5f2
// 007fe5e9  50                   push eax
// 007fe5ea  e88b20eaff           call 0x6a067a
// 007fe5ef  83c404               add esp, 4
// 007fe5f2  c705fc76970030b78000 mov dword ptr [0x9776fc], 0x80b730
// 007fe5fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
