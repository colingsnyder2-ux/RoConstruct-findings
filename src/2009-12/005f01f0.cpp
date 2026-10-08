// roc 2009-12 005f01f0  unit: G3D::Log  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f01f0
//
// 005f01f0  6aff                 push -1
// 005f01f2  68e4f29300           push 0x93f2e4
// 005f01f7  64a100000000         mov eax, dword ptr fs:[0]
// 005f01fd  50                   push eax
// 005f01fe  64892500000000       mov dword ptr fs:[0], esp
// 005f0205  81eca4000000         sub esp, 0xa4
// 005f020b  55                   push ebp
// 005f020c  57                   push edi
// 005f020d  8d442408             lea eax, [esp + 8]
// 005f0211  8bf9                 mov edi, ecx
// 005f0213  33ed                 xor ebp, ebp
// 005f0215  50                   push eax
// 005f0216  8d4c2440             lea ecx, [esp + 0x40]
// 005f021a  c644241000           mov byte ptr [esp + 0x10], 0
// 005f021f  c744241804000000     mov dword ptr [esp + 0x18], 4
// 005f0227  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005f022b  c644242000           mov byte ptr [esp + 0x20], 0
// 005f0230  c744241446000000     mov dword ptr [esp + 0x14], 0x46
// 005f0238  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f0240  e8bb9f0000           call 0x5fa200
// 005f0245  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005f0248  8b5708               mov edx, dword ptr [edi + 8]
// 005f024b  51                   push ecx
// 005f024c  52                   push edx
// 005f024d  8d442444             lea eax, [esp + 0x44]
// 005f0251  68d4249c00           push 0x9c24d4
// 005f0256  50                   push eax
// 005f0257  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 005f025e  e87da40000           call 0x5fa6e0
// 005f0263  8b4708               mov eax, dword ptr [edi + 8]
// 005f0266  8b570c               mov edx, dword ptr [edi + 0xc]
// 005f0269  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f026c  0fafd0               imul edx, eax
// 005f026f  83c410               add esp, 0x10
// 005f0272  85d2                 test edx, edx
// 005f0274  7651                 jbe 0x5f02c7
// 005f0276  56                   push esi
// 005f0277  8d7101               lea esi, [ecx + 1]
// 005f027a  8d9b00000000         lea ebx, [ebx]
// 005f0280  33d2                 xor edx, edx
// 005f0282  8d4c40ff             lea ecx, [eax + eax*2 - 1]
// 005f0286  8bc5                 mov eax, ebp
// 005f0288  f7f1                 div ecx
// 005f028a  0fb606               movzx eax, byte ptr [esi]
// 005f028d  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 005f0291  f7da                 neg edx
// 005f0293  1bd2                 sbb edx, edx
// 005f0295  83e216               and edx, 0x16
// 005f0298  83c20a               add edx, 0xa
// 005f029b  52                   push edx
// 005f029c  0fb65601             movzx edx, byte ptr [esi + 1]
// 005f02a0  52                   push edx
// 005f02a1  50                   push eax
// 005f02a2  51                   push ecx
// 005f02a3  8d542450             lea edx, [esp + 0x50]
// 005f02a7  68c8249c00           push 0x9c24c8
// 005f02ac  52                   push edx
// 005f02ad  e82ea40000           call 0x5fa6e0
// 005f02b2  8b4708               mov eax, dword ptr [edi + 8]
// 005f02b5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005f02b8  0fafc8               imul ecx, eax
// 005f02bb  45                   inc ebp
// 005f02bc  83c418               add esp, 0x18
// 005f02bf  83c603               add esi, 3
// 005f02c2  3be9                 cmp ebp, ecx
// 005f02c4  72ba                 jb 0x5f0280
// 005f02c6  5e                   pop esi
// 005f02c7  8d542420             lea edx, [esp + 0x20]
// 005f02cb  52                   push edx
// 005f02cc  8d4c2440             lea ecx, [esp + 0x40]
// 005f02d0  e8ab9e0000           call 0x5fa180
// 005f02d5  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005f02d9  5f                   pop edi
// 005f02da  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 005f02e2  5d                   pop ebp
// 005f02e3  7205                 jb 0x5f02ea
// 005f02e5  8b4004               mov eax, dword ptr [eax + 4]
// 005f02e8  eb03                 jmp 0x5f02ed
// 005f02ea  83c004               add eax, 4
// 005f02ed  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 005f02f4  50                   push eax
// 005f02f5  e8b6ee0000           call 0x5ff1b0
// 005f02fa  8d4c2418             lea ecx, [esp + 0x18]
// 005f02fe  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 005f0306  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f030c  8d4c2434             lea ecx, [esp + 0x34]
// 005f0310  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 005f031b  e8a032eeff           call 0x4d35c0
// 005f0320  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 005f0327  64890d00000000       mov dword ptr fs:[0], ecx
// 005f032e  81c4b0000000         add esp, 0xb0
// 005f0334  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPMASCII@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
