// roc 2011-06 00a323c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a323c0
//
// 00a323c0  a1fc5acb00           mov eax, dword ptr [0xcb5afc]
// 00a323c5  85c0                 test eax, eax
// 00a323c7  7409                 je 0xa323d2
// 00a323c9  50                   push eax
// 00a323ca  e8897cddff           call 0x80a058
// 00a323cf  83c404               add esp, 4
// 00a323d2  c705e05acb00e0bea500 mov dword ptr [0xcb5ae0], 0xa5bee0
// 00a323dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
