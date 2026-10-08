// roc 2007-03 004c0e80  unit: seg_004c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0e80
//
// 004c0e80  57                   push edi
// 004c0e81  bf01000000           mov edi, 1
// 004c0e86  393d949e8b00         cmp dword ptr [0x8b9e94], edi
// 004c0e8c  7e22                 jle 0x4c0eb0
// 004c0e8e  56                   push esi
// 004c0e8f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c0e93  83c610               add esi, 0x10
// 004c0e96  6a04                 push 4
// 004c0e98  56                   push esi
// 004c0e99  e8c2fdffff           call 0x4c0c60
// 004c0e9e  83c701               add edi, 1
// 004c0ea1  83c408               add esp, 8
// 004c0ea4  83c610               add esi, 0x10
// 004c0ea7  3b3d949e8b00         cmp edi, dword ptr [0x8b9e94]
// 004c0ead  7ce7                 jl 0x4c0e96
// 004c0eaf  5e                   pop esi
// 004c0eb0  33c0                 xor eax, eax
// 004c0eb2  5f                   pop edi
// 004c0eb3  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelKeyEnctoDec@@YAHHQAY133E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
