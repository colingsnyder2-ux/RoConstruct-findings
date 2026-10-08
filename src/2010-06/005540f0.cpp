// from server: 100% by auto
// roc 2010-06 005540f0  unit: seg_00550000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005540f0
//
// 005540f0  6aff                 push -1
// 005540f2  6844119900           push 0x991144
// 005540f7  64a100000000         mov eax, dword ptr fs:[0]
// 005540fd  50                   push eax
// 005540fe  64892500000000       mov dword ptr fs:[0], esp
// 00554105  81eca4000000         sub esp, 0xa4
// 0055410b  55                   push ebp
// 0055410c  57                   push edi
// 0055410d  8d442408             lea eax, [esp + 8]
// 00554111  8bf9                 mov edi, ecx
// 00554113  33ed                 xor ebp, ebp
// 00554115  50                   push eax
// 00554116  8d4c2440             lea ecx, [esp + 0x40]
// 0055411a  c644241000           mov byte ptr [esp + 0x10], 0
// 0055411f  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00554127  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0055412b  c644242000           mov byte ptr [esp + 0x20], 0
// 00554130  c744241446000000     mov dword ptr [esp + 0x14], 0x46
// 00554138  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00554140  e85b3c0000           call 0x557da0
// 00554145  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00554148  8b5708               mov edx, dword ptr [edi + 8]
// 0055414b  51                   push ecx
// 0055414c  52                   push edx
// 0055414d  8d442444             lea eax, [esp + 0x44]
// 00554151  687403a200           push 0xa20374
// 00554156  50                   push eax
// 00554157  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 0055415e  e81d410000           call 0x558280
// 00554163  8b4708               mov eax, dword ptr [edi + 8]
// 00554166  8b570c               mov edx, dword ptr [edi + 0xc]
// 00554169  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055416c  0fafd0               imul edx, eax
// 0055416f  83c410               add esp, 0x10
// 00554172  85d2                 test edx, edx
// 00554174  7651                 jbe 0x5541c7
// 00554176  56                   push esi
// 00554177  8d7101               lea esi, [ecx + 1]
// 0055417a  8d9b00000000         lea ebx, [ebx]
// 00554180  33d2                 xor edx, edx
// 00554182  8d4c40ff             lea ecx, [eax + eax*2 - 1]
// 00554186  8bc5                 mov eax, ebp
// 00554188  f7f1                 div ecx
// 0055418a  0fb606               movzx eax, byte ptr [esi]
// 0055418d  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 00554191  f7da                 neg edx
// 00554193  1bd2                 sbb edx, edx
// 00554195  83e216               and edx, 0x16
// 00554198  83c20a               add edx, 0xa
// 0055419b  52                   push edx
// 0055419c  0fb65601             movzx edx, byte ptr [esi + 1]
// 005541a0  52                   push edx
// 005541a1  50                   push eax
// 005541a2  51                   push ecx
// 005541a3  8d542450             lea edx, [esp + 0x50]
// 005541a7  686803a200           push 0xa20368
// 005541ac  52                   push edx
// 005541ad  e8ce400000           call 0x558280
// 005541b2  8b4708               mov eax, dword ptr [edi + 8]
// 005541b5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005541b8  0fafc8               imul ecx, eax
// 005541bb  45                   inc ebp
// 005541bc  83c418               add esp, 0x18
// 005541bf  83c603               add esi, 3
// 005541c2  3be9                 cmp ebp, ecx
// 005541c4  72ba                 jb 0x554180
// 005541c6  5e                   pop esi
// 005541c7  8d542420             lea edx, [esp + 0x20]
// 005541cb  52                   push edx
// 005541cc  8d4c2440             lea ecx, [esp + 0x40]
// 005541d0  e84b3b0000           call 0x557d20
// 005541d5  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005541d9  5f                   pop edi
// 005541da  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 005541e2  5d                   pop ebp
// 005541e3  7205                 jb 0x5541ea
// 005541e5  8b4004               mov eax, dword ptr [eax + 4]
// 005541e8  eb03                 jmp 0x5541ed
// 005541ea  83c004               add eax, 4
// 005541ed  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 005541f4  50                   push eax
// 005541f5  e826c90000           call 0x560b20
// 005541fa  8d4c2418             lea ecx, [esp + 0x18]
// 005541fe  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00554206  ff1500a49e00         call dword ptr [0x9ea400]
// 0055420c  8d4c2434             lea ecx, [esp + 0x34]
// 00554210  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 0055421b  e86088f3ff           call 0x48ca80
// 00554220  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00554227  64890d00000000       mov dword ptr fs:[0], ecx
// 0055422e  81c4b0000000         add esp, 0xb0
// 00554234  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPMASCII@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
