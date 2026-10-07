// roc 2008-06 007ff1e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff1e0
//
// 007ff1e0  a1d8a09700           mov eax, dword ptr [0x97a0d8]
// 007ff1e5  85c0                 test eax, eax
// 007ff1e7  7409                 je 0x7ff1f2
// 007ff1e9  50                   push eax
// 007ff1ea  e88b14eaff           call 0x6a067a
// 007ff1ef  83c404               add esp, 4
// 007ff1f2  c705c0a0970030b78000 mov dword ptr [0x97a0c0], 0x80b730
// 007ff1fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
