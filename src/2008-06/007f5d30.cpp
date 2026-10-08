// roc 2008-06 007f5d30  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5d30
//
// 007f5d30  56                   push esi
// 007f5d31  6a04                 push 4
// 007f5d33  33c9                 xor ecx, ecx
// 007f5d35  51                   push ecx
// 007f5d36  b840e45c00           mov eax, 0x5ce440
// 007f5d3b  50                   push eax
// 007f5d3c  33f6                 xor esi, esi
// 007f5d3e  56                   push esi
// 007f5d3f  ba00af4500           mov edx, 0x45af00
// 007f5d44  52                   push edx
// 007f5d45  6890248200           push 0x822490
// 007f5d4a  682c2b8300           push 0x832b2c
// 007f5d4f  b9d49a9700           mov ecx, 0x979ad4
// 007f5d54  e8a778ddff           call 0x5cd600
// 007f5d59  6890ee7f00           push 0x7fee90
// 007f5d5e  e84cbaeaff           call 0x6a17af
// 007f5d63  83c404               add esp, 4
// 007f5d66  5e                   pop esi
// 007f5d67  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
