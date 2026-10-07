// roc 2008-06 007fe280  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe280
//
// 007fe280  a1e46c9700           mov eax, dword ptr [0x976ce4]
// 007fe285  85c0                 test eax, eax
// 007fe287  7409                 je 0x7fe292
// 007fe289  50                   push eax
// 007fe28a  e8eb23eaff           call 0x6a067a
// 007fe28f  83c404               add esp, 4
// 007fe292  c705cc6c970030b78000 mov dword ptr [0x976ccc], 0x80b730
// 007fe29c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
