// roc 2008-06 007f6d80  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6d80
//
// 007f6d80  56                   push esi
// 007f6d81  6a05                 push 5
// 007f6d83  33c9                 xor ecx, ecx
// 007f6d85  51                   push ecx
// 007f6d86  b8e04f5e00           mov eax, 0x5e4fe0
// 007f6d8b  50                   push eax
// 007f6d8c  33f6                 xor esi, esi
// 007f6d8e  56                   push esi
// 007f6d8f  ba40a26000           mov edx, 0x60a240
// 007f6d94  52                   push edx
// 007f6d95  6890248200           push 0x822490
// 007f6d9a  68f0f68300           push 0x83f6f0
// 007f6d9f  b974ab9700           mov ecx, 0x97ab74
// 007f6da4  e837c9deff           call 0x5e36e0
// 007f6da9  68c0f97f00           push 0x7ff9c0
// 007f6dae  e8fca9eaff           call 0x6a17af
// 007f6db3  83c404               add esp, 4
// 007f6db6  5e                   pop esi
// 007f6db7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_MaxVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
