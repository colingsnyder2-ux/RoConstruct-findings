// roc 2008-06 007fdc50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdc50
//
// 007fdc50  a184629700           mov eax, dword ptr [0x976284]
// 007fdc55  85c0                 test eax, eax
// 007fdc57  7409                 je 0x7fdc62
// 007fdc59  50                   push eax
// 007fdc5a  e81b2aeaff           call 0x6a067a
// 007fdc5f  83c404               add esp, 4
// 007fdc62  c7056c62970030b78000 mov dword ptr [0x97626c], 0x80b730
// 007fdc6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
