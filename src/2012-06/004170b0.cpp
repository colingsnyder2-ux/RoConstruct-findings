// roc 2012-06 004170b0  unit: CBrush  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004170b0
//
// 004170b0  56                   push esi
// 004170b1  8bf1                 mov esi, ecx
// 004170b3  e8c8832600           call 0x67f480
// 004170b8  33c9                 xor ecx, ecx
// 004170ba  3bc6                 cmp eax, esi
// 004170bc  0f94c1               sete cl
// 004170bf  8ac1                 mov al, cl
// 004170c1  5e                   pop esi
// 004170c2  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?empty@Name@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
