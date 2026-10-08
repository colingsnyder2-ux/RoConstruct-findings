// roc 2008-06 007f5ec0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5ec0
//
// 007f5ec0  33c9                 xor ecx, ecx
// 007f5ec2  51                   push ecx
// 007f5ec3  51                   push ecx
// 007f5ec4  b870175d00           mov eax, 0x5d1770
// 007f5ec9  50                   push eax
// 007f5eca  51                   push ecx
// 007f5ecb  6890248200           push 0x822490
// 007f5ed0  68dc118100           push 0x8111dc
// 007f5ed5  b9d89c9700           mov ecx, 0x979cd8
// 007f5eda  e851a6ddff           call 0x5d0530
// 007f5edf  6830ef7f00           push 0x7fef30
// 007f5ee4  e8c6b8eaff           call 0x6a17af
// 007f5ee9  59                   pop ecx
// 007f5eea  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyCommand@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
