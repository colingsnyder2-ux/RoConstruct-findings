// roc 2008-06 007fdc10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdc10
//
// 007fdc10  a1c4609700           mov eax, dword ptr [0x9760c4]
// 007fdc15  85c0                 test eax, eax
// 007fdc17  7409                 je 0x7fdc22
// 007fdc19  50                   push eax
// 007fdc1a  e85b2aeaff           call 0x6a067a
// 007fdc1f  83c404               add esp, 4
// 007fdc22  c705a860970030b78000 mov dword ptr [0x9760a8], 0x80b730
// 007fdc2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
