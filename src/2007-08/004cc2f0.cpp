// roc 2007-08 004cc2f0  unit: CSHA1  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cc2f0
//
// 004cc2f0  57                   push edi
// 004cc2f1  bf01000000           mov edi, 1
// 004cc2f6  393dccf98b00         cmp dword ptr [0x8bf9cc], edi
// 004cc2fc  7e22                 jle 0x4cc320
// 004cc2fe  56                   push esi
// 004cc2ff  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cc303  83c610               add esi, 0x10
// 004cc306  6a04                 push 4
// 004cc308  56                   push esi
// 004cc309  e8b2fdffff           call 0x4cc0c0
// 004cc30e  83c701               add edi, 1
// 004cc311  83c408               add esp, 8
// 004cc314  83c610               add esi, 0x10
// 004cc317  3b3dccf98b00         cmp edi, dword ptr [0x8bf9cc]
// 004cc31d  7ce7                 jl 0x4cc306
// 004cc31f  5e                   pop esi
// 004cc320  33c0                 xor eax, eax
// 004cc322  5f                   pop edi
// 004cc323  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelKeyEnctoDec@@YAHHQAY133E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
