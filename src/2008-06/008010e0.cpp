// roc 2008-06 008010e0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008010e0
//
// 008010e0  a1e0d69700           mov eax, dword ptr [0x97d6e0]
// 008010e5  85c0                 test eax, eax
// 008010e7  7409                 je 0x8010f2
// 008010e9  50                   push eax
// 008010ea  e88bf5e9ff           call 0x6a067a
// 008010ef  83c404               add esp, 4
// 008010f2  c705c8d6970030b78000 mov dword ptr [0x97d6c8], 0x80b730
// 008010fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
