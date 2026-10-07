// roc 2011-06 008016c0  unit: RBX::Tasks::SequenceBase  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008016c0
//
// 008016c0  53                   push ebx
// 008016c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008016c5  85f6                 test esi, esi
// 008016c7  0f84cc000000         je 0x801799
// 008016cd  57                   push edi
// 008016ce  8b3d1c0aa400         mov edi, dword ptr [0xa40a1c]
// 008016d4  53                   push ebx
// 008016d5  68fcb8a500           push 0xa5b8fc
// 008016da  56                   push esi
// 008016db  ffd7                 call edi
// 008016dd  83c40c               add esp, 0xc
// 008016e0  85c0                 test eax, eax
// 008016e2  7508                 jne 0x8016ec
// 008016e4  5f                   pop edi
// 008016e5  b800000080           mov eax, 0x80000000
// 008016ea  5b                   pop ebx
// 008016eb  c3                   ret 
// 008016ec  53                   push ebx
// 008016ed  686cb9a500           push 0xa5b96c
// 008016f2  56                   push esi
// 008016f3  ffd7                 call edi
// 008016f5  83c40c               add esp, 0xc
// 008016f8  85c0                 test eax, eax
// 008016fa  7508                 jne 0x801704
// 008016fc  5f                   pop edi
// 008016fd  b805000080           mov eax, 0x80000005
// 00801702  5b                   pop ebx
// 00801703  c3                   ret 
// 00801704  53                   push ebx
// 00801705  6810b9a500           push 0xa5b910
// 0080170a  56                   push esi
// 0080170b  ffd7                 call edi
// 0080170d  83c40c               add esp, 0xc
// 00801710  85c0                 test eax, eax
// 00801712  7508                 jne 0x80171c
// 00801714  5f                   pop edi
// 00801715  b801000080           mov eax, 0x80000001
// 0080171a  5b                   pop ebx
// 0080171b  c3                   ret 
// 0080171c  53                   push ebx
// 0080171d  6824b9a500           push 0xa5b924
// 00801722  56                   push esi
// 00801723  ffd7                 call edi
// 00801725  83c40c               add esp, 0xc
// 00801728  85c0                 test eax, eax
// 0080172a  7508                 jne 0x801734
// 0080172c  5f                   pop edi
// 0080172d  b802000080           mov eax, 0x80000002
// 00801732  5b                   pop ebx
// 00801733  c3                   ret 
// 00801734  53                   push ebx
// 00801735  6844b9a500           push 0xa5b944
// 0080173a  56                   push esi
// 0080173b  ffd7                 call edi
// 0080173d  83c40c               add esp, 0xc
// 00801740  85c0                 test eax, eax
// 00801742  7508                 jne 0x80174c
// 00801744  5f                   pop edi
// 00801745  b804000080           mov eax, 0x80000004
// 0080174a  5b                   pop ebx
// 0080174b  c3                   ret 
// 0080174c  53                   push ebx
// 0080174d  681c06a800           push 0xa8061c
// 00801752  56                   push esi
// 00801753  ffd7                 call edi
// 00801755  83c40c               add esp, 0xc
// 00801758  85c0                 test eax, eax
// 0080175a  7508                 jne 0x801764
// 0080175c  5f                   pop edi
// 0080175d  b860000080           mov eax, 0x80000060
// 00801762  5b                   pop ebx
// 00801763  c3                   ret 
// 00801764  53                   push ebx
// 00801765  680406a800           push 0xa80604
// 0080176a  56                   push esi
// 0080176b  ffd7                 call edi
// 0080176d  83c40c               add esp, 0xc
// 00801770  85c0                 test eax, eax
// 00801772  7508                 jne 0x80177c
// 00801774  5f                   pop edi
// 00801775  b850000080           mov eax, 0x80000050
// 0080177a  5b                   pop ebx
// 0080177b  c3                   ret 
// 0080177c  53                   push ebx
// 0080177d  68fcb8a500           push 0xa5b8fc
// 00801782  56                   push esi
// 00801783  ffd7                 call edi
// 00801785  83c40c               add esp, 0xc
// 00801788  f7d8                 neg eax
// 0080178a  1bc0                 sbb eax, eax
// 0080178c  2500000080           and eax, 0x80000000
// 00801791  5f                   pop edi
// 00801792  0500000080           add eax, 0x80000000
// 00801797  5b                   pop ebx
// 00801798  c3                   ret 
// 00801799  33c0                 xor eax, eax
// 0080179b  5b                   pop ebx
// 0080179c  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
