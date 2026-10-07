// roc 2008-06 007ff3e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff3e0
//
// 007ff3e0  a1f0a29700           mov eax, dword ptr [0x97a2f0]
// 007ff3e5  85c0                 test eax, eax
// 007ff3e7  7409                 je 0x7ff3f2
// 007ff3e9  50                   push eax
// 007ff3ea  e88b12eaff           call 0x6a067a
// 007ff3ef  83c404               add esp, 4
// 007ff3f2  c705d8a2970030b78000 mov dword ptr [0x97a2d8], 0x80b730
// 007ff3fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
