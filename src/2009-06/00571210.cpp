// roc 2009-06 00571210  unit: seg_00570000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571210
//
// 00571210  6aff                 push -1
// 00571212  68a4038600           push 0x8603a4
// 00571217  64a100000000         mov eax, dword ptr fs:[0]
// 0057121d  50                   push eax
// 0057121e  64892500000000       mov dword ptr fs:[0], esp
// 00571225  81eca4000000         sub esp, 0xa4
// 0057122b  55                   push ebp
// 0057122c  57                   push edi
// 0057122d  8d442408             lea eax, [esp + 8]
// 00571231  8bf9                 mov edi, ecx
// 00571233  33ed                 xor ebp, ebp
// 00571235  50                   push eax
// 00571236  8d4c2440             lea ecx, [esp + 0x40]
// 0057123a  c644241000           mov byte ptr [esp + 0x10], 0
// 0057123f  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00571247  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057124b  c644242000           mov byte ptr [esp + 0x20], 0
// 00571250  c744241446000000     mov dword ptr [esp + 0x14], 0x46
// 00571258  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00571260  e80b8a0000           call 0x579c70
// 00571265  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00571268  8b5708               mov edx, dword ptr [edi + 8]
// 0057126b  51                   push ecx
// 0057126c  52                   push edx
// 0057126d  8d442444             lea eax, [esp + 0x44]
// 00571271  6854b68c00           push 0x8cb654
// 00571276  50                   push eax
// 00571277  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 0057127e  e8cd8e0000           call 0x57a150
// 00571283  8b4708               mov eax, dword ptr [edi + 8]
// 00571286  8b570c               mov edx, dword ptr [edi + 0xc]
// 00571289  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057128c  0fafd0               imul edx, eax
// 0057128f  83c410               add esp, 0x10
// 00571292  85d2                 test edx, edx
// 00571294  7651                 jbe 0x5712e7
// 00571296  56                   push esi
// 00571297  8d7101               lea esi, [ecx + 1]
// 0057129a  8d9b00000000         lea ebx, [ebx]
// 005712a0  33d2                 xor edx, edx
// 005712a2  8d4c40ff             lea ecx, [eax + eax*2 - 1]
// 005712a6  8bc5                 mov eax, ebp
// 005712a8  f7f1                 div ecx
// 005712aa  0fb606               movzx eax, byte ptr [esi]
// 005712ad  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 005712b1  f7da                 neg edx
// 005712b3  1bd2                 sbb edx, edx
// 005712b5  83e216               and edx, 0x16
// 005712b8  83c20a               add edx, 0xa
// 005712bb  52                   push edx
// 005712bc  0fb65601             movzx edx, byte ptr [esi + 1]
// 005712c0  52                   push edx
// 005712c1  50                   push eax
// 005712c2  51                   push ecx
// 005712c3  8d542450             lea edx, [esp + 0x50]
// 005712c7  6848b68c00           push 0x8cb648
// 005712cc  52                   push edx
// 005712cd  e87e8e0000           call 0x57a150
// 005712d2  8b4708               mov eax, dword ptr [edi + 8]
// 005712d5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005712d8  0fafc8               imul ecx, eax
// 005712db  45                   inc ebp
// 005712dc  83c418               add esp, 0x18
// 005712df  83c603               add esi, 3
// 005712e2  3be9                 cmp ebp, ecx
// 005712e4  72ba                 jb 0x5712a0
// 005712e6  5e                   pop esi
// 005712e7  8d542420             lea edx, [esp + 0x20]
// 005712eb  52                   push edx
// 005712ec  8d4c2440             lea ecx, [esp + 0x40]
// 005712f0  e8fb880000           call 0x579bf0
// 005712f5  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005712f9  5f                   pop edi
// 005712fa  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 00571302  5d                   pop ebp
// 00571303  7205                 jb 0x57130a
// 00571305  8b4004               mov eax, dword ptr [eax + 4]
// 00571308  eb03                 jmp 0x57130d
// 0057130a  83c004               add eax, 4
// 0057130d  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00571314  50                   push eax
// 00571315  e8b6c00000           call 0x57d3d0
// 0057131a  8d4c2418             lea ecx, [esp + 0x18]
// 0057131e  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00571326  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057132c  8d4c2434             lea ecx, [esp + 0x34]
// 00571330  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 0057133b  e8b056f3ff           call 0x4a69f0
// 00571340  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00571347  64890d00000000       mov dword ptr fs:[0], ecx
// 0057134e  81c4b0000000         add esp, 0xb0
// 00571354  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPMASCII@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
