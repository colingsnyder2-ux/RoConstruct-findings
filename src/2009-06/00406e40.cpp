// roc 2009-06 00406e40  unit: VCApp::?$CComObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406e40
//
// 00406e40  55                   push ebp
// 00406e41  8bec                 mov ebp, esp
// 00406e43  64a100000000         mov eax, dword ptr fs:[0]
// 00406e49  6aff                 push -1
// 00406e4b  6818cd8400           push 0x84cd18
// 00406e50  50                   push eax
// 00406e51  64892500000000       mov dword ptr fs:[0], esp
// 00406e58  81ec18010000         sub esp, 0x118
// 00406e5e  53                   push ebx
// 00406e5f  56                   push esi
// 00406e60  8bf1                 mov esi, ecx
// 00406e62  33db                 xor ebx, ebx
// 00406e64  57                   push edi
// 00406e65  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406e68  740c                 je 0x406e76
// 00406e6a  395e14               cmp dword ptr [esi + 0x14], ebx
// 00406e6d  7407                 je 0x406e76
// 00406e6f  33c0                 xor eax, eax
// 00406e71  e951020000           jmp 0x4070c7
// 00406e76  a11897a300           mov eax, dword ptr [0xa39718]
// 00406e7b  83c010               add eax, 0x10
// 00406e7e  8945e0               mov dword ptr [ebp - 0x20], eax
// 00406e81  50                   push eax
// 00406e82  895dfc               mov dword ptr [ebp - 4], ebx
// 00406e85  ff15a8e18900         call dword ptr [0x89e1a8]
// 00406e8b  c645e401             mov byte ptr [ebp - 0x1c], 1
// 00406e8f  bf05400080           mov edi, 0x80004005
// 00406e94  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406e97  0f8506020000         jne 0x4070a3
// 00406e9d  8b4604               mov eax, dword ptr [esi + 4]
// 00406ea0  8b0d1c97a300         mov ecx, dword ptr [0xa3971c]
// 00406ea6  895dec               mov dword ptr [ebp - 0x14], ebx
// 00406ea9  3b08                 cmp ecx, dword ptr [eax]
// 00406eab  0f8515010000         jne 0x406fc6
// 00406eb1  8b152097a300         mov edx, dword ptr [0xa39720]
// 00406eb7  3b5004               cmp edx, dword ptr [eax + 4]
// 00406eba  0f8506010000         jne 0x406fc6
// 00406ec0  8b0d2497a300         mov ecx, dword ptr [0xa39724]
// 00406ec6  3b4808               cmp ecx, dword ptr [eax + 8]
// 00406ec9  0f85f7000000         jne 0x406fc6
// 00406ecf  8b152897a300         mov edx, dword ptr [0xa39728]
// 00406ed5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00406ed8  0f85e8000000         jne 0x406fc6
// 00406ede  b9ffff0000           mov ecx, 0xffff
// 00406ee3  66394e08             cmp word ptr [esi + 8], cx
// 00406ee7  0f85d9000000         jne 0x406fc6
// 00406eed  8bd1                 mov edx, ecx
// 00406eef  6639560a             cmp word ptr [esi + 0xa], dx
// 00406ef3  0f85cd000000         jne 0x406fc6
// 00406ef9  8b0dcc2ba500         mov ecx, dword ptr [0xa52bcc]
// 00406eff  6804010000           push 0x104
// 00406f04  8d85dcfeffff         lea eax, [ebp - 0x124]
// 00406f0a  50                   push eax
// 00406f0b  51                   push ecx
// 00406f0c  ff15b0e18900         call dword ptr [0x89e1b0]
// 00406f12  3bc3                 cmp eax, ebx
// 00406f14  0f848b010000         je 0x4070a5
// 00406f1a  3d04010000           cmp eax, 0x104
// 00406f1f  0f8480010000         je 0x4070a5
// 00406f25  895d08               mov dword ptr [ebp + 8], ebx
// 00406f28  8d95dcfeffff         lea edx, [ebp - 0x124]
// 00406f2e  52                   push edx
// 00406f2f  c645fc01             mov byte ptr [ebp - 4], 1
// 00406f33  ff15e0e18900         call dword ptr [0x89e1e0]
// 00406f39  40                   inc eax
// 00406f3a  6a02                 push 2
// 00406f3c  50                   push eax
// 00406f3d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00406f40  8d45f0               lea eax, [ebp - 0x10]
// 00406f43  50                   push eax
// 00406f44  e867beffff           call 0x402db0
// 00406f49  83c40c               add esp, 0xc
// 00406f4c  85c0                 test eax, eax
// 00406f4e  7c42                 jl 0x406f92
// 00406f50  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00406f53  81ff00040000         cmp edi, 0x400
// 00406f59  7f18                 jg 0x406f73
// 00406f5b  57                   push edi
// 00406f5c  e8cfceffff           call 0x403e30
// 00406f61  83c404               add esp, 4
// 00406f64  84c0                 test al, al
// 00406f66  740b                 je 0x406f73
// 00406f68  8bc7                 mov eax, edi
// 00406f6a  e8a12c3100           call 0x719c10
// 00406f6f  8bc4                 mov eax, esp
// 00406f71  eb09                 jmp 0x406f7c
// 00406f73  57                   push edi
// 00406f74  8d4d08               lea ecx, [ebp + 8]
// 00406f77  e854d4ffff           call 0x4043d0
// 00406f7c  6a03                 push 3
// 00406f7e  d1ef                 shr edi, 1
// 00406f80  57                   push edi
// 00406f81  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00406f87  51                   push ecx
// 00406f88  50                   push eax
// 00406f89  e872beffff           call 0x402e00
// 00406f8e  3bc3                 cmp eax, ebx
// 00406f90  751a                 jne 0x406fac
// 00406f92  8d4d08               lea ecx, [ebp + 8]
// 00406f95  e816ccffff           call 0x403bb0
// 00406f9a  8d4de0               lea ecx, [ebp - 0x20]
// 00406f9d  e85e2c0600           call 0x469c00
// 00406fa2  b80e000780           mov eax, 0x8007000e
// 00406fa7  e91b010000           jmp 0x4070c7
// 00406fac  8d55ec               lea edx, [ebp - 0x14]
// 00406faf  52                   push edx
// 00406fb0  50                   push eax
// 00406fb1  ff1534ea8900         call dword ptr [0x89ea34]
// 00406fb7  8d4d08               lea ecx, [ebp + 8]
// 00406fba  8bf8                 mov edi, eax
// 00406fbc  885dfc               mov byte ptr [ebp - 4], bl
// 00406fbf  e8eccbffff           call 0x403bb0
// 00406fc4  eb1b                 jmp 0x406fe1
// 00406fc6  8b5508               mov edx, dword ptr [ebp + 8]
// 00406fc9  8d4dec               lea ecx, [ebp - 0x14]
// 00406fcc  51                   push ecx
// 00406fcd  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00406fd1  52                   push edx
// 00406fd2  0fb75608             movzx edx, word ptr [esi + 8]
// 00406fd6  51                   push ecx
// 00406fd7  52                   push edx
// 00406fd8  50                   push eax
// 00406fd9  ff1538ea8900         call dword ptr [0x89ea38]
// 00406fdf  8bf8                 mov edi, eax
// 00406fe1  3bfb                 cmp edi, ebx
// 00406fe3  0f8cbc000000         jl 0x4070a5
// 00406fe9  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406fec  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406fef  8b08                 mov ecx, dword ptr [eax]
// 00406ff1  8d55e8               lea edx, [ebp - 0x18]
// 00406ff4  52                   push edx
// 00406ff5  8b16                 mov edx, dword ptr [esi]
// 00406ff7  52                   push edx
// 00406ff8  50                   push eax
// 00406ff9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00406ffc  c645fc02             mov byte ptr [ebp - 4], 2
// 00407000  ffd0                 call eax
// 00407002  8bf8                 mov edi, eax
// 00407004  3bfb                 cmp edi, ebx
// 00407006  7c7c                 jl 0x407084
// 00407008  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040700b  894508               mov dword ptr [ebp + 8], eax
// 0040700e  3bc3                 cmp eax, ebx
// 00407010  740b                 je 0x40701d
// 00407012  8b08                 mov ecx, dword ptr [eax]
// 00407014  8b5104               mov edx, dword ptr [ecx + 4]
// 00407017  50                   push eax
// 00407018  ffd2                 call edx
// 0040701a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040701d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00407020  8b08                 mov ecx, dword ptr [eax]
// 00407022  8d55f0               lea edx, [ebp - 0x10]
// 00407025  52                   push edx
// 00407026  684cd08a00           push 0x8ad04c
// 0040702b  50                   push eax
// 0040702c  8b01                 mov eax, dword ptr [ecx]
// 0040702e  c645fc04             mov byte ptr [ebp - 4], 4
// 00407032  ffd0                 call eax
// 00407034  85c0                 test eax, eax
// 00407036  7c0c                 jl 0x407044
// 00407038  8d4df0               lea ecx, [ebp - 0x10]
// 0040703b  51                   push ecx
// 0040703c  8d4d08               lea ecx, [ebp + 8]
// 0040703f  e87cfdffff           call 0x406dc0
// 00407044  8b4508               mov eax, dword ptr [ebp + 8]
// 00407047  56                   push esi
// 00407048  89460c               mov dword ptr [esi + 0xc], eax
// 0040704b  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 00407051  68206b4000           push 0x406b20
// 00407056  895d08               mov dword ptr [ebp + 8], ebx
// 00407059  e8b2fdffff           call 0x406e10
// 0040705e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00407061  c645fc03             mov byte ptr [ebp - 4], 3
// 00407065  3bc3                 cmp eax, ebx
// 00407067  7408                 je 0x407071
// 00407069  8b10                 mov edx, dword ptr [eax]
// 0040706b  50                   push eax
// 0040706c  8b4208               mov eax, dword ptr [edx + 8]
// 0040706f  ffd0                 call eax
// 00407071  8b4508               mov eax, dword ptr [ebp + 8]
// 00407074  c645fc02             mov byte ptr [ebp - 4], 2
// 00407078  3bc3                 cmp eax, ebx
// 0040707a  7408                 je 0x407084
// 0040707c  8b08                 mov ecx, dword ptr [eax]
// 0040707e  8b5108               mov edx, dword ptr [ecx + 8]
// 00407081  50                   push eax
// 00407082  ffd2                 call edx
// 00407084  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00407087  8b08                 mov ecx, dword ptr [eax]
// 00407089  8b5108               mov edx, dword ptr [ecx + 8]
// 0040708c  50                   push eax
// 0040708d  ffd2                 call edx
// 0040708f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407092  885dfc               mov byte ptr [ebp - 4], bl
// 00407095  3bc3                 cmp eax, ebx
// 00407097  740c                 je 0x4070a5
// 00407099  8b08                 mov ecx, dword ptr [eax]
// 0040709b  8b5108               mov edx, dword ptr [ecx + 8]
// 0040709e  50                   push eax
// 0040709f  ffd2                 call edx
// 004070a1  eb02                 jmp 0x4070a5
// 004070a3  33ff                 xor edi, edi
// 004070a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004070a8  3bc3                 cmp eax, ebx
// 004070aa  740f                 je 0x4070bb
// 004070ac  395e14               cmp dword ptr [esi + 0x14], ebx
// 004070af  750a                 jne 0x4070bb
// 004070b1  50                   push eax
// 004070b2  8bce                 mov ecx, esi
// 004070b4  e897f8ffff           call 0x406950
// 004070b9  8bf8                 mov edi, eax
// 004070bb  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 004070be  50                   push eax
// 004070bf  ff15ace18900         call dword ptr [0x89e1ac]
// 004070c5  8bc7                 mov eax, edi
// 004070c7  8da5d0feffff         lea esp, [ebp - 0x130]
// 004070cd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004070d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004070d7  5f                   pop edi
// 004070d8  5e                   pop esi
// 004070d9  5b                   pop ebx
// 004070da  8be5                 mov esp, ebp
// 004070dc  5d                   pop ebp
// 004070dd  c20400               ret 4
// copied from an identical function in another client (function ?GetTI@CComTypeInfoHolder@ATL@@QAEJK@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp