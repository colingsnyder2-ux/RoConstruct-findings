// roc 2010-06 004c0930  unit: RBX::Network::VPlayer::?$EventDesc  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0930
//
// 004c0930  56                   push esi
// 004c0931  8bf1                 mov esi, ecx
// 004c0933  e8b83a0d00           call 0x5943f0
// 004c0938  33c9                 xor ecx, ecx
// 004c093a  3bc6                 cmp eax, esi
// 004c093c  0f94c1               sete cl
// 004c093f  8ac1                 mov al, cl
// 004c0941  5e                   pop esi
// 004c0942  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?empty@Name@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
