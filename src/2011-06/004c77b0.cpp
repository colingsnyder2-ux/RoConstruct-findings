// roc 2011-06 004c77b0  unit: RBX::MeshAdapter  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c77b0
//
// 004c77b0  56                   push esi
// 004c77b1  8bf1                 mov esi, ecx
// 004c77b3  e828b50c00           call 0x592ce0
// 004c77b8  33c9                 xor ecx, ecx
// 004c77ba  3bc6                 cmp eax, esi
// 004c77bc  0f94c1               sete cl
// 004c77bf  8ac1                 mov al, cl
// 004c77c1  5e                   pop esi
// 004c77c2  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?empty@Name@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
