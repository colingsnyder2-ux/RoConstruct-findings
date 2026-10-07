// roc 2008-06 007ffd90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffd90
//
// 007ffd90  a110b49700           mov eax, dword ptr [0x97b410]
// 007ffd95  85c0                 test eax, eax
// 007ffd97  7409                 je 0x7ffda2
// 007ffd99  50                   push eax
// 007ffd9a  e8db08eaff           call 0x6a067a
// 007ffd9f  83c404               add esp, 4
// 007ffda2  c705f4b3970030b78000 mov dword ptr [0x97b3f4], 0x80b730
// 007ffdac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
