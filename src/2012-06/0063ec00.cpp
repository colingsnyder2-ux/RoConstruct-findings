// from server: 100% by auto
// roc 2012-06 0063ec00  unit: seg_00630000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063ec00
//
// 0063ec00  85f6                 test esi, esi
// 0063ec02  0f84c4000000         je 0x63eccc
// 0063ec08  57                   push edi
// 0063ec09  8b3d102ab200         mov edi, dword ptr [0xb22a10]
// 0063ec0f  53                   push ebx
// 0063ec10  681c37b400           push 0xb4371c
// 0063ec15  56                   push esi
// 0063ec16  ffd7                 call edi
// 0063ec18  83c40c               add esp, 0xc
// 0063ec1b  85c0                 test eax, eax
// 0063ec1d  7507                 jne 0x63ec26
// 0063ec1f  b800000080           mov eax, 0x80000000
// 0063ec24  5f                   pop edi
// 0063ec25  c3                   ret 
// 0063ec26  53                   push ebx
// 0063ec27  688c37b400           push 0xb4378c
// 0063ec2c  56                   push esi
// 0063ec2d  ffd7                 call edi
// 0063ec2f  83c40c               add esp, 0xc
// 0063ec32  85c0                 test eax, eax
// 0063ec34  7507                 jne 0x63ec3d
// 0063ec36  b805000080           mov eax, 0x80000005
// 0063ec3b  5f                   pop edi
// 0063ec3c  c3                   ret 
// 0063ec3d  53                   push ebx
// 0063ec3e  683037b400           push 0xb43730
// 0063ec43  56                   push esi
// 0063ec44  ffd7                 call edi
// 0063ec46  83c40c               add esp, 0xc
// 0063ec49  85c0                 test eax, eax
// 0063ec4b  7507                 jne 0x63ec54
// 0063ec4d  b801000080           mov eax, 0x80000001
// 0063ec52  5f                   pop edi
// 0063ec53  c3                   ret 
// 0063ec54  53                   push ebx
// 0063ec55  684437b400           push 0xb43744
// 0063ec5a  56                   push esi
// 0063ec5b  ffd7                 call edi
// 0063ec5d  83c40c               add esp, 0xc
// 0063ec60  85c0                 test eax, eax
// 0063ec62  7507                 jne 0x63ec6b
// 0063ec64  b802000080           mov eax, 0x80000002
// 0063ec69  5f                   pop edi
// 0063ec6a  c3                   ret 
// 0063ec6b  53                   push ebx
// 0063ec6c  686437b400           push 0xb43764
// 0063ec71  56                   push esi
// 0063ec72  ffd7                 call edi
// 0063ec74  83c40c               add esp, 0xc
// 0063ec77  85c0                 test eax, eax
// 0063ec79  7507                 jne 0x63ec82
// 0063ec7b  b804000080           mov eax, 0x80000004
// 0063ec80  5f                   pop edi
// 0063ec81  c3                   ret 
// 0063ec82  53                   push ebx
// 0063ec83  681045b800           push 0xb84510
// 0063ec88  56                   push esi
// 0063ec89  ffd7                 call edi
// 0063ec8b  83c40c               add esp, 0xc
// 0063ec8e  85c0                 test eax, eax
// 0063ec90  7507                 jne 0x63ec99
// 0063ec92  b860000080           mov eax, 0x80000060
// 0063ec97  5f                   pop edi
// 0063ec98  c3                   ret 
// 0063ec99  53                   push ebx
// 0063ec9a  68f844b800           push 0xb844f8
// 0063ec9f  56                   push esi
// 0063eca0  ffd7                 call edi
// 0063eca2  83c40c               add esp, 0xc
// 0063eca5  85c0                 test eax, eax
// 0063eca7  7507                 jne 0x63ecb0
// 0063eca9  b850000080           mov eax, 0x80000050
// 0063ecae  5f                   pop edi
// 0063ecaf  c3                   ret 
// 0063ecb0  53                   push ebx
// 0063ecb1  681c37b400           push 0xb4371c
// 0063ecb6  56                   push esi
// 0063ecb7  ffd7                 call edi
// 0063ecb9  83c40c               add esp, 0xc
// 0063ecbc  f7d8                 neg eax
// 0063ecbe  1bc0                 sbb eax, eax
// 0063ecc0  2500000080           and eax, 0x80000000
// 0063ecc5  0500000080           add eax, 0x80000000
// 0063ecca  5f                   pop edi
// 0063eccb  c3                   ret 
// 0063eccc  33c0                 xor eax, eax
// 0063ecce  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
