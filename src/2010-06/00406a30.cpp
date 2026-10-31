// roc 2010-06 00406a30  unit: VCApp::?$CComObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406a30
//
// 00406a30  55                   push ebp
// 00406a31  8bec                 mov ebp, esp
// 00406a33  64a100000000         mov eax, dword ptr fs:[0]
// 00406a39  6aff                 push -1
// 00406a3b  68b8db9700           push 0x97dbb8
// 00406a40  50                   push eax
// 00406a41  64892500000000       mov dword ptr fs:[0], esp
// 00406a48  81ec18010000         sub esp, 0x118
// 00406a4e  53                   push ebx
// 00406a4f  56                   push esi
// 00406a50  8bf1                 mov esi, ecx
// 00406a52  33db                 xor ebx, ebx
// 00406a54  57                   push edi
// 00406a55  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406a58  740c                 je 0x406a66
// 00406a5a  395e14               cmp dword ptr [esi + 0x14], ebx
// 00406a5d  7407                 je 0x406a66
// 00406a5f  33c0                 xor eax, eax
// 00406a61  e951020000           jmp 0x406cb7
// 00406a66  a1b0fabf00           mov eax, dword ptr [0xbffab0]
// 00406a6b  83c010               add eax, 0x10
// 00406a6e  8945e0               mov dword ptr [ebp - 0x20], eax
// 00406a71  50                   push eax
// 00406a72  895dfc               mov dword ptr [ebp - 4], ebx
// 00406a75  ff1574a39e00         call dword ptr [0x9ea374]
// 00406a7b  c645e401             mov byte ptr [ebp - 0x1c], 1
// 00406a7f  bf05400080           mov edi, 0x80004005
// 00406a84  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406a87  0f8506020000         jne 0x406c93
// 00406a8d  8b4604               mov eax, dword ptr [esi + 4]
// 00406a90  8b0db4fabf00         mov ecx, dword ptr [0xbffab4]
// 00406a96  895dec               mov dword ptr [ebp - 0x14], ebx
// 00406a99  3b08                 cmp ecx, dword ptr [eax]
// 00406a9b  0f8515010000         jne 0x406bb6
// 00406aa1  8b15b8fabf00         mov edx, dword ptr [0xbffab8]
// 00406aa7  3b5004               cmp edx, dword ptr [eax + 4]
// 00406aaa  0f8506010000         jne 0x406bb6
// 00406ab0  8b0dbcfabf00         mov ecx, dword ptr [0xbffabc]
// 00406ab6  3b4808               cmp ecx, dword ptr [eax + 8]
// 00406ab9  0f85f7000000         jne 0x406bb6
// 00406abf  8b15c0fabf00         mov edx, dword ptr [0xbffac0]
// 00406ac5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00406ac8  0f85e8000000         jne 0x406bb6
// 00406ace  b9ffff0000           mov ecx, 0xffff
// 00406ad3  66394e08             cmp word ptr [esi + 8], cx
// 00406ad7  0f85d9000000         jne 0x406bb6
// 00406add  8bd1                 mov edx, ecx
// 00406adf  6639560a             cmp word ptr [esi + 0xa], dx
// 00406ae3  0f85cd000000         jne 0x406bb6
// 00406ae9  8b0d5467c200         mov ecx, dword ptr [0xc26754]
// 00406aef  6804010000           push 0x104
// 00406af4  8d85dcfeffff         lea eax, [ebp - 0x124]
// 00406afa  50                   push eax
// 00406afb  51                   push ecx
// 00406afc  ff156ca39e00         call dword ptr [0x9ea36c]
// 00406b02  3bc3                 cmp eax, ebx
// 00406b04  0f848b010000         je 0x406c95
// 00406b0a  3d04010000           cmp eax, 0x104
// 00406b0f  0f8480010000         je 0x406c95
// 00406b15  895d08               mov dword ptr [ebp + 8], ebx
// 00406b18  8d95dcfeffff         lea edx, [ebp - 0x124]
// 00406b1e  52                   push edx
// 00406b1f  c645fc01             mov byte ptr [ebp - 4], 1
// 00406b23  ff1588a39e00         call dword ptr [0x9ea388]
// 00406b29  40                   inc eax
// 00406b2a  6a02                 push 2
// 00406b2c  50                   push eax
// 00406b2d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00406b30  8d45f0               lea eax, [ebp - 0x10]
// 00406b33  50                   push eax
// 00406b34  e897bfffff           call 0x402ad0
// 00406b39  83c40c               add esp, 0xc
// 00406b3c  85c0                 test eax, eax
// 00406b3e  7c42                 jl 0x406b82
// 00406b40  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00406b43  81ff00040000         cmp edi, 0x400
// 00406b49  7f18                 jg 0x406b63
// 00406b4b  57                   push edi
// 00406b4c  e8ffcfffff           call 0x403b50
// 00406b51  83c404               add esp, 4
// 00406b54  84c0                 test al, al
// 00406b56  740b                 je 0x406b63
// 00406b58  8bc7                 mov eax, edi
// 00406b5a  e821203a00           call 0x7a8b80
// 00406b5f  8bc4                 mov eax, esp
// 00406b61  eb09                 jmp 0x406b6c
// 00406b63  57                   push edi
// 00406b64  8d4d08               lea ecx, [ebp + 8]
// 00406b67  e884d5ffff           call 0x4040f0
// 00406b6c  6a03                 push 3
// 00406b6e  d1ef                 shr edi, 1
// 00406b70  57                   push edi
// 00406b71  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00406b77  51                   push ecx
// 00406b78  50                   push eax
// 00406b79  e8a2bfffff           call 0x402b20
// 00406b7e  3bc3                 cmp eax, ebx
// 00406b80  751a                 jne 0x406b9c
// 00406b82  8d4d08               lea ecx, [ebp + 8]
// 00406b85  e846cdffff           call 0x4038d0
// 00406b8a  8d4de0               lea ecx, [ebp - 0x20]
// 00406b8d  e80efcffff           call 0x4067a0
// 00406b92  b80e000780           mov eax, 0x8007000e
// 00406b97  e91b010000           jmp 0x406cb7
// 00406b9c  8d55ec               lea edx, [ebp - 0x14]
// 00406b9f  52                   push edx
// 00406ba0  50                   push eax
// 00406ba1  ff1510aa9e00         call dword ptr [0x9eaa10]
// 00406ba7  8d4d08               lea ecx, [ebp + 8]
// 00406baa  8bf8                 mov edi, eax
// 00406bac  885dfc               mov byte ptr [ebp - 4], bl
// 00406baf  e81ccdffff           call 0x4038d0
// 00406bb4  eb1b                 jmp 0x406bd1
// 00406bb6  8b5508               mov edx, dword ptr [ebp + 8]
// 00406bb9  8d4dec               lea ecx, [ebp - 0x14]
// 00406bbc  51                   push ecx
// 00406bbd  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00406bc1  52                   push edx
// 00406bc2  0fb75608             movzx edx, word ptr [esi + 8]
// 00406bc6  51                   push ecx
// 00406bc7  52                   push edx
// 00406bc8  50                   push eax
// 00406bc9  ff1558aa9e00         call dword ptr [0x9eaa58]
// 00406bcf  8bf8                 mov edi, eax
// 00406bd1  3bfb                 cmp edi, ebx
// 00406bd3  0f8cbc000000         jl 0x406c95
// 00406bd9  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406bdc  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406bdf  8b08                 mov ecx, dword ptr [eax]
// 00406be1  8d55e8               lea edx, [ebp - 0x18]
// 00406be4  52                   push edx
// 00406be5  8b16                 mov edx, dword ptr [esi]
// 00406be7  52                   push edx
// 00406be8  50                   push eax
// 00406be9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00406bec  c645fc02             mov byte ptr [ebp - 4], 2
// 00406bf0  ffd0                 call eax
// 00406bf2  8bf8                 mov edi, eax
// 00406bf4  3bfb                 cmp edi, ebx
// 00406bf6  7c7c                 jl 0x406c74
// 00406bf8  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406bfb  894508               mov dword ptr [ebp + 8], eax
// 00406bfe  3bc3                 cmp eax, ebx
// 00406c00  740b                 je 0x406c0d
// 00406c02  8b08                 mov ecx, dword ptr [eax]
// 00406c04  8b5104               mov edx, dword ptr [ecx + 4]
// 00406c07  50                   push eax
// 00406c08  ffd2                 call edx
// 00406c0a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406c0d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00406c10  8b08                 mov ecx, dword ptr [eax]
// 00406c12  8d55f0               lea edx, [ebp - 0x10]
// 00406c15  52                   push edx
// 00406c16  683007a000           push 0xa00730
// 00406c1b  50                   push eax
// 00406c1c  8b01                 mov eax, dword ptr [ecx]
// 00406c1e  c645fc04             mov byte ptr [ebp - 4], 4
// 00406c22  ffd0                 call eax
// 00406c24  85c0                 test eax, eax
// 00406c26  7c0c                 jl 0x406c34
// 00406c28  8d4df0               lea ecx, [ebp - 0x10]
// 00406c2b  51                   push ecx
// 00406c2c  8d4d08               lea ecx, [ebp + 8]
// 00406c2f  e87cfdffff           call 0x4069b0
// 00406c34  8b4508               mov eax, dword ptr [ebp + 8]
// 00406c37  56                   push esi
// 00406c38  89460c               mov dword ptr [esi + 0xc], eax
// 00406c3b  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 00406c41  68c0664000           push 0x4066c0
// 00406c46  895d08               mov dword ptr [ebp + 8], ebx
// 00406c49  e8b2fdffff           call 0x406a00
// 00406c4e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00406c51  c645fc03             mov byte ptr [ebp - 4], 3
// 00406c55  3bc3                 cmp eax, ebx
// 00406c57  7408                 je 0x406c61
// 00406c59  8b10                 mov edx, dword ptr [eax]
// 00406c5b  50                   push eax
// 00406c5c  8b4208               mov eax, dword ptr [edx + 8]
// 00406c5f  ffd0                 call eax
// 00406c61  8b4508               mov eax, dword ptr [ebp + 8]
// 00406c64  c645fc02             mov byte ptr [ebp - 4], 2
// 00406c68  3bc3                 cmp eax, ebx
// 00406c6a  7408                 je 0x406c74
// 00406c6c  8b08                 mov ecx, dword ptr [eax]
// 00406c6e  8b5108               mov edx, dword ptr [ecx + 8]
// 00406c71  50                   push eax
// 00406c72  ffd2                 call edx
// 00406c74  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406c77  8b08                 mov ecx, dword ptr [eax]
// 00406c79  8b5108               mov edx, dword ptr [ecx + 8]
// 00406c7c  50                   push eax
// 00406c7d  ffd2                 call edx
// 00406c7f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406c82  885dfc               mov byte ptr [ebp - 4], bl
// 00406c85  3bc3                 cmp eax, ebx
// 00406c87  740c                 je 0x406c95
// 00406c89  8b08                 mov ecx, dword ptr [eax]
// 00406c8b  8b5108               mov edx, dword ptr [ecx + 8]
// 00406c8e  50                   push eax
// 00406c8f  ffd2                 call edx
// 00406c91  eb02                 jmp 0x406c95
// 00406c93  33ff                 xor edi, edi
// 00406c95  8b460c               mov eax, dword ptr [esi + 0xc]
// 00406c98  3bc3                 cmp eax, ebx
// 00406c9a  740f                 je 0x406cab
// 00406c9c  395e14               cmp dword ptr [esi + 0x14], ebx
// 00406c9f  750a                 jne 0x406cab
// 00406ca1  50                   push eax
// 00406ca2  8bce                 mov ecx, esi
// 00406ca4  e847f8ffff           call 0x4064f0
// 00406ca9  8bf8                 mov edi, eax
// 00406cab  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00406cae  50                   push eax
// 00406caf  ff1570a39e00         call dword ptr [0x9ea370]
// 00406cb5  8bc7                 mov eax, edi
// 00406cb7  8da5d0feffff         lea esp, [ebp - 0x130]
// 00406cbd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406cc0  64890d00000000       mov dword ptr fs:[0], ecx
// 00406cc7  5f                   pop edi
// 00406cc8  5e                   pop esi
// 00406cc9  5b                   pop ebx
// 00406cca  8be5                 mov esp, ebp
// 00406ccc  5d                   pop ebp
// 00406ccd  c20400               ret 4
// copied from an identical function in another client (function ?GetTI@CComTypeInfoHolder@ATL@@QAEJK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp