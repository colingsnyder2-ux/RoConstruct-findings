// roc 2008-06 0050eaf0  unit: seg_00500000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050eaf0
//
// 0050eaf0  6aff                 push -1
// 0050eaf2  6804c27c00           push 0x7cc204
// 0050eaf7  64a100000000         mov eax, dword ptr fs:[0]
// 0050eafd  50                   push eax
// 0050eafe  64892500000000       mov dword ptr fs:[0], esp
// 0050eb05  81eca4000000         sub esp, 0xa4
// 0050eb0b  55                   push ebp
// 0050eb0c  57                   push edi
// 0050eb0d  8d442408             lea eax, [esp + 8]
// 0050eb11  8bf9                 mov edi, ecx
// 0050eb13  33ed                 xor ebp, ebp
// 0050eb15  50                   push eax
// 0050eb16  8d4c2440             lea ecx, [esp + 0x40]
// 0050eb1a  c644241000           mov byte ptr [esp + 0x10], 0
// 0050eb1f  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0050eb27  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0050eb2b  c644242000           mov byte ptr [esp + 0x20], 0
// 0050eb30  c744241446000000     mov dword ptr [esp + 0x14], 0x46
// 0050eb38  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0050eb40  e88b3e0000           call 0x5129d0
// 0050eb45  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0050eb48  8b5708               mov edx, dword ptr [edi + 8]
// 0050eb4b  51                   push ecx
// 0050eb4c  52                   push edx
// 0050eb4d  8d442444             lea eax, [esp + 0x44]
// 0050eb51  68fc818200           push 0x8281fc
// 0050eb56  50                   push eax
// 0050eb57  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 0050eb5e  e84d430000           call 0x512eb0
// 0050eb63  8b4708               mov eax, dword ptr [edi + 8]
// 0050eb66  8b570c               mov edx, dword ptr [edi + 0xc]
// 0050eb69  8b4f04               mov ecx, dword ptr [edi + 4]
// 0050eb6c  0fafd0               imul edx, eax
// 0050eb6f  83c410               add esp, 0x10
// 0050eb72  85d2                 test edx, edx
// 0050eb74  7651                 jbe 0x50ebc7
// 0050eb76  56                   push esi
// 0050eb77  8d7101               lea esi, [ecx + 1]
// 0050eb7a  8d9b00000000         lea ebx, [ebx]
// 0050eb80  33d2                 xor edx, edx
// 0050eb82  8d4c40ff             lea ecx, [eax + eax*2 - 1]
// 0050eb86  8bc5                 mov eax, ebp
// 0050eb88  f7f1                 div ecx
// 0050eb8a  0fb606               movzx eax, byte ptr [esi]
// 0050eb8d  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 0050eb91  f7da                 neg edx
// 0050eb93  1bd2                 sbb edx, edx
// 0050eb95  83e216               and edx, 0x16
// 0050eb98  83c20a               add edx, 0xa
// 0050eb9b  52                   push edx
// 0050eb9c  0fb65601             movzx edx, byte ptr [esi + 1]
// 0050eba0  52                   push edx
// 0050eba1  50                   push eax
// 0050eba2  51                   push ecx
// 0050eba3  8d542450             lea edx, [esp + 0x50]
// 0050eba7  68f0818200           push 0x8281f0
// 0050ebac  52                   push edx
// 0050ebad  e8fe420000           call 0x512eb0
// 0050ebb2  8b4708               mov eax, dword ptr [edi + 8]
// 0050ebb5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0050ebb8  0fafc8               imul ecx, eax
// 0050ebbb  45                   inc ebp
// 0050ebbc  83c418               add esp, 0x18
// 0050ebbf  83c603               add esi, 3
// 0050ebc2  3be9                 cmp ebp, ecx
// 0050ebc4  72ba                 jb 0x50eb80
// 0050ebc6  5e                   pop esi
// 0050ebc7  8d542420             lea edx, [esp + 0x20]
// 0050ebcb  52                   push edx
// 0050ebcc  8d4c2440             lea ecx, [esp + 0x40]
// 0050ebd0  e87b3d0000           call 0x512950
// 0050ebd5  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0050ebd9  5f                   pop edi
// 0050ebda  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 0050ebe2  5d                   pop ebp
// 0050ebe3  7205                 jb 0x50ebea
// 0050ebe5  8b4004               mov eax, dword ptr [eax + 4]
// 0050ebe8  eb03                 jmp 0x50ebed
// 0050ebea  83c004               add eax, 4
// 0050ebed  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0050ebf4  50                   push eax
// 0050ebf5  e836ae0000           call 0x519a30
// 0050ebfa  8d4c2418             lea ecx, [esp + 0x18]
// 0050ebfe  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 0050ec06  ff1568248000         call dword ptr [0x802468]
// 0050ec0c  8d4c2434             lea ecx, [esp + 0x34]
// 0050ec10  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 0050ec1b  e8e01af6ff           call 0x470700
// 0050ec20  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0050ec27  64890d00000000       mov dword ptr fs:[0], ecx
// 0050ec2e  81c4b0000000         add esp, 0xb0
// 0050ec34  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPMASCII@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
