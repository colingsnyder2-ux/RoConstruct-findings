// roc 2012-06 00407960  unit: VCApp::?$CComObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407960
//
// 00407960  55                   push ebp
// 00407961  8bec                 mov ebp, esp
// 00407963  64a100000000         mov eax, dword ptr fs:[0]
// 00407969  6aff                 push -1
// 0040796b  68e8a2a900           push 0xa9a2e8
// 00407970  50                   push eax
// 00407971  64892500000000       mov dword ptr fs:[0], esp
// 00407978  81ec18010000         sub esp, 0x118
// 0040797e  53                   push ebx
// 0040797f  56                   push esi
// 00407980  8bf1                 mov esi, ecx
// 00407982  33db                 xor ebx, ebx
// 00407984  57                   push edi
// 00407985  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00407988  740c                 je 0x407996
// 0040798a  395e14               cmp dword ptr [esi + 0x14], ebx
// 0040798d  7407                 je 0x407996
// 0040798f  33c0                 xor eax, eax
// 00407991  e951020000           jmp 0x407be7
// 00407996  a1c463e100           mov eax, dword ptr [0xe163c4]
// 0040799b  83c010               add eax, 0x10
// 0040799e  8945e0               mov dword ptr [ebp - 0x20], eax
// 004079a1  50                   push eax
// 004079a2  895dfc               mov dword ptr [ebp - 4], ebx
// 004079a5  ff15b821b200         call dword ptr [0xb221b8]
// 004079ab  c645e401             mov byte ptr [ebp - 0x1c], 1
// 004079af  bf05400080           mov edi, 0x80004005
// 004079b4  395e0c               cmp dword ptr [esi + 0xc], ebx
// 004079b7  0f8506020000         jne 0x407bc3
// 004079bd  8b4604               mov eax, dword ptr [esi + 4]
// 004079c0  8b0dc863e100         mov ecx, dword ptr [0xe163c8]
// 004079c6  895dec               mov dword ptr [ebp - 0x14], ebx
// 004079c9  3b08                 cmp ecx, dword ptr [eax]
// 004079cb  0f8515010000         jne 0x407ae6
// 004079d1  8b15cc63e100         mov edx, dword ptr [0xe163cc]
// 004079d7  3b5004               cmp edx, dword ptr [eax + 4]
// 004079da  0f8506010000         jne 0x407ae6
// 004079e0  8b0dd063e100         mov ecx, dword ptr [0xe163d0]
// 004079e6  3b4808               cmp ecx, dword ptr [eax + 8]
// 004079e9  0f85f7000000         jne 0x407ae6
// 004079ef  8b15d463e100         mov edx, dword ptr [0xe163d4]
// 004079f5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004079f8  0f85e8000000         jne 0x407ae6
// 004079fe  b9ffff0000           mov ecx, 0xffff
// 00407a03  66394e08             cmp word ptr [esi + 8], cx
// 00407a07  0f85d9000000         jne 0x407ae6
// 00407a0d  8bd1                 mov edx, ecx
// 00407a0f  6639560a             cmp word ptr [esi + 0xa], dx
// 00407a13  0f85cd000000         jne 0x407ae6
// 00407a19  8b0d84a4e500         mov ecx, dword ptr [0xe5a484]
// 00407a1f  6804010000           push 0x104
// 00407a24  8d85dcfeffff         lea eax, [ebp - 0x124]
// 00407a2a  50                   push eax
// 00407a2b  51                   push ecx
// 00407a2c  ff159021b200         call dword ptr [0xb22190]
// 00407a32  3bc3                 cmp eax, ebx
// 00407a34  0f848b010000         je 0x407bc5
// 00407a3a  3d04010000           cmp eax, 0x104
// 00407a3f  0f8480010000         je 0x407bc5
// 00407a45  895d08               mov dword ptr [ebp + 8], ebx
// 00407a48  8d95dcfeffff         lea edx, [ebp - 0x124]
// 00407a4e  52                   push edx
// 00407a4f  c645fc01             mov byte ptr [ebp - 4], 1
// 00407a53  ff15a821b200         call dword ptr [0xb221a8]
// 00407a59  40                   inc eax
// 00407a5a  6a02                 push 2
// 00407a5c  50                   push eax
// 00407a5d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00407a60  8d45f0               lea eax, [ebp - 0x10]
// 00407a63  50                   push eax
// 00407a64  e847c6ffff           call 0x4040b0
// 00407a69  83c40c               add esp, 0xc
// 00407a6c  85c0                 test eax, eax
// 00407a6e  7c42                 jl 0x407ab2
// 00407a70  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00407a73  81ff00040000         cmp edi, 0x400
// 00407a79  7f18                 jg 0x407a93
// 00407a7b  57                   push edi
// 00407a7c  e8efd2ffff           call 0x404d70
// 00407a81  83c404               add esp, 4
// 00407a84  84c0                 test al, al
// 00407a86  740b                 je 0x407a93
// 00407a88  8bc7                 mov eax, edi
// 00407a8a  e881b85700           call 0x983310
// 00407a8f  8bc4                 mov eax, esp
// 00407a91  eb09                 jmp 0x407a9c
// 00407a93  57                   push edi
// 00407a94  8d4d08               lea ecx, [ebp + 8]
// 00407a97  e884d7ffff           call 0x405220
// 00407a9c  6a03                 push 3
// 00407a9e  d1ef                 shr edi, 1
// 00407aa0  57                   push edi
// 00407aa1  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00407aa7  51                   push ecx
// 00407aa8  50                   push eax
// 00407aa9  e852c6ffff           call 0x404100
// 00407aae  3bc3                 cmp eax, ebx
// 00407ab0  751a                 jne 0x407acc
// 00407ab2  8d4d08               lea ecx, [ebp + 8]
// 00407ab5  e8a6cfffff           call 0x404a60
// 00407aba  8d4de0               lea ecx, [ebp - 0x20]
// 00407abd  e8cefbffff           call 0x407690
// 00407ac2  b80e000780           mov eax, 0x8007000e
// 00407ac7  e91b010000           jmp 0x407be7
// 00407acc  8d55ec               lea edx, [ebp - 0x14]
// 00407acf  52                   push edx
// 00407ad0  50                   push eax
// 00407ad1  ff15202bb200         call dword ptr [0xb22b20]
// 00407ad7  8d4d08               lea ecx, [ebp + 8]
// 00407ada  8bf8                 mov edi, eax
// 00407adc  885dfc               mov byte ptr [ebp - 4], bl
// 00407adf  e87ccfffff           call 0x404a60
// 00407ae4  eb1b                 jmp 0x407b01
// 00407ae6  8b5508               mov edx, dword ptr [ebp + 8]
// 00407ae9  8d4dec               lea ecx, [ebp - 0x14]
// 00407aec  51                   push ecx
// 00407aed  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00407af1  52                   push edx
// 00407af2  0fb75608             movzx edx, word ptr [esi + 8]
// 00407af6  51                   push ecx
// 00407af7  52                   push edx
// 00407af8  50                   push eax
// 00407af9  ff151c2bb200         call dword ptr [0xb22b1c]
// 00407aff  8bf8                 mov edi, eax
// 00407b01  3bfb                 cmp edi, ebx
// 00407b03  0f8cbc000000         jl 0x407bc5
// 00407b09  895de8               mov dword ptr [ebp - 0x18], ebx
// 00407b0c  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00407b0f  8b08                 mov ecx, dword ptr [eax]
// 00407b11  8d55e8               lea edx, [ebp - 0x18]
// 00407b14  52                   push edx
// 00407b15  8b16                 mov edx, dword ptr [esi]
// 00407b17  52                   push edx
// 00407b18  50                   push eax
// 00407b19  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00407b1c  c645fc02             mov byte ptr [ebp - 4], 2
// 00407b20  ffd0                 call eax
// 00407b22  8bf8                 mov edi, eax
// 00407b24  3bfb                 cmp edi, ebx
// 00407b26  7c7c                 jl 0x407ba4
// 00407b28  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407b2b  894508               mov dword ptr [ebp + 8], eax
// 00407b2e  3bc3                 cmp eax, ebx
// 00407b30  740b                 je 0x407b3d
// 00407b32  8b08                 mov ecx, dword ptr [eax]
// 00407b34  8b5104               mov edx, dword ptr [ecx + 4]
// 00407b37  50                   push eax
// 00407b38  ffd2                 call edx
// 00407b3a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407b3d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00407b40  8b08                 mov ecx, dword ptr [eax]
// 00407b42  8d55f0               lea edx, [ebp - 0x10]
// 00407b45  52                   push edx
// 00407b46  68403ab400           push 0xb43a40
// 00407b4b  50                   push eax
// 00407b4c  8b01                 mov eax, dword ptr [ecx]
// 00407b4e  c645fc04             mov byte ptr [ebp - 4], 4
// 00407b52  ffd0                 call eax
// 00407b54  85c0                 test eax, eax
// 00407b56  7c0c                 jl 0x407b64
// 00407b58  8d4df0               lea ecx, [ebp - 0x10]
// 00407b5b  51                   push ecx
// 00407b5c  8d4d08               lea ecx, [ebp + 8]
// 00407b5f  e82cfdffff           call 0x407890
// 00407b64  8b4508               mov eax, dword ptr [ebp + 8]
// 00407b67  56                   push esi
// 00407b68  89460c               mov dword ptr [esi + 0xc], eax
// 00407b6b  8b0dc463e100         mov ecx, dword ptr [0xe163c4]
// 00407b71  6800764000           push 0x407600
// 00407b76  895d08               mov dword ptr [ebp + 8], ebx
// 00407b79  e8b2fdffff           call 0x407930
// 00407b7e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00407b81  c645fc03             mov byte ptr [ebp - 4], 3
// 00407b85  3bc3                 cmp eax, ebx
// 00407b87  7408                 je 0x407b91
// 00407b89  8b10                 mov edx, dword ptr [eax]
// 00407b8b  50                   push eax
// 00407b8c  8b4208               mov eax, dword ptr [edx + 8]
// 00407b8f  ffd0                 call eax
// 00407b91  8b4508               mov eax, dword ptr [ebp + 8]
// 00407b94  c645fc02             mov byte ptr [ebp - 4], 2
// 00407b98  3bc3                 cmp eax, ebx
// 00407b9a  7408                 je 0x407ba4
// 00407b9c  8b08                 mov ecx, dword ptr [eax]
// 00407b9e  8b5108               mov edx, dword ptr [ecx + 8]
// 00407ba1  50                   push eax
// 00407ba2  ffd2                 call edx
// 00407ba4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00407ba7  8b08                 mov ecx, dword ptr [eax]
// 00407ba9  8b5108               mov edx, dword ptr [ecx + 8]
// 00407bac  50                   push eax
// 00407bad  ffd2                 call edx
// 00407baf  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407bb2  885dfc               mov byte ptr [ebp - 4], bl
// 00407bb5  3bc3                 cmp eax, ebx
// 00407bb7  740c                 je 0x407bc5
// 00407bb9  8b08                 mov ecx, dword ptr [eax]
// 00407bbb  8b5108               mov edx, dword ptr [ecx + 8]
// 00407bbe  50                   push eax
// 00407bbf  ffd2                 call edx
// 00407bc1  eb02                 jmp 0x407bc5
// 00407bc3  33ff                 xor edi, edi
// 00407bc5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00407bc8  3bc3                 cmp eax, ebx
// 00407bca  740f                 je 0x407bdb
// 00407bcc  395e14               cmp dword ptr [esi + 0x14], ebx
// 00407bcf  750a                 jne 0x407bdb
// 00407bd1  50                   push eax
// 00407bd2  8bce                 mov ecx, esi
// 00407bd4  e857f8ffff           call 0x407430
// 00407bd9  8bf8                 mov edi, eax
// 00407bdb  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00407bde  50                   push eax
// 00407bdf  ff15b421b200         call dword ptr [0xb221b4]
// 00407be5  8bc7                 mov eax, edi
// 00407be7  8da5d0feffff         lea esp, [ebp - 0x130]
// 00407bed  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407bf0  64890d00000000       mov dword ptr fs:[0], ecx
// 00407bf7  5f                   pop edi
// 00407bf8  5e                   pop esi
// 00407bf9  5b                   pop ebx
// 00407bfa  8be5                 mov esp, ebp
// 00407bfc  5d                   pop ebp
// 00407bfd  c20400               ret 4
// copied from an identical function in another client (function ?GetTI@CComTypeInfoHolder@ATL@@QAEJK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp