// roc 2008-06 007f5d70  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5d70
//
// 007f5d70  56                   push esi
// 007f5d71  6a04                 push 4
// 007f5d73  33c9                 xor ecx, ecx
// 007f5d75  51                   push ecx
// 007f5d76  b800df5c00           mov eax, 0x5cdf00
// 007f5d7b  50                   push eax
// 007f5d7c  33f6                 xor esi, esi
// 007f5d7e  56                   push esi
// 007f5d7f  baf0ae4500           mov edx, 0x45aef0
// 007f5d84  52                   push edx
// 007f5d85  6890248200           push 0x822490
// 007f5d8a  68eca68300           push 0x83a6ec
// 007f5d8f  b9749a9700           mov ecx, 0x979a74
// 007f5d94  e81779ddff           call 0x5cd6b0
// 007f5d99  6870ee7f00           push 0x7fee70
// 007f5d9e  e80cbaeaff           call 0x6a17af
// 007f5da3  83c404               add esp, 4
// 007f5da6  5e                   pop esi
// 007f5da7  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_Focus@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
