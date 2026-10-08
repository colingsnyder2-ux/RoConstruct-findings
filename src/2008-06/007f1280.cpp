// roc 2008-06 007f1280  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1280
//
// 007f1280  56                   push esi
// 007f1281  6a05                 push 5
// 007f1283  33c9                 xor ecx, ecx
// 007f1285  51                   push ecx
// 007f1286  b820464900           mov eax, 0x494620
// 007f128b  50                   push eax
// 007f128c  33f6                 xor esi, esi
// 007f128e  56                   push esi
// 007f128f  ba60994800           mov edx, 0x489960
// 007f1294  52                   push edx
// 007f1295  6854258200           push 0x822554
// 007f129a  685c258200           push 0x82255c
// 007f129f  b9c8fe9600           mov ecx, 0x96fec8
// 007f12a4  e8f709caff           call 0x491ca0
// 007f12a9  68c0b17f00           push 0x7fb1c0
// 007f12ae  e8fc04ebff           call 0x6a17af
// 007f12b3  83c404               add esp, 4
// 007f12b6  5e                   pop esi
// 007f12b7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_neutral@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
