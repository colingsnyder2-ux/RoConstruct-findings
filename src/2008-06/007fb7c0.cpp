// roc 2008-06 007fb7c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb7c0
//
// 007fb7c0  a1a4039700           mov eax, dword ptr [0x9703a4]
// 007fb7c5  85c0                 test eax, eax
// 007fb7c7  7409                 je 0x7fb7d2
// 007fb7c9  50                   push eax
// 007fb7ca  e8ab4eeaff           call 0x6a067a
// 007fb7cf  83c404               add esp, 4
// 007fb7d2  c7058803970030b78000 mov dword ptr [0x970388], 0x80b730
// 007fb7dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
