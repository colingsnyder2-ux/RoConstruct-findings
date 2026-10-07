// roc 2008-06 007fdd90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdd90
//
// 007fdd90  a1b0619700           mov eax, dword ptr [0x9761b0]
// 007fdd95  85c0                 test eax, eax
// 007fdd97  7409                 je 0x7fdda2
// 007fdd99  50                   push eax
// 007fdd9a  e8db28eaff           call 0x6a067a
// 007fdd9f  83c404               add esp, 4
// 007fdda2  c7059861970030b78000 mov dword ptr [0x976198], 0x80b730
// 007fddac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
