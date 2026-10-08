// roc 2008-06 007f4ce0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4ce0
//
// 007f4ce0  56                   push esi
// 007f4ce1  6a05                 push 5
// 007f4ce3  33c9                 xor ecx, ecx
// 007f4ce5  51                   push ecx
// 007f4ce6  b830005a00           mov eax, 0x5a0030
// 007f4ceb  50                   push eax
// 007f4cec  33f6                 xor esi, esi
// 007f4cee  56                   push esi
// 007f4cef  ba505f4e00           mov edx, 0x4e5f50
// 007f4cf4  52                   push edx
// 007f4cf5  6890248200           push 0x822490
// 007f4cfa  6824368300           push 0x833624
// 007f4cff  b904689700           mov ecx, 0x976804
// 007f4d04  e8a7acdaff           call 0x59f9b0
// 007f4d09  6820e07f00           push 0x7fe020
// 007f4d0e  e89ccaeaff           call 0x6a17af
// 007f4d13  83c404               add esp, 4
// 007f4d16  5e                   pop esi
// 007f4d17  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
