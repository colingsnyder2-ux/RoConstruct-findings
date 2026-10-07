// roc 2008-06 007fddb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fddb0
//
// 007fddb0  a134609700           mov eax, dword ptr [0x976034]
// 007fddb5  85c0                 test eax, eax
// 007fddb7  7409                 je 0x7fddc2
// 007fddb9  50                   push eax
// 007fddba  e8bb28eaff           call 0x6a067a
// 007fddbf  83c404               add esp, 4
// 007fddc2  c7051c60970030b78000 mov dword ptr [0x97601c], 0x80b730
// 007fddcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
