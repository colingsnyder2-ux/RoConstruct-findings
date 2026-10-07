// roc 2011-06 00a31000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31000
//
// 00a31000  a1442acb00           mov eax, dword ptr [0xcb2a44]
// 00a31005  85c0                 test eax, eax
// 00a31007  7409                 je 0xa31012
// 00a31009  50                   push eax
// 00a3100a  e84990ddff           call 0x80a058
// 00a3100f  83c404               add esp, 4
// 00a31012  c705282acb00e0bea500 mov dword ptr [0xcb2a28], 0xa5bee0
// 00a3101c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
