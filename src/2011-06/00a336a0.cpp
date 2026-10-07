// roc 2011-06 00a336a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a336a0
//
// 00a336a0  a1a87ccb00           mov eax, dword ptr [0xcb7ca8]
// 00a336a5  85c0                 test eax, eax
// 00a336a7  7409                 je 0xa336b2
// 00a336a9  50                   push eax
// 00a336aa  e8a969ddff           call 0x80a058
// 00a336af  83c404               add esp, 4
// 00a336b2  c7058c7ccb00e0bea500 mov dword ptr [0xcb7c8c], 0xa5bee0
// 00a336bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
