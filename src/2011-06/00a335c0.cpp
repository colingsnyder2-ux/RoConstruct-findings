// roc 2011-06 00a335c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a335c0
//
// 00a335c0  a1287dcb00           mov eax, dword ptr [0xcb7d28]
// 00a335c5  85c0                 test eax, eax
// 00a335c7  7409                 je 0xa335d2
// 00a335c9  50                   push eax
// 00a335ca  e8896addff           call 0x80a058
// 00a335cf  83c404               add esp, 4
// 00a335d2  c7050c7dcb00e0bea500 mov dword ptr [0xcb7d0c], 0xa5bee0
// 00a335dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
