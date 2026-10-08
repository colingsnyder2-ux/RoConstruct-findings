// roc 2008-06 007f3240  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3240
//
// 007f3240  56                   push esi
// 007f3241  6a05                 push 5
// 007f3243  33c9                 xor ecx, ecx
// 007f3245  51                   push ecx
// 007f3246  b8d0665600           mov eax, 0x5666d0
// 007f324b  50                   push eax
// 007f324c  33f6                 xor esi, esi
// 007f324e  56                   push esi
// 007f324f  ba305e5600           mov edx, 0x565e30
// 007f3254  52                   push edx
// 007f3255  6890248200           push 0x822490
// 007f325a  6824ec8200           push 0x82ec24
// 007f325f  b9cc489700           mov ecx, 0x9748cc
// 007f3264  e8b72fd7ff           call 0x566220
// 007f3269  6830d07f00           push 0x7fd030
// 007f326e  e83ce5eaff           call 0x6a17af
// 007f3273  83c404               add esp, 4
// 007f3276  5e                   pop esi
// 007f3277  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Score@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
