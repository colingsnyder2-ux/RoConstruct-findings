// roc 2011-06 00a33b80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33b80
//
// 00a33b80  a13c84cb00           mov eax, dword ptr [0xcb843c]
// 00a33b85  85c0                 test eax, eax
// 00a33b87  7409                 je 0xa33b92
// 00a33b89  50                   push eax
// 00a33b8a  e8c964ddff           call 0x80a058
// 00a33b8f  83c404               add esp, 4
// 00a33b92  c7052084cb00e0bea500 mov dword ptr [0xcb8420], 0xa5bee0
// 00a33b9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
