// roc 2011-06 00a311c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a311c0
//
// 00a311c0  a1b033cb00           mov eax, dword ptr [0xcb33b0]
// 00a311c5  85c0                 test eax, eax
// 00a311c7  7409                 je 0xa311d2
// 00a311c9  50                   push eax
// 00a311ca  e8898eddff           call 0x80a058
// 00a311cf  83c404               add esp, 4
// 00a311d2  c7059033cb00e0bea500 mov dword ptr [0xcb3390], 0xa5bee0
// 00a311dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
