// roc 2008-06 007f5ef0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5ef0
//
// 007f5ef0  33c9                 xor ecx, ecx
// 007f5ef2  51                   push ecx
// 007f5ef3  51                   push ecx
// 007f5ef4  b8d0135d00           mov eax, 0x5d13d0
// 007f5ef9  50                   push eax
// 007f5efa  51                   push ecx
// 007f5efb  6890248200           push 0x822490
// 007f5f00  6824b78300           push 0x83b724
// 007f5f05  b94c9d9700           mov ecx, 0x979d4c
// 007f5f0a  e821a6ddff           call 0x5d0530
// 007f5f0f  6810ef7f00           push 0x7fef10
// 007f5f14  e896b8eaff           call 0x6a17af
// 007f5f19  59                   pop ecx
// 007f5f1a  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyTextureName@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
