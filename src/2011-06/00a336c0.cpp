// roc 2011-06 00a336c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a336c0
//
// 00a336c0  a1e87ccb00           mov eax, dword ptr [0xcb7ce8]
// 00a336c5  85c0                 test eax, eax
// 00a336c7  7409                 je 0xa336d2
// 00a336c9  50                   push eax
// 00a336ca  e88969ddff           call 0x80a058
// 00a336cf  83c404               add esp, 4
// 00a336d2  c705cc7ccb00e0bea500 mov dword ptr [0xcb7ccc], 0xa5bee0
// 00a336dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
