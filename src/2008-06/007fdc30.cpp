// roc 2008-06 007fdc30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdc30
//
// 007fdc30  a118609700           mov eax, dword ptr [0x976018]
// 007fdc35  85c0                 test eax, eax
// 007fdc37  7409                 je 0x7fdc42
// 007fdc39  50                   push eax
// 007fdc3a  e83b2aeaff           call 0x6a067a
// 007fdc3f  83c404               add esp, 4
// 007fdc42  c7050060970030b78000 mov dword ptr [0x976000], 0x80b730
// 007fdc4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
