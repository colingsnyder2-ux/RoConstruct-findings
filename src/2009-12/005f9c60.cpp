// roc 2009-12 005f9c60  unit: G3D::LineSegment  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9c60
//
// 005f9c60  6aff                 push -1
// 005f9c62  681af89300           push 0x93f81a
// 005f9c67  64a100000000         mov eax, dword ptr fs:[0]
// 005f9c6d  50                   push eax
// 005f9c6e  64892500000000       mov dword ptr fs:[0], esp
// 005f9c75  83ec08               sub esp, 8
// 005f9c78  56                   push esi
// 005f9c79  57                   push edi
// 005f9c7a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f9c7e  33f6                 xor esi, esi
// 005f9c80  6856fd9900           push 0x99fd56
// 005f9c85  8bcf                 mov ecx, edi
// 005f9c87  8974241c             mov dword ptr [esp + 0x1c], esi
// 005f9c8b  8974240c             mov dword ptr [esp + 0xc], esi
// 005f9c8f  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f9c95  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005f9c98  89742418             mov dword ptr [esp + 0x18], esi
// 005f9c9c  c744240801000000     mov dword ptr [esp + 8], 1
// 005f9ca4  3bc6                 cmp eax, esi
// 005f9ca6  0f8693000000         jbe 0x5f9d3f
// 005f9cac  55                   push ebp
// 005f9cad  8d6b04               lea ebp, [ebx + 4]
// 005f9cb0  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005f9cb4  7205                 jb 0x5f9cbb
// 005f9cb6  8b4500               mov eax, dword ptr [ebp]
// 005f9cb9  eb02                 jmp 0x5f9cbd
// 005f9cbb  8bc5                 mov eax, ebp
// 005f9cbd  8a0430               mov al, byte ptr [eax + esi]
// 005f9cc0  88442410             mov byte ptr [esp + 0x10], al
// 005f9cc4  0fbec0               movsx eax, al
// 005f9cc7  83f85c               cmp eax, 0x5c
// 005f9cca  7759                 ja 0x5f9d25
// 005f9ccc  0fb6806c9d5f00       movzx eax, byte ptr [eax + 0x5f9d6c]
// 005f9cd3  ff2485549d5f00       jmp dword ptr [eax*4 + 0x5f9d54]
// 005f9cda  68f0289c00           push 0x9c28f0
// 005f9cdf  8bcf                 mov ecx, edi
// 005f9ce1  ff1504b79800         call dword ptr [0x98b704]
// 005f9ce7  eb49                 jmp 0x5f9d32
// 005f9ce9  68ec289c00           push 0x9c28ec
// 005f9cee  8bcf                 mov ecx, edi
// 005f9cf0  ff1504b79800         call dword ptr [0x98b704]
// 005f9cf6  eb3a                 jmp 0x5f9d32
// 005f9cf8  68e8289c00           push 0x9c28e8
// 005f9cfd  8bcf                 mov ecx, edi
// 005f9cff  ff1504b79800         call dword ptr [0x98b704]
// 005f9d05  eb2b                 jmp 0x5f9d32
// 005f9d07  68e4289c00           push 0x9c28e4
// 005f9d0c  8bcf                 mov ecx, edi
// 005f9d0e  ff1504b79800         call dword ptr [0x98b704]
// 005f9d14  eb1c                 jmp 0x5f9d32
// 005f9d16  68e0289c00           push 0x9c28e0
// 005f9d1b  8bcf                 mov ecx, edi
// 005f9d1d  ff1504b79800         call dword ptr [0x98b704]
// 005f9d23  eb0d                 jmp 0x5f9d32
// 005f9d25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f9d29  51                   push ecx
// 005f9d2a  8bcf                 mov ecx, edi
// 005f9d2c  ff154cb59800         call dword ptr [0x98b54c]
// 005f9d32  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005f9d35  46                   inc esi
// 005f9d36  3bc6                 cmp eax, esi
// 005f9d38  0f8772ffffff         ja 0x5f9cb0
// 005f9d3e  5d                   pop ebp
// 005f9d3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f9d43  8bc7                 mov eax, edi
// 005f9d45  5f                   pop edi
// 005f9d46  5e                   pop esi
// 005f9d47  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9d4e  83c414               add esp, 0x14
// 005f9d51  c3                   ret 
// 005f9d52  8bff                 mov edi, edi
// 005f9d54  da9c5f00079d5f       ficomp dword ptr [edi + ebx*2 + 0x5f9d0700]
// 005f9d5b  00f8                 add al, bh
// 005f9d5d  9c                   pushfd 
// 005f9d5e  5f                   pop edi
// 005f9d5f  00e9                 add cl, ch
// 005f9d61  9c                   pushfd 
// 005f9d62  5f                   pop edi
// 005f9d63  0016                 add byte ptr [esi], dl
// 005f9d65  9d                   popfd 
// 005f9d66  5f                   pop edi
// 005f9d67  00259d5f0000         add byte ptr [0x5f9d], ah
// 005f9d6d  0505050505           add eax, 0x5050505
// 005f9d72  0505050102           add eax, 0x2010505
// 005f9d77  0505030505           add eax, 0x5050305
// 005f9d7c  0505050505           add eax, 0x5050505
// 005f9d81  0505050505           add eax, 0x5050505
// 005f9d86  0505050505           add eax, 0x5050505
// 005f9d8b  0505050505           add eax, 0x5050505
// 005f9d90  0505050505           add eax, 0x5050505
// 005f9d95  0505050505           add eax, 0x5050505
// 005f9d9a  0505050505           add eax, 0x5050505
// 005f9d9f  0505050505           add eax, 0x5050505
// 005f9da4  0505050505           add eax, 0x5050505
// 005f9da9  0505050505           add eax, 0x5050505
// 005f9dae  0505050505           add eax, 0x5050505
// 005f9db3  0505050505           add eax, 0x5050505
// 005f9db8  0505050505           add eax, 0x5050505
// 005f9dbd  0505050505           add eax, 0x5050505
// 005f9dc2  0505050505           add eax, 0x5050505
// library g3d-6.09-rbx2008/G3Dcpp\TextOutput.cpp (function ?escape@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextOutput.cpp
