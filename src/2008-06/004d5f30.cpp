// roc 2008-06 004d5f30  unit: CSHA1  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5f30
//
// 004d5f30  57                   push edi
// 004d5f31  bf01000000           mov edi, 1
// 004d5f36  393d08279700         cmp dword ptr [0x972708], edi
// 004d5f3c  7e20                 jle 0x4d5f5e
// 004d5f3e  56                   push esi
// 004d5f3f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d5f43  83c610               add esi, 0x10
// 004d5f46  6a04                 push 4
// 004d5f48  56                   push esi
// 004d5f49  e8e2fdffff           call 0x4d5d30
// 004d5f4e  47                   inc edi
// 004d5f4f  83c408               add esp, 8
// 004d5f52  83c610               add esi, 0x10
// 004d5f55  3b3d08279700         cmp edi, dword ptr [0x972708]
// 004d5f5b  7ce9                 jl 0x4d5f46
// 004d5f5d  5e                   pop esi
// 004d5f5e  33c0                 xor eax, eax
// 004d5f60  5f                   pop edi
// 004d5f61  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelKeyEnctoDec@@YAHHQAY133E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
