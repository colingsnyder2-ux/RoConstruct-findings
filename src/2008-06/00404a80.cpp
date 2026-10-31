// from server: 100% by king_originala
// roc 2008-06 00404a80  unit: ATL::CRegObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404a80
//
// 00404a80  55                   push ebp
// 00404a81  8bec                 mov ebp, esp
// 00404a83  64a100000000         mov eax, dword ptr fs:[0]
// 00404a89  6aff                 push -1
// 00404a8b  6828cd7b00           push 0x7bcd28
// 00404a90  50                   push eax
// 00404a91  64892500000000       mov dword ptr fs:[0], esp
// 00404a98  81ec18010000         sub esp, 0x118
// 00404a9e  53                   push ebx
// 00404a9f  56                   push esi
// 00404aa0  8bf1                 mov esi, ecx
// 00404aa2  33db                 xor ebx, ebx
// 00404aa4  57                   push edi
// 00404aa5  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00404aa8  740c                 je 0x404ab6
// 00404aaa  395e14               cmp dword ptr [esi + 0x14], ebx
// 00404aad  7407                 je 0x404ab6
// 00404aaf  33c0                 xor eax, eax
// 00404ab1  e951020000           jmp 0x404d07
// 00404ab6  a168c29600           mov eax, dword ptr [0x96c268]
// 00404abb  83c010               add eax, 0x10
// 00404abe  8945e0               mov dword ptr [ebp - 0x20], eax
// 00404ac1  50                   push eax
// 00404ac2  895dfc               mov dword ptr [ebp - 4], ebx
// 00404ac5  ff15d4228000         call dword ptr [0x8022d4]
// 00404acb  c645e401             mov byte ptr [ebp - 0x1c], 1
// 00404acf  bf05400080           mov edi, 0x80004005
// 00404ad4  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00404ad7  0f8506020000         jne 0x404ce3
// 00404add  8b4604               mov eax, dword ptr [esi + 4]
// 00404ae0  8b0d6cc29600         mov ecx, dword ptr [0x96c26c]
// 00404ae6  895dec               mov dword ptr [ebp - 0x14], ebx
// 00404ae9  3b08                 cmp ecx, dword ptr [eax]
// 00404aeb  0f8515010000         jne 0x404c06
// 00404af1  8b1570c29600         mov edx, dword ptr [0x96c270]
// 00404af7  3b5004               cmp edx, dword ptr [eax + 4]
// 00404afa  0f8506010000         jne 0x404c06
// 00404b00  8b0d74c29600         mov ecx, dword ptr [0x96c274]
// 00404b06  3b4808               cmp ecx, dword ptr [eax + 8]
// 00404b09  0f85f7000000         jne 0x404c06
// 00404b0f  8b1578c29600         mov edx, dword ptr [0x96c278]
// 00404b15  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00404b18  0f85e8000000         jne 0x404c06
// 00404b1e  b9ffff0000           mov ecx, 0xffff
// 00404b23  66394e08             cmp word ptr [esi + 8], cx
// 00404b27  0f85d9000000         jne 0x404c06
// 00404b2d  8bd1                 mov edx, ecx
// 00404b2f  6639560a             cmp word ptr [esi + 0xa], dx
// 00404b33  0f85cd000000         jne 0x404c06
// 00404b39  8b0dacf29700         mov ecx, dword ptr [0x97f2ac]
// 00404b3f  6804010000           push 0x104
// 00404b44  8d85dcfeffff         lea eax, [ebp - 0x124]
// 00404b4a  50                   push eax
// 00404b4b  51                   push ecx
// 00404b4c  ff15a4218000         call dword ptr [0x8021a4]
// 00404b52  3bc3                 cmp eax, ebx
// 00404b54  0f848b010000         je 0x404ce5
// 00404b5a  3d04010000           cmp eax, 0x104
// 00404b5f  0f8480010000         je 0x404ce5
// 00404b65  895d08               mov dword ptr [ebp + 8], ebx
// 00404b68  8d95dcfeffff         lea edx, [ebp - 0x124]
// 00404b6e  52                   push edx
// 00404b6f  c645fc01             mov byte ptr [ebp - 4], 1
// 00404b73  ff15b8218000         call dword ptr [0x8021b8]
// 00404b79  40                   inc eax
// 00404b7a  6a02                 push 2
// 00404b7c  50                   push eax
// 00404b7d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00404b80  8d45f0               lea eax, [ebp - 0x10]
// 00404b83  50                   push eax
// 00404b84  e887cbffff           call 0x401710
// 00404b89  83c40c               add esp, 0xc
// 00404b8c  85c0                 test eax, eax
// 00404b8e  7c42                 jl 0x404bd2
// 00404b90  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00404b93  81ff00040000         cmp edi, 0x400
// 00404b99  7f18                 jg 0x404bb3
// 00404b9b  57                   push edi
// 00404b9c  e86fdaffff           call 0x402610
// 00404ba1  83c404               add esp, 4
// 00404ba4  84c0                 test al, al
// 00404ba6  740b                 je 0x404bb3
// 00404ba8  8bc7                 mov eax, edi
// 00404baa  e8b1c92900           call 0x6a1560
// 00404baf  8bc4                 mov eax, esp
// 00404bb1  eb09                 jmp 0x404bbc
// 00404bb3  57                   push edi
// 00404bb4  8d4d08               lea ecx, [ebp + 8]
// 00404bb7  e894e3ffff           call 0x402f50
// 00404bbc  6a03                 push 3
// 00404bbe  d1ef                 shr edi, 1
// 00404bc0  57                   push edi
// 00404bc1  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00404bc7  51                   push ecx
// 00404bc8  50                   push eax
// 00404bc9  e892cbffff           call 0x401760
// 00404bce  3bc3                 cmp eax, ebx
// 00404bd0  751a                 jne 0x404bec
// 00404bd2  8d4d08               lea ecx, [ebp + 8]
// 00404bd5  e876c5ffff           call 0x401150
// 00404bda  8d4de0               lea ecx, [ebp - 0x20]
// 00404bdd  e8cebf0100           call 0x420bb0
// 00404be2  b80e000780           mov eax, 0x8007000e
// 00404be7  e91b010000           jmp 0x404d07
// 00404bec  8d55ec               lea edx, [ebp - 0x14]
// 00404bef  52                   push edx
// 00404bf0  50                   push eax
// 00404bf1  ff1530298000         call dword ptr [0x802930]
// 00404bf7  8d4d08               lea ecx, [ebp + 8]
// 00404bfa  8bf8                 mov edi, eax
// 00404bfc  885dfc               mov byte ptr [ebp - 4], bl
// 00404bff  e84cc5ffff           call 0x401150
// 00404c04  eb1b                 jmp 0x404c21
// 00404c06  8b5508               mov edx, dword ptr [ebp + 8]
// 00404c09  8d4dec               lea ecx, [ebp - 0x14]
// 00404c0c  51                   push ecx
// 00404c0d  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00404c11  52                   push edx
// 00404c12  0fb75608             movzx edx, word ptr [esi + 8]
// 00404c16  51                   push ecx
// 00404c17  52                   push edx
// 00404c18  50                   push eax
// 00404c19  ff1534298000         call dword ptr [0x802934]
// 00404c1f  8bf8                 mov edi, eax
// 00404c21  3bfb                 cmp edi, ebx
// 00404c23  0f8cbc000000         jl 0x404ce5
// 00404c29  895de8               mov dword ptr [ebp - 0x18], ebx
// 00404c2c  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00404c2f  8b08                 mov ecx, dword ptr [eax]
// 00404c31  8d55e8               lea edx, [ebp - 0x18]
// 00404c34  52                   push edx
// 00404c35  8b16                 mov edx, dword ptr [esi]
// 00404c37  52                   push edx
// 00404c38  50                   push eax
// 00404c39  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00404c3c  c645fc02             mov byte ptr [ebp - 4], 2
// 00404c40  ffd0                 call eax
// 00404c42  8bf8                 mov edi, eax
// 00404c44  3bfb                 cmp edi, ebx
// 00404c46  7c7c                 jl 0x404cc4
// 00404c48  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00404c4b  894508               mov dword ptr [ebp + 8], eax
// 00404c4e  3bc3                 cmp eax, ebx
// 00404c50  740b                 je 0x404c5d
// 00404c52  8b08                 mov ecx, dword ptr [eax]
// 00404c54  8b5104               mov edx, dword ptr [ecx + 4]
// 00404c57  50                   push eax
// 00404c58  ffd2                 call edx
// 00404c5a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00404c5d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00404c60  8b08                 mov ecx, dword ptr [eax]
// 00404c62  8d55f0               lea edx, [ebp - 0x10]
// 00404c65  52                   push edx
// 00404c66  6830b18000           push 0x80b130
// 00404c6b  50                   push eax
// 00404c6c  8b01                 mov eax, dword ptr [ecx]
// 00404c6e  c645fc04             mov byte ptr [ebp - 4], 4
// 00404c72  ffd0                 call eax
// 00404c74  85c0                 test eax, eax
// 00404c76  7c0c                 jl 0x404c84
// 00404c78  8d4df0               lea ecx, [ebp - 0x10]
// 00404c7b  51                   push ecx
// 00404c7c  8d4d08               lea ecx, [ebp + 8]
// 00404c7f  e86ceeffff           call 0x403af0
// 00404c84  8b4508               mov eax, dword ptr [ebp + 8]
// 00404c87  56                   push esi
// 00404c88  89460c               mov dword ptr [esi + 0xc], eax
// 00404c8b  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00404c91  68002f4000           push 0x402f00
// 00404c96  895d08               mov dword ptr [ebp + 8], ebx
// 00404c99  e802f1ffff           call 0x403da0
// 00404c9e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00404ca1  c645fc03             mov byte ptr [ebp - 4], 3
// 00404ca5  3bc3                 cmp eax, ebx
// 00404ca7  7408                 je 0x404cb1
// 00404ca9  8b10                 mov edx, dword ptr [eax]
// 00404cab  50                   push eax
// 00404cac  8b4208               mov eax, dword ptr [edx + 8]
// 00404caf  ffd0                 call eax
// 00404cb1  8b4508               mov eax, dword ptr [ebp + 8]
// 00404cb4  c645fc02             mov byte ptr [ebp - 4], 2
// 00404cb8  3bc3                 cmp eax, ebx
// 00404cba  7408                 je 0x404cc4
// 00404cbc  8b08                 mov ecx, dword ptr [eax]
// 00404cbe  8b5108               mov edx, dword ptr [ecx + 8]
// 00404cc1  50                   push eax
// 00404cc2  ffd2                 call edx
// 00404cc4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00404cc7  8b08                 mov ecx, dword ptr [eax]
// 00404cc9  8b5108               mov edx, dword ptr [ecx + 8]
// 00404ccc  50                   push eax
// 00404ccd  ffd2                 call edx
// 00404ccf  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00404cd2  885dfc               mov byte ptr [ebp - 4], bl
// 00404cd5  3bc3                 cmp eax, ebx
// 00404cd7  740c                 je 0x404ce5
// 00404cd9  8b08                 mov ecx, dword ptr [eax]
// 00404cdb  8b5108               mov edx, dword ptr [ecx + 8]
// 00404cde  50                   push eax
// 00404cdf  ffd2                 call edx
// 00404ce1  eb02                 jmp 0x404ce5
// 00404ce3  33ff                 xor edi, edi
// 00404ce5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00404ce8  3bc3                 cmp eax, ebx
// 00404cea  740f                 je 0x404cfb
// 00404cec  395e14               cmp dword ptr [esi + 0x14], ebx
// 00404cef  750a                 jne 0x404cfb
// 00404cf1  50                   push eax
// 00404cf2  8bce                 mov ecx, esi
// 00404cf4  e837e0ffff           call 0x402d30
// 00404cf9  8bf8                 mov edi, eax
// 00404cfb  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00404cfe  50                   push eax
// 00404cff  ff15f4218000         call dword ptr [0x8021f4]
// 00404d05  8bc7                 mov eax, edi
// 00404d07  8da5d0feffff         lea esp, [ebp - 0x130]
// 00404d0d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404d10  64890d00000000       mov dword ptr fs:[0], ecx
// 00404d17  5f                   pop edi
// 00404d18  5e                   pop esi
// 00404d19  5b                   pop ebx
// 00404d1a  8be5                 mov esp, ebp
// 00404d1c  5d                   pop ebp
// 00404d1d  c20400               ret 4

// from server: 100% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp
