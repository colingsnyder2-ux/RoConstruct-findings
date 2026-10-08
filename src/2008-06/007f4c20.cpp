// roc 2008-06 007f4c20  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4c20
//
// 007f4c20  56                   push esi
// 007f4c21  6a05                 push 5
// 007f4c23  33c9                 xor ecx, ecx
// 007f4c25  51                   push ecx
// 007f4c26  b8e0fe5900           mov eax, 0x59fee0
// 007f4c2b  50                   push eax
// 007f4c2c  33f6                 xor esi, esi
// 007f4c2e  56                   push esi
// 007f4c2f  ba305e5600           mov edx, 0x565e30
// 007f4c34  52                   push edx
// 007f4c35  6890248200           push 0x822490
// 007f4c3a  6894338300           push 0x833394
// 007f4c3f  b958689700           mov ecx, 0x976858
// 007f4c44  e8b7b1daff           call 0x59fe00
// 007f4c49  68e0df7f00           push 0x7fdfe0
// 007f4c4e  e85ccbeaff           call 0x6a17af
// 007f4c53  83c404               add esp, 4
// 007f4c56  5e                   pop esi
// 007f4c57  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
