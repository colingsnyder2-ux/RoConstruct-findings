// from server: 100% by auto
// roc 2011-06 00551b50  unit: seg_00550000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00551b50
//
// 00551b50  85f6                 test esi, esi
// 00551b52  0f84c4000000         je 0x551c1c
// 00551b58  57                   push edi
// 00551b59  8b3d1c0aa400         mov edi, dword ptr [0xa40a1c]
// 00551b5f  53                   push ebx
// 00551b60  68fcb8a500           push 0xa5b8fc
// 00551b65  56                   push esi
// 00551b66  ffd7                 call edi
// 00551b68  83c40c               add esp, 0xc
// 00551b6b  85c0                 test eax, eax
// 00551b6d  7507                 jne 0x551b76
// 00551b6f  b800000080           mov eax, 0x80000000
// 00551b74  5f                   pop edi
// 00551b75  c3                   ret 
// 00551b76  53                   push ebx
// 00551b77  686cb9a500           push 0xa5b96c
// 00551b7c  56                   push esi
// 00551b7d  ffd7                 call edi
// 00551b7f  83c40c               add esp, 0xc
// 00551b82  85c0                 test eax, eax
// 00551b84  7507                 jne 0x551b8d
// 00551b86  b805000080           mov eax, 0x80000005
// 00551b8b  5f                   pop edi
// 00551b8c  c3                   ret 
// 00551b8d  53                   push ebx
// 00551b8e  6810b9a500           push 0xa5b910
// 00551b93  56                   push esi
// 00551b94  ffd7                 call edi
// 00551b96  83c40c               add esp, 0xc
// 00551b99  85c0                 test eax, eax
// 00551b9b  7507                 jne 0x551ba4
// 00551b9d  b801000080           mov eax, 0x80000001
// 00551ba2  5f                   pop edi
// 00551ba3  c3                   ret 
// 00551ba4  53                   push ebx
// 00551ba5  6824b9a500           push 0xa5b924
// 00551baa  56                   push esi
// 00551bab  ffd7                 call edi
// 00551bad  83c40c               add esp, 0xc
// 00551bb0  85c0                 test eax, eax
// 00551bb2  7507                 jne 0x551bbb
// 00551bb4  b802000080           mov eax, 0x80000002
// 00551bb9  5f                   pop edi
// 00551bba  c3                   ret 
// 00551bbb  53                   push ebx
// 00551bbc  6844b9a500           push 0xa5b944
// 00551bc1  56                   push esi
// 00551bc2  ffd7                 call edi
// 00551bc4  83c40c               add esp, 0xc
// 00551bc7  85c0                 test eax, eax
// 00551bc9  7507                 jne 0x551bd2
// 00551bcb  b804000080           mov eax, 0x80000004
// 00551bd0  5f                   pop edi
// 00551bd1  c3                   ret 
// 00551bd2  53                   push ebx
// 00551bd3  681c06a800           push 0xa8061c
// 00551bd8  56                   push esi
// 00551bd9  ffd7                 call edi
// 00551bdb  83c40c               add esp, 0xc
// 00551bde  85c0                 test eax, eax
// 00551be0  7507                 jne 0x551be9
// 00551be2  b860000080           mov eax, 0x80000060
// 00551be7  5f                   pop edi
// 00551be8  c3                   ret 
// 00551be9  53                   push ebx
// 00551bea  680406a800           push 0xa80604
// 00551bef  56                   push esi
// 00551bf0  ffd7                 call edi
// 00551bf2  83c40c               add esp, 0xc
// 00551bf5  85c0                 test eax, eax
// 00551bf7  7507                 jne 0x551c00
// 00551bf9  b850000080           mov eax, 0x80000050
// 00551bfe  5f                   pop edi
// 00551bff  c3                   ret 
// 00551c00  53                   push ebx
// 00551c01  68fcb8a500           push 0xa5b8fc
// 00551c06  56                   push esi
// 00551c07  ffd7                 call edi
// 00551c09  83c40c               add esp, 0xc
// 00551c0c  f7d8                 neg eax
// 00551c0e  1bc0                 sbb eax, eax
// 00551c10  2500000080           and eax, 0x80000000
// 00551c15  0500000080           add eax, 0x80000000
// 00551c1a  5f                   pop edi
// 00551c1b  c3                   ret 
// 00551c1c  33c0                 xor eax, eax
// 00551c1e  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
