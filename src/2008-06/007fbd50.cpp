// roc 2008-06 007fbd50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbd50
//
// 007fbd50  a160129700           mov eax, dword ptr [0x971260]
// 007fbd55  85c0                 test eax, eax
// 007fbd57  7409                 je 0x7fbd62
// 007fbd59  50                   push eax
// 007fbd5a  e81b49eaff           call 0x6a067a
// 007fbd5f  83c404               add esp, 4
// 007fbd62  c7054812970030b78000 mov dword ptr [0x971248], 0x80b730
// 007fbd6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
