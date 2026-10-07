// roc 2008-06 007ffe90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffe90
//
// 007ffe90  a144b19700           mov eax, dword ptr [0x97b144]
// 007ffe95  85c0                 test eax, eax
// 007ffe97  7409                 je 0x7ffea2
// 007ffe99  50                   push eax
// 007ffe9a  e8db07eaff           call 0x6a067a
// 007ffe9f  83c404               add esp, 4
// 007ffea2  c70528b1970030b78000 mov dword ptr [0x97b128], 0x80b730
// 007ffeac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
