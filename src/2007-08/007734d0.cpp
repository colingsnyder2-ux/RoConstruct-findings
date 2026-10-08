// roc 2007-08 007734d0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007734d0
//
// 007734d0  33c9                 xor ecx, ecx
// 007734d2  51                   push ecx
// 007734d3  51                   push ecx
// 007734d4  b810e95900           mov eax, 0x59e910
// 007734d9  50                   push eax
// 007734da  51                   push ecx
// 007734db  6898b67900           push 0x79b698
// 007734e0  68f82c7b00           push 0x7b2cf8
// 007734e5  b954528c00           mov ecx, 0x8c5254
// 007734ea  e861ade2ff           call 0x59e250
// 007734ef  68f0af7700           push 0x77aff0
// 007734f4  e82ad8ebff           call 0x630d23
// 007734f9  59                   pop ecx
// 007734fa  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyTextureName@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
