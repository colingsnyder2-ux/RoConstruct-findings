// roc 2011-06 00a323a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a323a0
//
// 00a323a0  a1dc5fcb00           mov eax, dword ptr [0xcb5fdc]
// 00a323a5  85c0                 test eax, eax
// 00a323a7  7409                 je 0xa323b2
// 00a323a9  50                   push eax
// 00a323aa  e8a97cddff           call 0x80a058
// 00a323af  83c404               add esp, 4
// 00a323b2  c705c05fcb00e0bea500 mov dword ptr [0xcb5fc0], 0xa5bee0
// 00a323bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
