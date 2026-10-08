// roc 2010-06 00910bc0  unit: G3D::GFont  size: 686 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910bc0
//
// 00910bc0  6aff                 push -1
// 00910bc2  6868149c00           push 0x9c1468
// 00910bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00910bcd  50                   push eax
// 00910bce  64892500000000       mov dword ptr fs:[0], esp
// 00910bd5  81ec84000000         sub esp, 0x84
// 00910bdb  53                   push ebx
// 00910bdc  56                   push esi
// 00910bdd  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00910be4  57                   push edi
// 00910be5  56                   push esi
// 00910be6  8bd9                 mov ebx, ecx
// 00910be8  e893fdffff           call 0x910980
// 00910bed  56                   push esi
// 00910bee  8d442430             lea eax, [esp + 0x30]
// 00910bf2  50                   push eax
// 00910bf3  8bcb                 mov ecx, ebx
// 00910bf5  e806f7ffff           call 0x910300
// 00910bfa  6800000400           push 0x40000
// 00910bff  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 00910c0a  ff15b4aa9e00         call dword ptr [0x9eaab4]
// 00910c10  8bce                 mov ecx, esi
// 00910c12  e84973b8ff           call 0x497f60
// 00910c17  8bce                 mov ecx, esi
// 00910c19  e81211b8ff           call 0x491d30
// 00910c1e  e8fd66c4ff           call 0x557320
// 00910c23  50                   push eax
// 00910c24  8d4c2454             lea ecx, [esp + 0x54]
// 00910c28  e84354c4ff           call 0x556070
// 00910c2d  0f57c0               xorps xmm0, xmm0
// 00910c30  8d4c2450             lea ecx, [esp + 0x50]
// 00910c34  51                   push ecx
// 00910c35  8bce                 mov ecx, esi
// 00910c37  f30f11442478         movss dword ptr [esp + 0x78], xmm0
// 00910c3d  f30f1144247c         movss dword ptr [esp + 0x7c], xmm0
// 00910c43  f30f11842480000000   movss dword ptr [esp + 0x80], xmm0
// 00910c4c  e8bf2bb8ff           call 0x493810
// 00910c51  8bce                 mov ecx, esi
// 00910c53  e8681fb8ff           call 0x492bc0
// 00910c58  f30f2ac0             cvtsi2ss xmm0, eax
// 00910c5c  8bce                 mov ecx, esi
// 00910c5e  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00910c64  e8771fb8ff           call 0x492be0
// 00910c69  0f57c0               xorps xmm0, xmm0
// 00910c6c  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 00910c72  0f2fc1               comiss xmm0, xmm1
// 00910c75  f30f2ad0             cvtsi2ss xmm2, eax
// 00910c79  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00910c7f  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00910c85  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 00910c8b  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 00910c91  8d442424             lea eax, [esp + 0x24]
// 00910c95  7704                 ja 0x910c9b
// 00910c97  8d44241c             lea eax, [esp + 0x1c]
// 00910c9b  0f2fc2               comiss xmm0, xmm2
// 00910c9e  f30f1018             movss xmm3, dword ptr [eax]
// 00910ca2  f30f115c2430         movss dword ptr [esp + 0x30], xmm3
// 00910ca8  8d442414             lea eax, [esp + 0x14]
// 00910cac  7704                 ja 0x910cb2
// 00910cae  8d44240c             lea eax, [esp + 0xc]
// 00910cb2  0f2fc8               comiss xmm1, xmm0
// 00910cb5  f30f1018             movss xmm3, dword ptr [eax]
// 00910cb9  f30f115c2434         movss dword ptr [esp + 0x34], xmm3
// 00910cbf  8d442424             lea eax, [esp + 0x24]
// 00910cc3  7704                 ja 0x910cc9
// 00910cc5  8d44241c             lea eax, [esp + 0x1c]
// 00910cc9  0f2fd0               comiss xmm2, xmm0
// 00910ccc  f30f1008             movss xmm1, dword ptr [eax]
// 00910cd0  f30f114c2438         movss dword ptr [esp + 0x38], xmm1
// 00910cd6  8d442414             lea eax, [esp + 0x14]
// 00910cda  7704                 ja 0x910ce0
// 00910cdc  8d44240c             lea eax, [esp + 0xc]
// 00910ce0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00910ce4  f30f1000             movss xmm0, dword ptr [eax]
// 00910ce8  8d942480000000       lea edx, [esp + 0x80]
// 00910cef  52                   push edx
// 00910cf0  8bcf                 mov ecx, edi
// 00910cf2  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00910cf8  e84345b7ff           call 0x485240
// 00910cfd  8b0b                 mov ecx, dword ptr [ebx]
// 00910cff  6a01                 push 1
// 00910d01  8d442434             lea eax, [esp + 0x34]
// 00910d05  50                   push eax
// 00910d06  e8653eb7ff           call 0x484b70
// 00910d0b  8b0df0cbc200         mov ecx, dword ptr [0xc2cbf0]
// 00910d11  51                   push ecx
// 00910d12  ff15283bc000         call dword ptr [0xc03b28]
// 00910d18  6820890000           push 0x8920
// 00910d1d  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00910d23  51                   push ecx
// 00910d24  8bcc                 mov ecx, esp
// 00910d26  c70100000000         mov dword ptr [ecx], 0
// 00910d2c  8b13                 mov edx, dword ptr [ebx]
// 00910d2e  89642410             mov dword ptr [esp + 0x10], esp
// 00910d32  52                   push edx
// 00910d33  e8e85fb7ff           call 0x486d20
// 00910d38  6a00                 push 0
// 00910d3a  8bce                 mov ecx, esi
// 00910d3c  e83f2fb8ff           call 0x493c80
// 00910d41  51                   push ecx
// 00910d42  8bcc                 mov ecx, esp
// 00910d44  c70100000000         mov dword ptr [ecx], 0
// 00910d4a  a104ccc200           mov eax, dword ptr [0xc2cc04]
// 00910d4f  89642410             mov dword ptr [esp + 0x10], esp
// 00910d53  50                   push eax
// 00910d54  e8c75fb7ff           call 0x486d20
// 00910d59  6a01                 push 1
// 00910d5b  8bce                 mov ecx, esi
// 00910d5d  e81e2fb8ff           call 0x493c80
// 00910d62  51                   push ecx
// 00910d63  8bcc                 mov ecx, esp
// 00910d65  c70100000000         mov dword ptr [ecx], 0
// 00910d6b  8b1500ccc200         mov edx, dword ptr [0xc2cc00]
// 00910d71  89642410             mov dword ptr [esp + 0x10], esp
// 00910d75  52                   push edx
// 00910d76  e8a55fb7ff           call 0x486d20
// 00910d7b  6a02                 push 2
// 00910d7d  8bce                 mov ecx, esi
// 00910d7f  e8fc2eb8ff           call 0x493c80
// 00910d84  e88790c4ff           call 0x559e10
// 00910d89  f30f1000             movss xmm0, dword ptr [eax]
// 00910d8d  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00910d93  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00910d98  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00910d9e  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00910da3  8d44240c             lea eax, [esp + 0xc]
// 00910da7  50                   push eax
// 00910da8  8d4c2418             lea ecx, [esp + 0x18]
// 00910dac  51                   push ecx
// 00910dad  8d542424             lea edx, [esp + 0x24]
// 00910db1  52                   push edx
// 00910db2  8d442430             lea eax, [esp + 0x30]
// 00910db6  50                   push eax
// 00910db7  8d4c2450             lea ecx, [esp + 0x50]
// 00910dbb  51                   push ecx
// 00910dbc  8d542444             lea edx, [esp + 0x44]
// 00910dc0  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 00910dc6  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00910dce  56                   push esi
// 00910dcf  52                   push edx
// 00910dd0  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 00910dd6  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00910ddc  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00910de2  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00910de8  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00910dee  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00910df4  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00910dfa  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00910e00  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00910e06  e885d1ffff           call 0x90df90
// 00910e0b  83c41c               add esp, 0x1c
// 00910e0e  6820890000           push 0x8920
// 00910e13  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 00910e19  8bce                 mov ecx, esi
// 00910e1b  e8e069b8ff           call 0x497800
// 00910e20  ff15b8aa9e00         call dword ptr [0x9eaab8]
// 00910e26  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 00910e31  85ff                 test edi, edi
// 00910e33  741f                 je 0x910e54
// 00910e35  8d4704               lea eax, [edi + 4]
// 00910e38  50                   push eax
// 00910e39  ff157ca39e00         call dword ptr [0x9ea37c]
// 00910e3f  85c0                 test eax, eax
// 00910e41  7511                 jne 0x910e54
// 00910e43  8bcf                 mov ecx, edi
// 00910e45  e8d62cb7ff           call 0x483b20
// 00910e4a  8b17                 mov edx, dword ptr [edi]
// 00910e4c  8b02                 mov eax, dword ptr [edx]
// 00910e4e  6a01                 push 1
// 00910e50  8bcf                 mov ecx, edi
// 00910e52  ffd0                 call eax
// 00910e54  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00910e5b  5f                   pop edi
// 00910e5c  5e                   pop esi
// 00910e5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00910e64  5b                   pop ebx
// 00910e65  81c490000000         add esp, 0x90
// 00910e6b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?applyPS14ATI@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
