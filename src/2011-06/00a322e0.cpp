// roc 2011-06 00a322e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a322e0
//
// 00a322e0  a14c5ccb00           mov eax, dword ptr [0xcb5c4c]
// 00a322e5  85c0                 test eax, eax
// 00a322e7  7409                 je 0xa322f2
// 00a322e9  50                   push eax
// 00a322ea  e8697dddff           call 0x80a058
// 00a322ef  83c404               add esp, 4
// 00a322f2  c705305ccb00e0bea500 mov dword ptr [0xcb5c30], 0xa5bee0
// 00a322fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
