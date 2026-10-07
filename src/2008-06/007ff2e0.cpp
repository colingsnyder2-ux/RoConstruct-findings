// roc 2008-06 007ff2e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff2e0
//
// 007ff2e0  a1cca39700           mov eax, dword ptr [0x97a3cc]
// 007ff2e5  85c0                 test eax, eax
// 007ff2e7  7409                 je 0x7ff2f2
// 007ff2e9  50                   push eax
// 007ff2ea  e88b13eaff           call 0x6a067a
// 007ff2ef  83c404               add esp, 4
// 007ff2f2  c705b0a3970030b78000 mov dword ptr [0x97a3b0], 0x80b730
// 007ff2fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
