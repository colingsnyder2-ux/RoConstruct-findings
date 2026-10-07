// roc 2008-06 007fb240  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb240
//
// 007fb240  a1a8fe9600           mov eax, dword ptr [0x96fea8]
// 007fb245  85c0                 test eax, eax
// 007fb247  7409                 je 0x7fb252
// 007fb249  50                   push eax
// 007fb24a  e82b54eaff           call 0x6a067a
// 007fb24f  83c404               add esp, 4
// 007fb252  c70590fe960030b78000 mov dword ptr [0x96fe90], 0x80b730
// 007fb25c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
