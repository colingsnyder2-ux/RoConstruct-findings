// roc 2009-12 00913770  unit: Ogre::RbxMeshLoader  size: 1315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00913770
//
// 00913770  6aff                 push -1
// 00913772  68ce709600           push 0x9670ce
// 00913777  64a100000000         mov eax, dword ptr fs:[0]
// 0091377d  50                   push eax
// 0091377e  64892500000000       mov dword ptr fs:[0], esp
// 00913785  83ec60               sub esp, 0x60
// 00913788  53                   push ebx
// 00913789  55                   push ebp
// 0091378a  56                   push esi
// 0091378b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0091378f  57                   push edi
// 00913790  56                   push esi
// 00913791  8bf9                 mov edi, ecx
// 00913793  e8e8faffff           call 0x913280
// 00913798  56                   push esi
// 00913799  8d842484000000       lea eax, [esp + 0x84]
// 009137a0  50                   push eax
// 009137a1  8bcf                 mov ecx, edi
// 009137a3  e858f4ffff           call 0x912c00
// 009137a8  8bce                 mov ecx, esi
// 009137aa  c744247800000000     mov dword ptr [esp + 0x78], 0
// 009137b2  e879dcbbff           call 0x4d1430
// 009137b7  d9ee                 fldz 
// 009137b9  83ec08               sub esp, 8
// 009137bc  dd1c24               fstp qword ptr [esp]
// 009137bf  6a06                 push 6
// 009137c1  8bce                 mov ecx, esi
// 009137c3  e86875bbff           call 0x4cad30
// 009137c8  e8c337ceff           call 0x5f6f90
// 009137cd  f30f1000             movss xmm0, dword ptr [eax]
// 009137d1  f30f104804           movss xmm1, dword ptr [eax + 4]
// 009137d6  f30f105008           movss xmm2, dword ptr [eax + 8]
// 009137db  8d86a8040000         lea eax, [esi + 0x4a8]
// 009137e1  f30f1100             movss dword ptr [eax], xmm0
// 009137e5  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 009137ed  50                   push eax
// 009137ee  f30f114804           movss dword ptr [eax + 4], xmm1
// 009137f3  f30f115008           movss dword ptr [eax + 8], xmm2
// 009137f8  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 009137fd  ff1560bb9800         call dword ptr [0x98bb60]
// 00913803  e8a811ceff           call 0x5f49b0
// 00913808  50                   push eax
// 00913809  8d4c2444             lea ecx, [esp + 0x44]
// 0091380d  e8ee00ceff           call 0x5f3900
// 00913812  f6052cccb70001       test byte ptr [0xb7cc2c], 1
// 00913819  0f57c0               xorps xmm0, xmm0
// 0091381c  751f                 jne 0x91383d
// 0091381e  830d2cccb70001       or dword ptr [0xb7cc2c], 1
// 00913825  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 0091382d  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 00913835  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 0091383d  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 00913845  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 0091384b  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 00913853  8d4c2440             lea ecx, [esp + 0x40]
// 00913857  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 0091385d  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 00913865  51                   push ecx
// 00913866  8bce                 mov ecx, esi
// 00913868  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 0091386e  e82d94bbff           call 0x4ccca0
// 00913873  e83811ceff           call 0x5f49b0
// 00913878  50                   push eax
// 00913879  8d4c2444             lea ecx, [esp + 0x44]
// 0091387d  e87e00ceff           call 0x5f3900
// 00913882  f6052cccb70001       test byte ptr [0xb7cc2c], 1
// 00913889  7522                 jne 0x9138ad
// 0091388b  0f57c0               xorps xmm0, xmm0
// 0091388e  830d2cccb70001       or dword ptr [0xb7cc2c], 1
// 00913895  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 0091389d  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 009138a5  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 009138ad  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 009138b5  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 009138bb  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 009138c3  8d542440             lea edx, [esp + 0x40]
// 009138c7  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 009138cd  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 009138d5  52                   push edx
// 009138d6  8bce                 mov ecx, esi
// 009138d8  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 009138de  e8dd7bbbff           call 0x4cb4c0
// 009138e3  8bce                 mov ecx, esi
// 009138e5  e80688bbff           call 0x4cc0f0
// 009138ea  f30f2ac0             cvtsi2ss xmm0, eax
// 009138ee  8bce                 mov ecx, esi
// 009138f0  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 009138f6  e81588bbff           call 0x4cc110
// 009138fb  0f57c0               xorps xmm0, xmm0
// 009138fe  f30f10542418         movss xmm2, dword ptr [esp + 0x18]
// 00913904  0f2fc2               comiss xmm0, xmm2
// 00913907  f30f2ac8             cvtsi2ss xmm1, eax
// 0091390b  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00913911  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00913917  f30f11542410         movss dword ptr [esp + 0x10], xmm2
// 0091391d  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 00913923  8d442410             lea eax, [esp + 0x10]
// 00913927  7704                 ja 0x91392d
// 00913929  8d442414             lea eax, [esp + 0x14]
// 0091392d  0f2fc1               comiss xmm0, xmm1
// 00913930  f30f1018             movss xmm3, dword ptr [eax]
// 00913934  f30f115c2420         movss dword ptr [esp + 0x20], xmm3
// 0091393a  8d442418             lea eax, [esp + 0x18]
// 0091393e  7704                 ja 0x913944
// 00913940  8d44241c             lea eax, [esp + 0x1c]
// 00913944  0f2fd0               comiss xmm2, xmm0
// 00913947  f30f1018             movss xmm3, dword ptr [eax]
// 0091394b  f30f115c2424         movss dword ptr [esp + 0x24], xmm3
// 00913951  8d442410             lea eax, [esp + 0x10]
// 00913955  7704                 ja 0x91395b
// 00913957  8d442414             lea eax, [esp + 0x14]
// 0091395b  0f2fc8               comiss xmm1, xmm0
// 0091395e  f30f1010             movss xmm2, dword ptr [eax]
// 00913962  f30f11542428         movss dword ptr [esp + 0x28], xmm2
// 00913968  8d442418             lea eax, [esp + 0x18]
// 0091396c  7704                 ja 0x913972
// 0091396e  8d44241c             lea eax, [esp + 0x1c]
// 00913972  f30f1000             movss xmm0, dword ptr [eax]
// 00913976  8b0f                 mov ecx, dword ptr [edi]
// 00913978  6a01                 push 1
// 0091397a  8d442424             lea eax, [esp + 0x24]
// 0091397e  50                   push eax
// 0091397f  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00913985  e84640bbff           call 0x4c79d0
// 0091398a  68603da200           push 0xa23d60
// 0091398f  8d4c2444             lea ecx, [esp + 0x44]
// 00913993  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913999  57                   push edi
// 0091399a  8d4c2444             lea ecx, [esp + 0x44]
// 0091399e  51                   push ecx
// 0091399f  8b0da41cba00         mov ecx, dword ptr [0xba1ca4]
// 009139a5  83c118               add ecx, 0x18
// 009139a8  c684248000000001     mov byte ptr [esp + 0x80], 1
// 009139b0  e86b9fbcff           call 0x4dd920
// 009139b5  8d4c2440             lea ecx, [esp + 0x40]
// 009139b9  c644247800           mov byte ptr [esp + 0x78], 0
// 009139be  ff15e4b69800         call dword ptr [0x98b6e4]
// 009139c4  68a41cba00           push 0xba1ca4
// 009139c9  8bce                 mov ecx, esi
// 009139cb  e8c091bbff           call 0x4ccb90
// 009139d0  e8bb35ceff           call 0x5f6f90
// 009139d5  f30f1000             movss xmm0, dword ptr [eax]
// 009139d9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009139dc  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 009139e2  f30f104004           movss xmm0, dword ptr [eax + 4]
// 009139e7  8d542430             lea edx, [esp + 0x30]
// 009139eb  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 009139f1  f30f104008           movss xmm0, dword ptr [eax + 8]
// 009139f6  52                   push edx
// 009139f7  56                   push esi
// 009139f8  8d442448             lea eax, [esp + 0x48]
// 009139fc  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00913a02  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 00913a0a  8d6f10               lea ebp, [edi + 0x10]
// 00913a0d  50                   push eax
// 00913a0e  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00913a14  e88745bbff           call 0x4c7fa0
// 00913a19  50                   push eax
// 00913a1a  e851caffff           call 0x910470
// 00913a1f  8b5d00               mov ebx, dword ptr [ebp]
// 00913a22  83c40c               add esp, 0xc
// 00913a25  6a01                 push 1
// 00913a27  8d4c2444             lea ecx, [esp + 0x44]
// 00913a2b  51                   push ecx
// 00913a2c  8bcb                 mov ecx, ebx
// 00913a2e  e86d45bbff           call 0x4c7fa0
// 00913a33  50                   push eax
// 00913a34  8bcb                 mov ecx, ebx
// 00913a36  e8953fbbff           call 0x4c79d0
// 00913a3b  68543da200           push 0xa23d54
// 00913a40  8d4c2444             lea ecx, [esp + 0x44]
// 00913a44  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913a4a  8b0da81cba00         mov ecx, dword ptr [0xba1ca8]
// 00913a50  55                   push ebp
// 00913a51  8d542444             lea edx, [esp + 0x44]
// 00913a55  52                   push edx
// 00913a56  83c118               add ecx, 0x18
// 00913a59  c684248000000002     mov byte ptr [esp + 0x80], 2
// 00913a61  e8ba9ebcff           call 0x4dd920
// 00913a66  8d4c2440             lea ecx, [esp + 0x40]
// 00913a6a  c644247800           mov byte ptr [esp + 0x78], 0
// 00913a6f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913a75  68483da200           push 0xa23d48
// 00913a7a  8d4c2444             lea ecx, [esp + 0x44]
// 00913a7e  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913a84  8d842480000000       lea eax, [esp + 0x80]
// 00913a8b  50                   push eax
// 00913a8c  8d4c2444             lea ecx, [esp + 0x44]
// 00913a90  51                   push ecx
// 00913a91  8b0da81cba00         mov ecx, dword ptr [0xba1ca8]
// 00913a97  83c118               add ecx, 0x18
// 00913a9a  c684248000000003     mov byte ptr [esp + 0x80], 3
// 00913aa2  e8799ebcff           call 0x4dd920
// 00913aa7  c644247800           mov byte ptr [esp + 0x78], 0
// 00913aac  8d4c2440             lea ecx, [esp + 0x40]
// 00913ab0  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913ab6  68a81cba00           push 0xba1ca8
// 00913abb  8bce                 mov ecx, esi
// 00913abd  e8ce90bbff           call 0x4ccb90
// 00913ac2  e8c934ceff           call 0x5f6f90
// 00913ac7  f30f1000             movss xmm0, dword ptr [eax]
// 00913acb  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00913ad2  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00913ad8  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00913add  8d542430             lea edx, [esp + 0x30]
// 00913ae1  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00913ae7  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00913aec  52                   push edx
// 00913aed  56                   push esi
// 00913aee  8d442448             lea eax, [esp + 0x48]
// 00913af2  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00913af8  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 00913b00  50                   push eax
// 00913b01  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00913b07  e89444bbff           call 0x4c7fa0
// 00913b0c  50                   push eax
// 00913b0d  e85ec9ffff           call 0x910470
// 00913b12  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00913b19  83c40c               add esp, 0xc
// 00913b1c  6a01                 push 1
// 00913b1e  8d542444             lea edx, [esp + 0x44]
// 00913b22  52                   push edx
// 00913b23  8bd9                 mov ebx, ecx
// 00913b25  e87644bbff           call 0x4c7fa0
// 00913b2a  50                   push eax
// 00913b2b  8bcb                 mov ecx, ebx
// 00913b2d  e89e3ebbff           call 0x4c79d0
// 00913b32  68603da200           push 0xa23d60
// 00913b37  8d4c2444             lea ecx, [esp + 0x44]
// 00913b3b  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913b41  8b0dac1cba00         mov ecx, dword ptr [0xba1cac]
// 00913b47  57                   push edi
// 00913b48  8d442444             lea eax, [esp + 0x44]
// 00913b4c  50                   push eax
// 00913b4d  83c118               add ecx, 0x18
// 00913b50  c684248000000004     mov byte ptr [esp + 0x80], 4
// 00913b58  e8c39dbcff           call 0x4dd920
// 00913b5d  8d4c2440             lea ecx, [esp + 0x40]
// 00913b61  c644247800           mov byte ptr [esp + 0x78], 0
// 00913b66  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913b6c  68543da200           push 0xa23d54
// 00913b71  8d4c2444             lea ecx, [esp + 0x44]
// 00913b75  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913b7b  8d8c2480000000       lea ecx, [esp + 0x80]
// 00913b82  51                   push ecx
// 00913b83  8b0dac1cba00         mov ecx, dword ptr [0xba1cac]
// 00913b89  8d542444             lea edx, [esp + 0x44]
// 00913b8d  52                   push edx
// 00913b8e  83c118               add ecx, 0x18
// 00913b91  c684248000000005     mov byte ptr [esp + 0x80], 5
// 00913b99  e8829dbcff           call 0x4dd920
// 00913b9e  8d4c2440             lea ecx, [esp + 0x40]
// 00913ba2  c644247800           mov byte ptr [esp + 0x78], 0
// 00913ba7  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913bad  68403da200           push 0xa23d40
// 00913bb2  8d4c2444             lea ecx, [esp + 0x44]
// 00913bb6  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913bbc  8b0dac1cba00         mov ecx, dword ptr [0xba1cac]
// 00913bc2  68b41cba00           push 0xba1cb4
// 00913bc7  8d442444             lea eax, [esp + 0x44]
// 00913bcb  50                   push eax
// 00913bcc  83c118               add ecx, 0x18
// 00913bcf  c684248000000006     mov byte ptr [esp + 0x80], 6
// 00913bd7  e8449dbcff           call 0x4dd920
// 00913bdc  8d4c2440             lea ecx, [esp + 0x40]
// 00913be0  c644247800           mov byte ptr [esp + 0x78], 0
// 00913be5  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913beb  68ac1cba00           push 0xba1cac
// 00913bf0  8bce                 mov ecx, esi
// 00913bf2  e8998fbbff           call 0x4ccb90
// 00913bf7  e89433ceff           call 0x5f6f90
// 00913bfc  f30f1000             movss xmm0, dword ptr [eax]
// 00913c00  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00913c06  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00913c0b  8d4c2430             lea ecx, [esp + 0x30]
// 00913c0f  51                   push ecx
// 00913c10  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00913c16  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00913c1b  8d542424             lea edx, [esp + 0x24]
// 00913c1f  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00913c25  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 00913c2d  56                   push esi
// 00913c2e  52                   push edx
// 00913c2f  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00913c35  e836c8ffff           call 0x910470
// 00913c3a  83c40c               add esp, 0xc
// 00913c3d  8bce                 mov ecx, esi
// 00913c3f  e88cd0bbff           call 0x4d0cd0
// 00913c44  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00913c4b  5f                   pop edi
// 00913c4c  5e                   pop esi
// 00913c4d  5d                   pop ebp
// 00913c4e  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00913c56  5b                   pop ebx
// 00913c57  85c0                 test eax, eax
// 00913c59  7427                 je 0x913c82
// 00913c5b  83c004               add eax, 4
// 00913c5e  50                   push eax
// 00913c5f  ff1508b29800         call dword ptr [0x98b208]
// 00913c65  85c0                 test eax, eax
// 00913c67  7519                 jne 0x913c82
// 00913c69  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00913c6d  e8ae73b3ff           call 0x44b020
// 00913c72  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00913c76  85c9                 test ecx, ecx
// 00913c78  7408                 je 0x913c82
// 00913c7a  8b01                 mov eax, dword ptr [ecx]
// 00913c7c  8b10                 mov edx, dword ptr [eax]
// 00913c7e  6a01                 push 1
// 00913c80  ffd2                 call edx
// 00913c82  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00913c86  64890d00000000       mov dword ptr fs:[0], ecx
// 00913c8d  83c46c               add esp, 0x6c
// 00913c90  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?applyPS20@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
