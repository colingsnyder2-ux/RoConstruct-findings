// roc 2009-12 00406b30  unit: VCApp::?$CComObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406b30
//
// 00406b30  55                   push ebp
// 00406b31  8bec                 mov ebp, esp
// 00406b33  64a100000000         mov eax, dword ptr fs:[0]
// 00406b39  6aff                 push -1
// 00406b3b  6868729200           push 0x927268
// 00406b40  50                   push eax
// 00406b41  64892500000000       mov dword ptr fs:[0], esp
// 00406b48  81ec18010000         sub esp, 0x118
// 00406b4e  53                   push ebx
// 00406b4f  56                   push esi
// 00406b50  8bf1                 mov esi, ecx
// 00406b52  33db                 xor ebx, ebx
// 00406b54  57                   push edi
// 00406b55  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406b58  740c                 je 0x406b66
// 00406b5a  395e14               cmp dword ptr [esi + 0x14], ebx
// 00406b5d  7407                 je 0x406b66
// 00406b5f  33c0                 xor eax, eax
// 00406b61  e951020000           jmp 0x406db7
// 00406b66  a10095b700           mov eax, dword ptr [0xb79500]
// 00406b6b  83c010               add eax, 0x10
// 00406b6e  8945e0               mov dword ptr [ebp - 0x20], eax
// 00406b71  50                   push eax
// 00406b72  895dfc               mov dword ptr [ebp - 4], ebx
// 00406b75  ff1504b29800         call dword ptr [0x98b204]
// 00406b7b  c645e401             mov byte ptr [ebp - 0x1c], 1
// 00406b7f  bf05400080           mov edi, 0x80004005
// 00406b84  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00406b87  0f8506020000         jne 0x406d93
// 00406b8d  8b4604               mov eax, dword ptr [esi + 4]
// 00406b90  8b0d0495b700         mov ecx, dword ptr [0xb79504]
// 00406b96  895dec               mov dword ptr [ebp - 0x14], ebx
// 00406b99  3b08                 cmp ecx, dword ptr [eax]
// 00406b9b  0f8515010000         jne 0x406cb6
// 00406ba1  8b150895b700         mov edx, dword ptr [0xb79508]
// 00406ba7  3b5004               cmp edx, dword ptr [eax + 4]
// 00406baa  0f8506010000         jne 0x406cb6
// 00406bb0  8b0d0c95b700         mov ecx, dword ptr [0xb7950c]
// 00406bb6  3b4808               cmp ecx, dword ptr [eax + 8]
// 00406bb9  0f85f7000000         jne 0x406cb6
// 00406bbf  8b151095b700         mov edx, dword ptr [0xb79510]
// 00406bc5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00406bc8  0f85e8000000         jne 0x406cb6
// 00406bce  b9ffff0000           mov ecx, 0xffff
// 00406bd3  66394e08             cmp word ptr [esi + 8], cx
// 00406bd7  0f85d9000000         jne 0x406cb6
// 00406bdd  8bd1                 mov edx, ecx
// 00406bdf  6639560a             cmp word ptr [esi + 0xa], dx
// 00406be3  0f85cd000000         jne 0x406cb6
// 00406be9  8b0d24c0b900         mov ecx, dword ptr [0xb9c024]
// 00406bef  6804010000           push 0x104
// 00406bf4  8d85dcfeffff         lea eax, [ebp - 0x124]
// 00406bfa  50                   push eax
// 00406bfb  51                   push ecx
// 00406bfc  ff15fcb19800         call dword ptr [0x98b1fc]
// 00406c02  3bc3                 cmp eax, ebx
// 00406c04  0f848b010000         je 0x406d95
// 00406c0a  3d04010000           cmp eax, 0x104
// 00406c0f  0f8480010000         je 0x406d95
// 00406c15  895d08               mov dword ptr [ebp + 8], ebx
// 00406c18  8d95dcfeffff         lea edx, [ebp - 0x124]
// 00406c1e  52                   push edx
// 00406c1f  c645fc01             mov byte ptr [ebp - 4], 1
// 00406c23  ff1518b29800         call dword ptr [0x98b218]
// 00406c29  40                   inc eax
// 00406c2a  6a02                 push 2
// 00406c2c  50                   push eax
// 00406c2d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00406c30  8d45f0               lea eax, [ebp - 0x10]
// 00406c33  50                   push eax
// 00406c34  e847beffff           call 0x402a80
// 00406c39  83c40c               add esp, 0xc
// 00406c3c  85c0                 test eax, eax
// 00406c3e  7c42                 jl 0x406c82
// 00406c40  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00406c43  81ff00040000         cmp edi, 0x400
// 00406c49  7f18                 jg 0x406c63
// 00406c4b  57                   push edi
// 00406c4c  e89fceffff           call 0x403af0
// 00406c51  83c404               add esp, 4
// 00406c54  84c0                 test al, al
// 00406c56  740b                 je 0x406c63
// 00406c58  8bc7                 mov eax, edi
// 00406c5a  e8e1dd3e00           call 0x7f4a40
// 00406c5f  8bc4                 mov eax, esp
// 00406c61  eb09                 jmp 0x406c6c
// 00406c63  57                   push edi
// 00406c64  8d4d08               lea ecx, [ebp + 8]
// 00406c67  e824d4ffff           call 0x404090
// 00406c6c  6a03                 push 3
// 00406c6e  d1ef                 shr edi, 1
// 00406c70  57                   push edi
// 00406c71  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00406c77  51                   push ecx
// 00406c78  50                   push eax
// 00406c79  e852beffff           call 0x402ad0
// 00406c7e  3bc3                 cmp eax, ebx
// 00406c80  751a                 jne 0x406c9c
// 00406c82  8d4d08               lea ecx, [ebp + 8]
// 00406c85  e8f6cbffff           call 0x403880
// 00406c8a  8d4de0               lea ecx, [ebp - 0x20]
// 00406c8d  e8defbffff           call 0x406870
// 00406c92  b80e000780           mov eax, 0x8007000e
// 00406c97  e91b010000           jmp 0x406db7
// 00406c9c  8d55ec               lea edx, [ebp - 0x14]
// 00406c9f  52                   push edx
// 00406ca0  50                   push eax
// 00406ca1  ff1528ba9800         call dword ptr [0x98ba28]
// 00406ca7  8d4d08               lea ecx, [ebp + 8]
// 00406caa  8bf8                 mov edi, eax
// 00406cac  885dfc               mov byte ptr [ebp - 4], bl
// 00406caf  e8cccbffff           call 0x403880
// 00406cb4  eb1b                 jmp 0x406cd1
// 00406cb6  8b5508               mov edx, dword ptr [ebp + 8]
// 00406cb9  8d4dec               lea ecx, [ebp - 0x14]
// 00406cbc  51                   push ecx
// 00406cbd  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00406cc1  52                   push edx
// 00406cc2  0fb75608             movzx edx, word ptr [esi + 8]
// 00406cc6  51                   push ecx
// 00406cc7  52                   push edx
// 00406cc8  50                   push eax
// 00406cc9  ff1524ba9800         call dword ptr [0x98ba24]
// 00406ccf  8bf8                 mov edi, eax
// 00406cd1  3bfb                 cmp edi, ebx
// 00406cd3  0f8cbc000000         jl 0x406d95
// 00406cd9  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406cdc  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406cdf  8b08                 mov ecx, dword ptr [eax]
// 00406ce1  8d55e8               lea edx, [ebp - 0x18]
// 00406ce4  52                   push edx
// 00406ce5  8b16                 mov edx, dword ptr [esi]
// 00406ce7  52                   push edx
// 00406ce8  50                   push eax
// 00406ce9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00406cec  c645fc02             mov byte ptr [ebp - 4], 2
// 00406cf0  ffd0                 call eax
// 00406cf2  8bf8                 mov edi, eax
// 00406cf4  3bfb                 cmp edi, ebx
// 00406cf6  7c7c                 jl 0x406d74
// 00406cf8  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406cfb  894508               mov dword ptr [ebp + 8], eax
// 00406cfe  3bc3                 cmp eax, ebx
// 00406d00  740b                 je 0x406d0d
// 00406d02  8b08                 mov ecx, dword ptr [eax]
// 00406d04  8b5104               mov edx, dword ptr [ecx + 4]
// 00406d07  50                   push eax
// 00406d08  ffd2                 call edx
// 00406d0a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406d0d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00406d10  8b08                 mov ecx, dword ptr [eax]
// 00406d12  8d55f0               lea edx, [ebp - 0x10]
// 00406d15  52                   push edx
// 00406d16  688cfb9900           push 0x99fb8c
// 00406d1b  50                   push eax
// 00406d1c  8b01                 mov eax, dword ptr [ecx]
// 00406d1e  c645fc04             mov byte ptr [ebp - 4], 4
// 00406d22  ffd0                 call eax
// 00406d24  85c0                 test eax, eax
// 00406d26  7c0c                 jl 0x406d34
// 00406d28  8d4df0               lea ecx, [ebp - 0x10]
// 00406d2b  51                   push ecx
// 00406d2c  8d4d08               lea ecx, [ebp + 8]
// 00406d2f  e87cfdffff           call 0x406ab0
// 00406d34  8b4508               mov eax, dword ptr [ebp + 8]
// 00406d37  56                   push esi
// 00406d38  89460c               mov dword ptr [esi + 0xc], eax
// 00406d3b  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 00406d41  6800684000           push 0x406800
// 00406d46  895d08               mov dword ptr [ebp + 8], ebx
// 00406d49  e8b2fdffff           call 0x406b00
// 00406d4e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00406d51  c645fc03             mov byte ptr [ebp - 4], 3
// 00406d55  3bc3                 cmp eax, ebx
// 00406d57  7408                 je 0x406d61
// 00406d59  8b10                 mov edx, dword ptr [eax]
// 00406d5b  50                   push eax
// 00406d5c  8b4208               mov eax, dword ptr [edx + 8]
// 00406d5f  ffd0                 call eax
// 00406d61  8b4508               mov eax, dword ptr [ebp + 8]
// 00406d64  c645fc02             mov byte ptr [ebp - 4], 2
// 00406d68  3bc3                 cmp eax, ebx
// 00406d6a  7408                 je 0x406d74
// 00406d6c  8b08                 mov ecx, dword ptr [eax]
// 00406d6e  8b5108               mov edx, dword ptr [ecx + 8]
// 00406d71  50                   push eax
// 00406d72  ffd2                 call edx
// 00406d74  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406d77  8b08                 mov ecx, dword ptr [eax]
// 00406d79  8b5108               mov edx, dword ptr [ecx + 8]
// 00406d7c  50                   push eax
// 00406d7d  ffd2                 call edx
// 00406d7f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406d82  885dfc               mov byte ptr [ebp - 4], bl
// 00406d85  3bc3                 cmp eax, ebx
// 00406d87  740c                 je 0x406d95
// 00406d89  8b08                 mov ecx, dword ptr [eax]
// 00406d8b  8b5108               mov edx, dword ptr [ecx + 8]
// 00406d8e  50                   push eax
// 00406d8f  ffd2                 call edx
// 00406d91  eb02                 jmp 0x406d95
// 00406d93  33ff                 xor edi, edi
// 00406d95  8b460c               mov eax, dword ptr [esi + 0xc]
// 00406d98  3bc3                 cmp eax, ebx
// 00406d9a  740f                 je 0x406dab
// 00406d9c  395e14               cmp dword ptr [esi + 0x14], ebx
// 00406d9f  750a                 jne 0x406dab
// 00406da1  50                   push eax
// 00406da2  8bce                 mov ecx, esi
// 00406da4  e887f8ffff           call 0x406630
// 00406da9  8bf8                 mov edi, eax
// 00406dab  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00406dae  50                   push eax
// 00406daf  ff1500b29800         call dword ptr [0x98b200]
// 00406db5  8bc7                 mov eax, edi
// 00406db7  8da5d0feffff         lea esp, [ebp - 0x130]
// 00406dbd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406dc0  64890d00000000       mov dword ptr fs:[0], ecx
// 00406dc7  5f                   pop edi
// 00406dc8  5e                   pop esi
// 00406dc9  5b                   pop ebx
// 00406dca  8be5                 mov esp, ebp
// 00406dcc  5d                   pop ebp
// 00406dcd  c20400               ret 4
// copied from an identical function in another client (function ?GetTI@CComTypeInfoHolder@ATL@@QAEJK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp