// roc 2008-06 007fe1e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe1e0
//
// 007fe1e0  a1c86c9700           mov eax, dword ptr [0x976cc8]
// 007fe1e5  85c0                 test eax, eax
// 007fe1e7  7409                 je 0x7fe1f2
// 007fe1e9  50                   push eax
// 007fe1ea  e88b24eaff           call 0x6a067a
// 007fe1ef  83c404               add esp, 4
// 007fe1f2  c705b06c970030b78000 mov dword ptr [0x976cb0], 0x80b730
// 007fe1fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
