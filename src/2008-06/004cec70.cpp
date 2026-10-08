// roc 2008-06 004cec70  unit: RBX::Network::PhysicsSender  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cec70
//
// 004cec70  53                   push ebx
// 004cec71  8b99bc000000         mov ebx, dword ptr [ecx + 0xbc]
// 004cec77  55                   push ebp
// 004cec78  8ba9b8000000         mov ebp, dword ptr [ecx + 0xb8]
// 004cec7e  56                   push esi
// 004cec7f  8b742414             mov esi, dword ptr [esp + 0x14]
// 004cec83  3bf3                 cmp esi, ebx
// 004cec85  57                   push edi
// 004cec86  7c37                 jl 0x4cecbf
// 004cec88  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cec8c  7f04                 jg 0x4cec92
// 004cec8e  3bfd                 cmp edi, ebp
// 004cec90  762d                 jbe 0x4cecbf
// 004cec92  8bc5                 mov eax, ebp
// 004cec94  0bc3                 or eax, ebx
// 004cec96  7427                 je 0x4cecbf
// 004cec98  8b81d8030000         mov eax, dword ptr [ecx + 0x3d8]
// 004cec9e  b9e8030000           mov ecx, 0x3e8
// 004ceca3  f7e1                 mul ecx
// 004ceca5  2bfd                 sub edi, ebp
// 004ceca7  1bf3                 sbb esi, ebx
// 004ceca9  3bf2                 cmp esi, edx
// 004cecab  7c12                 jl 0x4cecbf
// 004cecad  7f04                 jg 0x4cecb3
// 004cecaf  3bf8                 cmp edi, eax
// 004cecb1  760c                 jbe 0x4cecbf
// 004cecb3  5f                   pop edi
// 004cecb4  5e                   pop esi
// 004cecb5  5d                   pop ebp
// 004cecb6  b801000000           mov eax, 1
// 004cecbb  5b                   pop ebx
// 004cecbc  c20800               ret 8
// 004cecbf  5f                   pop edi
// 004cecc0  5e                   pop esi
// 004cecc1  5d                   pop ebp
// 004cecc2  33c0                 xor eax, eax
// 004cecc4  5b                   pop ebx
// 004cecc5  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AckTimeout@ReliabilityLayer@@QAE_N_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
