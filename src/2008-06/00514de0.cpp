// from server: 100% by auto
// roc 2008-06 00514de0  unit: seg_00510000  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514de0
//
// 00514de0  6aff                 push -1
// 00514de2  6833c57c00           push 0x7cc533
// 00514de7  64a100000000         mov eax, dword ptr fs:[0]
// 00514ded  50                   push eax
// 00514dee  64892500000000       mov dword ptr fs:[0], esp
// 00514df5  83ec50               sub esp, 0x50
// 00514df8  53                   push ebx
// 00514df9  55                   push ebp
// 00514dfa  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00514dfe  56                   push esi
// 00514dff  57                   push edi
// 00514e00  55                   push ebp
// 00514e01  b9e8379700           mov ecx, 0x9737e8
// 00514e06  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00514e0e  e8dd4affff           call 0x5098f0
// 00514e13  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00514e17  8d5d04               lea ebx, [ebp + 4]
// 00514e1a  7204                 jb 0x514e20
// 00514e1c  8b03                 mov eax, dword ptr [ebx]
// 00514e1e  eb02                 jmp 0x514e22
// 00514e20  8bc3                 mov eax, ebx
// 00514e22  8d4c2430             lea ecx, [esp + 0x30]
// 00514e26  51                   push ecx
// 00514e27  50                   push eax
// 00514e28  ff1570278000         call dword ptr [0x802770]
// 00514e2e  83c408               add esp, 8
// 00514e31  83f8ff               cmp eax, -1
// 00514e34  740e                 je 0x514e44
// 00514e36  8b442444             mov eax, dword ptr [esp + 0x44]
// 00514e3a  99                   cdq 
// 00514e3b  8bf8                 mov edi, eax
// 00514e3d  23c2                 and eax, edx
// 00514e3f  83f8ff               cmp eax, -1
// 00514e42  7526                 jne 0x514e6a
// 00514e44  8b742470             mov esi, dword ptr [esp + 0x70]
// 00514e48  6816b78000           push 0x80b716
// 00514e4d  8bce                 mov ecx, esi
// 00514e4f  ff1558248000         call dword ptr [0x802458]
// 00514e55  5f                   pop edi
// 00514e56  8bc6                 mov eax, esi
// 00514e58  5e                   pop esi
// 00514e59  5d                   pop ebp
// 00514e5a  5b                   pop ebx
// 00514e5b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00514e5f  64890d00000000       mov dword ptr fs:[0], ecx
// 00514e66  83c45c               add esp, 0x5c
// 00514e69  c3                   ret 
// 00514e6a  8d4f01               lea ecx, [edi + 1]
// 00514e6d  51                   push ecx
// 00514e6e  ff15b0288000         call dword ptr [0x8028b0]
// 00514e74  83c404               add esp, 4
// 00514e77  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00514e7b  8bf0                 mov esi, eax
// 00514e7d  7204                 jb 0x514e83
// 00514e7f  8b03                 mov eax, dword ptr [ebx]
// 00514e81  eb02                 jmp 0x514e85
// 00514e83  8bc3                 mov eax, ebx
// 00514e85  68086b8200           push 0x826b08
// 00514e8a  50                   push eax
// 00514e8b  ff1514288000         call dword ptr [0x802814]
// 00514e91  8be8                 mov ebp, eax
// 00514e93  55                   push ebp
// 00514e94  57                   push edi
// 00514e95  bb01000000           mov ebx, 1
// 00514e9a  53                   push ebx
// 00514e9b  56                   push esi
// 00514e9c  ff15c0278000         call dword ptr [0x8027c0]
// 00514ea2  55                   push ebp
// 00514ea3  ff15d4278000         call dword ptr [0x8027d4]
// 00514ea9  83c41c               add esp, 0x1c
// 00514eac  56                   push esi
// 00514ead  8d4c2418             lea ecx, [esp + 0x18]
// 00514eb1  c6043700             mov byte ptr [edi + esi], 0
// 00514eb5  ff1558248000         call dword ptr [0x802458]
// 00514ebb  56                   push esi
// 00514ebc  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00514ec0  ff15c0288000         call dword ptr [0x8028c0]
// 00514ec6  8b742474             mov esi, dword ptr [esp + 0x74]
// 00514eca  83c404               add esp, 4
// 00514ecd  8d542414             lea edx, [esp + 0x14]
// 00514ed1  52                   push edx
// 00514ed2  8bce                 mov ecx, esi
// 00514ed4  ff155c248000         call dword ptr [0x80245c]
// 00514eda  8d4c2414             lea ecx, [esp + 0x14]
// 00514ede  895c2410             mov dword ptr [esp + 0x10], ebx
// 00514ee2  c644246800           mov byte ptr [esp + 0x68], 0
// 00514ee7  ff1568248000         call dword ptr [0x802468]
// 00514eed  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00514ef1  5f                   pop edi
// 00514ef2  8bc6                 mov eax, esi
// 00514ef4  5e                   pop esi
// 00514ef5  5d                   pop ebp
// 00514ef6  5b                   pop ebx
// 00514ef7  64890d00000000       mov dword ptr fs:[0], ecx
// 00514efe  83c45c               add esp, 0x5c
// 00514f01  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?readFileAsString@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
