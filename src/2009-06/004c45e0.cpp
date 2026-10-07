// roc 2009-06 004c45e0  unit: RBX::Network::Players  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c45e0
//
// 004c45e0  56                   push esi
// 004c45e1  8bf1                 mov esi, ecx
// 004c45e3  e878931000           call 0x5cd960
// 004c45e8  33c9                 xor ecx, ecx
// 004c45ea  3bc6                 cmp eax, esi
// 004c45ec  0f94c1               sete cl
// 004c45ef  8ac1                 mov al, cl
// 004c45f1  5e                   pop esi
// 004c45f2  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?empty@Name@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
