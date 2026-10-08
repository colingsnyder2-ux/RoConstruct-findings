// roc 2008-06 007f1240  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1240
//
// 007f1240  56                   push esi
// 007f1241  6a05                 push 5
// 007f1243  33c9                 xor ecx, ecx
// 007f1245  51                   push ecx
// 007f1246  b800464900           mov eax, 0x494600
// 007f124b  50                   push eax
// 007f124c  33f6                 xor esi, esi
// 007f124e  56                   push esi
// 007f124f  ba60524400           mov edx, 0x445260
// 007f1254  52                   push edx
// 007f1255  6854258200           push 0x822554
// 007f125a  6848258200           push 0x822548
// 007f125f  b968fd9600           mov ecx, 0x96fd68
// 007f1264  e88709caff           call 0x491bf0
// 007f1269  68a0b27f00           push 0x7fb2a0
// 007f126e  e83c05ebff           call 0x6a17af
// 007f1273  83c404               add esp, 4
// 007f1276  5e                   pop esi
// 007f1277  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_teamColor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
