// roc 2009-12 007eb340  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007eb340
//
// 007eb340  53                   push ebx
// 007eb341  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007eb345  85f6                 test esi, esi
// 007eb347  0f84cc000000         je 0x7eb419
// 007eb34d  57                   push edi
// 007eb34e  8b3d9cb79800         mov edi, dword ptr [0x98b79c]
// 007eb354  53                   push ebx
// 007eb355  6894f79900           push 0x99f794
// 007eb35a  56                   push esi
// 007eb35b  ffd7                 call edi
// 007eb35d  83c40c               add esp, 0xc
// 007eb360  85c0                 test eax, eax
// 007eb362  7508                 jne 0x7eb36c
// 007eb364  5f                   pop edi
// 007eb365  b800000080           mov eax, 0x80000000
// 007eb36a  5b                   pop ebx
// 007eb36b  c3                   ret 
// 007eb36c  53                   push ebx
// 007eb36d  6804f89900           push 0x99f804
// 007eb372  56                   push esi
// 007eb373  ffd7                 call edi
// 007eb375  83c40c               add esp, 0xc
// 007eb378  85c0                 test eax, eax
// 007eb37a  7508                 jne 0x7eb384
// 007eb37c  5f                   pop edi
// 007eb37d  b805000080           mov eax, 0x80000005
// 007eb382  5b                   pop ebx
// 007eb383  c3                   ret 
// 007eb384  53                   push ebx
// 007eb385  68a8f79900           push 0x99f7a8
// 007eb38a  56                   push esi
// 007eb38b  ffd7                 call edi
// 007eb38d  83c40c               add esp, 0xc
// 007eb390  85c0                 test eax, eax
// 007eb392  7508                 jne 0x7eb39c
// 007eb394  5f                   pop edi
// 007eb395  b801000080           mov eax, 0x80000001
// 007eb39a  5b                   pop ebx
// 007eb39b  c3                   ret 
// 007eb39c  53                   push ebx
// 007eb39d  68bcf79900           push 0x99f7bc
// 007eb3a2  56                   push esi
// 007eb3a3  ffd7                 call edi
// 007eb3a5  83c40c               add esp, 0xc
// 007eb3a8  85c0                 test eax, eax
// 007eb3aa  7508                 jne 0x7eb3b4
// 007eb3ac  5f                   pop edi
// 007eb3ad  b802000080           mov eax, 0x80000002
// 007eb3b2  5b                   pop ebx
// 007eb3b3  c3                   ret 
// 007eb3b4  53                   push ebx
// 007eb3b5  68dcf79900           push 0x99f7dc
// 007eb3ba  56                   push esi
// 007eb3bb  ffd7                 call edi
// 007eb3bd  83c40c               add esp, 0xc
// 007eb3c0  85c0                 test eax, eax
// 007eb3c2  7508                 jne 0x7eb3cc
// 007eb3c4  5f                   pop edi
// 007eb3c5  b804000080           mov eax, 0x80000004
// 007eb3ca  5b                   pop ebx
// 007eb3cb  c3                   ret 
// 007eb3cc  53                   push ebx
// 007eb3cd  6804039f00           push 0x9f0304
// 007eb3d2  56                   push esi
// 007eb3d3  ffd7                 call edi
// 007eb3d5  83c40c               add esp, 0xc
// 007eb3d8  85c0                 test eax, eax
// 007eb3da  7508                 jne 0x7eb3e4
// 007eb3dc  5f                   pop edi
// 007eb3dd  b860000080           mov eax, 0x80000060
// 007eb3e2  5b                   pop ebx
// 007eb3e3  c3                   ret 
// 007eb3e4  53                   push ebx
// 007eb3e5  68ec029f00           push 0x9f02ec
// 007eb3ea  56                   push esi
// 007eb3eb  ffd7                 call edi
// 007eb3ed  83c40c               add esp, 0xc
// 007eb3f0  85c0                 test eax, eax
// 007eb3f2  7508                 jne 0x7eb3fc
// 007eb3f4  5f                   pop edi
// 007eb3f5  b850000080           mov eax, 0x80000050
// 007eb3fa  5b                   pop ebx
// 007eb3fb  c3                   ret 
// 007eb3fc  53                   push ebx
// 007eb3fd  6894f79900           push 0x99f794
// 007eb402  56                   push esi
// 007eb403  ffd7                 call edi
// 007eb405  83c40c               add esp, 0xc
// 007eb408  f7d8                 neg eax
// 007eb40a  1bc0                 sbb eax, eax
// 007eb40c  2500000080           and eax, 0x80000000
// 007eb411  5f                   pop edi
// 007eb412  0500000080           add eax, 0x80000000
// 007eb417  5b                   pop ebx
// 007eb418  c3                   ret 
// 007eb419  33c0                 xor eax, eax
// 007eb41b  5b                   pop ebx
// 007eb41c  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
