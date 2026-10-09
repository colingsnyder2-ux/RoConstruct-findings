// roc 2009-12 009134c0  unit: Ogre::RbxMeshLoader  size: 686 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009134c0
//
// 009134c0  6aff                 push -1
// 009134c2  6878709600           push 0x967078
// 009134c7  64a100000000         mov eax, dword ptr fs:[0]
// 009134cd  50                   push eax
// 009134ce  64892500000000       mov dword ptr fs:[0], esp
// 009134d5  81ec84000000         sub esp, 0x84
// 009134db  53                   push ebx
// 009134dc  56                   push esi
// 009134dd  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 009134e4  57                   push edi
// 009134e5  56                   push esi
// 009134e6  8bd9                 mov ebx, ecx
// 009134e8  e893fdffff           call 0x913280
// 009134ed  56                   push esi
// 009134ee  8d442430             lea eax, [esp + 0x30]
// 009134f2  50                   push eax
// 009134f3  8bcb                 mov ecx, ebx
// 009134f5  e806f7ffff           call 0x912c00
// 009134fa  6800000400           push 0x40000
// 009134ff  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 0091350a  ff1504bc9800         call dword ptr [0x98bc04]
// 00913510  8bce                 mov ecx, esi
// 00913512  e819dfbbff           call 0x4d1430
// 00913517  8bce                 mov ecx, esi
// 00913519  e8727fbbff           call 0x4cb490
// 0091351e  e88d14ceff           call 0x5f49b0
// 00913523  50                   push eax
// 00913524  8d4c2454             lea ecx, [esp + 0x54]
// 00913528  e8d303ceff           call 0x5f3900
// 0091352d  0f57c0               xorps xmm0, xmm0
// 00913530  8d4c2450             lea ecx, [esp + 0x50]
// 00913534  51                   push ecx
// 00913535  8bce                 mov ecx, esi
// 00913537  f30f11442478         movss dword ptr [esp + 0x78], xmm0
// 0091353d  f30f1144247c         movss dword ptr [esp + 0x7c], xmm0
// 00913543  f30f11842480000000   movss dword ptr [esp + 0x80], xmm0
// 0091354c  e84f97bbff           call 0x4ccca0
// 00913551  8bce                 mov ecx, esi
// 00913553  e8988bbbff           call 0x4cc0f0
// 00913558  f30f2ac0             cvtsi2ss xmm0, eax
// 0091355c  8bce                 mov ecx, esi
// 0091355e  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00913564  e8a78bbbff           call 0x4cc110
// 00913569  0f57c0               xorps xmm0, xmm0
// 0091356c  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 00913572  0f2fc1               comiss xmm0, xmm1
// 00913575  f30f2ad0             cvtsi2ss xmm2, eax
// 00913579  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 0091357f  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00913585  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 0091358b  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 00913591  8d442424             lea eax, [esp + 0x24]
// 00913595  7704                 ja 0x91359b
// 00913597  8d44241c             lea eax, [esp + 0x1c]
// 0091359b  0f2fc2               comiss xmm0, xmm2
// 0091359e  f30f1018             movss xmm3, dword ptr [eax]
// 009135a2  f30f115c2430         movss dword ptr [esp + 0x30], xmm3
// 009135a8  8d442414             lea eax, [esp + 0x14]
// 009135ac  7704                 ja 0x9135b2
// 009135ae  8d44240c             lea eax, [esp + 0xc]
// 009135b2  0f2fc8               comiss xmm1, xmm0
// 009135b5  f30f1018             movss xmm3, dword ptr [eax]
// 009135b9  f30f115c2434         movss dword ptr [esp + 0x34], xmm3
// 009135bf  8d442424             lea eax, [esp + 0x24]
// 009135c3  7704                 ja 0x9135c9
// 009135c5  8d44241c             lea eax, [esp + 0x1c]
// 009135c9  0f2fd0               comiss xmm2, xmm0
// 009135cc  f30f1008             movss xmm1, dword ptr [eax]
// 009135d0  f30f114c2438         movss dword ptr [esp + 0x38], xmm1
// 009135d6  8d442414             lea eax, [esp + 0x14]
// 009135da  7704                 ja 0x9135e0
// 009135dc  8d44240c             lea eax, [esp + 0xc]
// 009135e0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 009135e4  f30f1000             movss xmm0, dword ptr [eax]
// 009135e8  8d942480000000       lea edx, [esp + 0x80]
// 009135ef  52                   push edx
// 009135f0  8bcf                 mov ecx, edi
// 009135f2  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 009135f8  e8a349bbff           call 0x4c7fa0
// 009135fd  8b0b                 mov ecx, dword ptr [ebx]
// 009135ff  6a01                 push 1
// 00913601  8d442434             lea eax, [esp + 0x34]
// 00913605  50                   push eax
// 00913606  e8c543bbff           call 0x4c79d0
// 0091360b  8b0da01cba00         mov ecx, dword ptr [0xba1ca0]
// 00913611  51                   push ecx
// 00913612  ff1598dab700         call dword ptr [0xb7da98]
// 00913618  6820890000           push 0x8920
// 0091361d  ff15d0bb9800         call dword ptr [0x98bbd0]
// 00913623  51                   push ecx
// 00913624  8bcc                 mov ecx, esp
// 00913626  c70100000000         mov dword ptr [ecx], 0
// 0091362c  8b13                 mov edx, dword ptr [ebx]
// 0091362e  89642410             mov dword ptr [esp + 0x10], esp
// 00913632  52                   push edx
// 00913633  e83885b3ff           call 0x44bb70
// 00913638  6a00                 push 0
// 0091363a  8bce                 mov ecx, esi
// 0091363c  e8cf9abbff           call 0x4cd110
// 00913641  51                   push ecx
// 00913642  8bcc                 mov ecx, esp
// 00913644  c70100000000         mov dword ptr [ecx], 0
// 0091364a  a1b41cba00           mov eax, dword ptr [0xba1cb4]
// 0091364f  89642410             mov dword ptr [esp + 0x10], esp
// 00913653  50                   push eax
// 00913654  e81785b3ff           call 0x44bb70
// 00913659  6a01                 push 1
// 0091365b  8bce                 mov ecx, esi
// 0091365d  e8ae9abbff           call 0x4cd110
// 00913662  51                   push ecx
// 00913663  8bcc                 mov ecx, esp
// 00913665  c70100000000         mov dword ptr [ecx], 0
// 0091366b  8b15b01cba00         mov edx, dword ptr [0xba1cb0]
// 00913671  89642410             mov dword ptr [esp + 0x10], esp
// 00913675  52                   push edx
// 00913676  e8f584b3ff           call 0x44bb70
// 0091367b  6a02                 push 2
// 0091367d  8bce                 mov ecx, esi
// 0091367f  e88c9abbff           call 0x4cd110
// 00913684  e80739ceff           call 0x5f6f90
// 00913689  f30f1000             movss xmm0, dword ptr [eax]
// 0091368d  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00913693  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00913698  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 0091369e  f30f104008           movss xmm0, dword ptr [eax + 8]
// 009136a3  8d44240c             lea eax, [esp + 0xc]
// 009136a7  50                   push eax
// 009136a8  8d4c2418             lea ecx, [esp + 0x18]
// 009136ac  51                   push ecx
// 009136ad  8d542424             lea edx, [esp + 0x24]
// 009136b1  52                   push edx
// 009136b2  8d442430             lea eax, [esp + 0x30]
// 009136b6  50                   push eax
// 009136b7  8d4c2450             lea ecx, [esp + 0x50]
// 009136bb  51                   push ecx
// 009136bc  8d542444             lea edx, [esp + 0x44]
// 009136c0  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 009136c6  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 009136ce  56                   push esi
// 009136cf  52                   push edx
// 009136d0  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 009136d6  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 009136dc  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 009136e2  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 009136e8  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 009136ee  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 009136f4  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 009136fa  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00913700  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00913706  e875d1ffff           call 0x910880
// 0091370b  83c41c               add esp, 0x1c
// 0091370e  6820890000           push 0x8920
// 00913713  ff15dcbb9800         call dword ptr [0x98bbdc]
// 00913719  8bce                 mov ecx, esi
// 0091371b  e8b0d5bbff           call 0x4d0cd0
// 00913720  ff1500bc9800         call dword ptr [0x98bc00]
// 00913726  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 00913731  85ff                 test edi, edi
// 00913733  741f                 je 0x913754
// 00913735  8d4704               lea eax, [edi + 4]
// 00913738  50                   push eax
// 00913739  ff1508b29800         call dword ptr [0x98b208]
// 0091373f  85c0                 test eax, eax
// 00913741  7511                 jne 0x913754
// 00913743  8bcf                 mov ecx, edi
// 00913745  e8d678b3ff           call 0x44b020
// 0091374a  8b17                 mov edx, dword ptr [edi]
// 0091374c  8b02                 mov eax, dword ptr [edx]
// 0091374e  6a01                 push 1
// 00913750  8bcf                 mov ecx, edi
// 00913752  ffd0                 call eax
// 00913754  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0091375b  5f                   pop edi
// 0091375c  5e                   pop esi
// 0091375d  64890d00000000       mov dword ptr fs:[0], ecx
// 00913764  5b                   pop ebx
// 00913765  81c490000000         add esp, 0x90
// 0091376b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?applyPS14ATI@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
