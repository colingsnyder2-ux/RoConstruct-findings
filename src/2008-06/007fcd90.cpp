// roc 2008-06 007fcd90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcd90
//
// 007fcd90  a188469700           mov eax, dword ptr [0x974688]
// 007fcd95  85c0                 test eax, eax
// 007fcd97  7409                 je 0x7fcda2
// 007fcd99  50                   push eax
// 007fcd9a  e8db38eaff           call 0x6a067a
// 007fcd9f  83c404               add esp, 4
// 007fcda2  c7057046970030b78000 mov dword ptr [0x974670], 0x80b730
// 007fcdac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
