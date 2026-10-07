// roc 2008-06 007fcc50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc50
//
// 007fcc50  a1c0469700           mov eax, dword ptr [0x9746c0]
// 007fcc55  85c0                 test eax, eax
// 007fcc57  7409                 je 0x7fcc62
// 007fcc59  50                   push eax
// 007fcc5a  e81b3aeaff           call 0x6a067a
// 007fcc5f  83c404               add esp, 4
// 007fcc62  c705a846970030b78000 mov dword ptr [0x9746a8], 0x80b730
// 007fcc6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
