// roc 2008-06 007f5df0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5df0
//
// 007f5df0  56                   push esi
// 007f5df1  6a05                 push 5
// 007f5df3  33c9                 xor ecx, ecx
// 007f5df5  51                   push ecx
// 007f5df6  b8e0115d00           mov eax, 0x5d11e0
// 007f5dfb  50                   push eax
// 007f5dfc  33f6                 xor esi, esi
// 007f5dfe  56                   push esi
// 007f5dff  ba60f15c00           mov edx, 0x5cf160
// 007f5e04  52                   push edx
// 007f5e05  6890248200           push 0x822490
// 007f5e0a  6824368300           push 0x833624
// 007f5e0f  b9bc9c9700           mov ecx, 0x979cbc
// 007f5e14  e857a5ddff           call 0x5d0370
// 007f5e19  68f0ee7f00           push 0x7feef0
// 007f5e1e  e88cb9eaff           call 0x6a17af
// 007f5e23  83c404               add esp, 4
// 007f5e26  5e                   pop esi
// 007f5e27  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
