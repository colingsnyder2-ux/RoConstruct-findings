// roc 2011-06 00a339c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a339c0
//
// 00a339c0  a1a481cb00           mov eax, dword ptr [0xcb81a4]
// 00a339c5  85c0                 test eax, eax
// 00a339c7  7409                 je 0xa339d2
// 00a339c9  50                   push eax
// 00a339ca  e88966ddff           call 0x80a058
// 00a339cf  83c404               add esp, 4
// 00a339d2  c7058881cb00e0bea500 mov dword ptr [0xcb8188], 0xa5bee0
// 00a339dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
