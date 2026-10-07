// roc 2011-06 00a314c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a314c0
//
// 00a314c0  a11435cb00           mov eax, dword ptr [0xcb3514]
// 00a314c5  85c0                 test eax, eax
// 00a314c7  7409                 je 0xa314d2
// 00a314c9  50                   push eax
// 00a314ca  e8898bddff           call 0x80a058
// 00a314cf  83c404               add esp, 4
// 00a314d2  c705f834cb00e0bea500 mov dword ptr [0xcb34f8], 0xa5bee0
// 00a314dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
