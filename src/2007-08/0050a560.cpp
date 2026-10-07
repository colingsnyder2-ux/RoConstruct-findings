// roc 2007-08 0050a560  unit: G3D::GCamera  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050a560
//
// 0050a560  85f6                 test esi, esi
// 0050a562  0f84c4000000         je 0x50a62c
// 0050a568  57                   push edi
// 0050a569  8b3d8ce97700         mov edi, dword ptr [0x77e98c]
// 0050a56f  53                   push ebx
// 0050a570  68a44d7800           push 0x784da4
// 0050a575  56                   push esi
// 0050a576  ffd7                 call edi
// 0050a578  83c40c               add esp, 0xc
// 0050a57b  85c0                 test eax, eax
// 0050a57d  7507                 jne 0x50a586
// 0050a57f  b800000080           mov eax, 0x80000000
// 0050a584  5f                   pop edi
// 0050a585  c3                   ret 
// 0050a586  53                   push ebx
// 0050a587  68144e7800           push 0x784e14
// 0050a58c  56                   push esi
// 0050a58d  ffd7                 call edi
// 0050a58f  83c40c               add esp, 0xc
// 0050a592  85c0                 test eax, eax
// 0050a594  7507                 jne 0x50a59d
// 0050a596  b805000080           mov eax, 0x80000005
// 0050a59b  5f                   pop edi
// 0050a59c  c3                   ret 
// 0050a59d  53                   push ebx
// 0050a59e  68b84d7800           push 0x784db8
// 0050a5a3  56                   push esi
// 0050a5a4  ffd7                 call edi
// 0050a5a6  83c40c               add esp, 0xc
// 0050a5a9  85c0                 test eax, eax
// 0050a5ab  7507                 jne 0x50a5b4
// 0050a5ad  b801000080           mov eax, 0x80000001
// 0050a5b2  5f                   pop edi
// 0050a5b3  c3                   ret 
// 0050a5b4  53                   push ebx
// 0050a5b5  68cc4d7800           push 0x784dcc
// 0050a5ba  56                   push esi
// 0050a5bb  ffd7                 call edi
// 0050a5bd  83c40c               add esp, 0xc
// 0050a5c0  85c0                 test eax, eax
// 0050a5c2  7507                 jne 0x50a5cb
// 0050a5c4  b802000080           mov eax, 0x80000002
// 0050a5c9  5f                   pop edi
// 0050a5ca  c3                   ret 
// 0050a5cb  53                   push ebx
// 0050a5cc  68ec4d7800           push 0x784dec
// 0050a5d1  56                   push esi
// 0050a5d2  ffd7                 call edi
// 0050a5d4  83c40c               add esp, 0xc
// 0050a5d7  85c0                 test eax, eax
// 0050a5d9  7507                 jne 0x50a5e2
// 0050a5db  b804000080           mov eax, 0x80000004
// 0050a5e0  5f                   pop edi
// 0050a5e1  c3                   ret 
// 0050a5e2  53                   push ebx
// 0050a5e3  68a00b7a00           push 0x7a0ba0
// 0050a5e8  56                   push esi
// 0050a5e9  ffd7                 call edi
// 0050a5eb  83c40c               add esp, 0xc
// 0050a5ee  85c0                 test eax, eax
// 0050a5f0  7507                 jne 0x50a5f9
// 0050a5f2  b860000080           mov eax, 0x80000060
// 0050a5f7  5f                   pop edi
// 0050a5f8  c3                   ret 
// 0050a5f9  53                   push ebx
// 0050a5fa  68880b7a00           push 0x7a0b88
// 0050a5ff  56                   push esi
// 0050a600  ffd7                 call edi
// 0050a602  83c40c               add esp, 0xc
// 0050a605  85c0                 test eax, eax
// 0050a607  7507                 jne 0x50a610
// 0050a609  b850000080           mov eax, 0x80000050
// 0050a60e  5f                   pop edi
// 0050a60f  c3                   ret 
// 0050a610  53                   push ebx
// 0050a611  68a44d7800           push 0x784da4
// 0050a616  56                   push esi
// 0050a617  ffd7                 call edi
// 0050a619  83c40c               add esp, 0xc
// 0050a61c  f7d8                 neg eax
// 0050a61e  1bc0                 sbb eax, eax
// 0050a620  2500000080           and eax, 0x80000000
// 0050a625  0500000080           add eax, 0x80000000
// 0050a62a  5f                   pop edi
// 0050a62b  c3                   ret 
// 0050a62c  33c0                 xor eax, eax
// 0050a62e  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
