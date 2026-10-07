// roc 2008-06 007fb1e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb1e0
//
// 007fb1e0  a1ecfc9600           mov eax, dword ptr [0x96fcec]
// 007fb1e5  85c0                 test eax, eax
// 007fb1e7  7409                 je 0x7fb1f2
// 007fb1e9  50                   push eax
// 007fb1ea  e88b54eaff           call 0x6a067a
// 007fb1ef  83c404               add esp, 4
// 007fb1f2  c705d4fc960030b78000 mov dword ptr [0x96fcd4], 0x80b730
// 007fb1fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
