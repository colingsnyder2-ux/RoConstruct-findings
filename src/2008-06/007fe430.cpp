// roc 2008-06 007fe430  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe430
//
// 007fe430  a128709700           mov eax, dword ptr [0x977028]
// 007fe435  85c0                 test eax, eax
// 007fe437  7409                 je 0x7fe442
// 007fe439  50                   push eax
// 007fe43a  e83b22eaff           call 0x6a067a
// 007fe43f  83c404               add esp, 4
// 007fe442  c7051070970030b78000 mov dword ptr [0x977010], 0x80b730
// 007fe44c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
