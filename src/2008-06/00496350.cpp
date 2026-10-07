// roc 2008-06 00496350  unit: RBX::Network::Players  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496350
//
// 00496350  56                   push esi
// 00496351  8bf1                 mov esi, ecx
// 00496353  e818df0b00           call 0x554270
// 00496358  33c9                 xor ecx, ecx
// 0049635a  3bc6                 cmp eax, esi
// 0049635c  0f94c1               sete cl
// 0049635f  8ac1                 mov al, cl
// 00496361  5e                   pop esi
// 00496362  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?empty@Name@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
