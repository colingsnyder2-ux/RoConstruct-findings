// roc 2011-06 00a337a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a337a0
//
// 00a337a0  a1147bcb00           mov eax, dword ptr [0xcb7b14]
// 00a337a5  85c0                 test eax, eax
// 00a337a7  7409                 je 0xa337b2
// 00a337a9  50                   push eax
// 00a337aa  e8a968ddff           call 0x80a058
// 00a337af  83c404               add esp, 4
// 00a337b2  c705f87acb00e0bea500 mov dword ptr [0xcb7af8], 0xa5bee0
// 00a337bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
