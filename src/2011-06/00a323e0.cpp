// roc 2011-06 00a323e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a323e0
//
// 00a323e0  a1bc5fcb00           mov eax, dword ptr [0xcb5fbc]
// 00a323e5  85c0                 test eax, eax
// 00a323e7  7409                 je 0xa323f2
// 00a323e9  50                   push eax
// 00a323ea  e8697cddff           call 0x80a058
// 00a323ef  83c404               add esp, 4
// 00a323f2  c705a05fcb00e0bea500 mov dword ptr [0xcb5fa0], 0xa5bee0
// 00a323fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
