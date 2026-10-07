// roc 2008-06 007fb7e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb7e0
//
// 007fb7e0  a1b4029700           mov eax, dword ptr [0x9702b4]
// 007fb7e5  85c0                 test eax, eax
// 007fb7e7  7409                 je 0x7fb7f2
// 007fb7e9  50                   push eax
// 007fb7ea  e88b4eeaff           call 0x6a067a
// 007fb7ef  83c404               add esp, 4
// 007fb7f2  c7059c02970030b78000 mov dword ptr [0x97029c], 0x80b730
// 007fb7fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
