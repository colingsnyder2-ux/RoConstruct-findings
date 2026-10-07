// roc 2008-06 007ff6e0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff6e0
//
// 007ff6e0  a118a99700           mov eax, dword ptr [0x97a918]
// 007ff6e5  85c0                 test eax, eax
// 007ff6e7  7409                 je 0x7ff6f2
// 007ff6e9  50                   push eax
// 007ff6ea  e88b0feaff           call 0x6a067a
// 007ff6ef  83c404               add esp, 4
// 007ff6f2  c70500a9970030b78000 mov dword ptr [0x97a900], 0x80b730
// 007ff6fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
