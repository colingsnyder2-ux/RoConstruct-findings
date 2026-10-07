// roc 2008-06 007fc8e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc8e0
//
// 007fc8e0  a16c3d9700           mov eax, dword ptr [0x973d6c]
// 007fc8e5  85c0                 test eax, eax
// 007fc8e7  7409                 je 0x7fc8f2
// 007fc8e9  50                   push eax
// 007fc8ea  e88b3deaff           call 0x6a067a
// 007fc8ef  83c404               add esp, 4
// 007fc8f2  c705543d970030b78000 mov dword ptr [0x973d54], 0x80b730
// 007fc8fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
