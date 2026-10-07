// roc 2012-06 00663aa0  unit: seg_00660000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663aa0
//
// 00663aa0  83ec10               sub esp, 0x10
// 00663aa3  53                   push ebx
// 00663aa4  55                   push ebp
// 00663aa5  56                   push esi
// 00663aa6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00663aaa  8b4604               mov eax, dword ptr [esi + 4]
// 00663aad  8b08                 mov ecx, dword ptr [eax]
// 00663aaf  68a0000000           push 0xa0
// 00663ab4  6a01                 push 1
// 00663ab6  56                   push esi
// 00663ab7  ffd1                 call ecx
// 00663ab9  8be8                 mov ebp, eax
// 00663abb  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 00663ac1  83c40c               add esp, 0xc
// 00663ac4  c74500f0356600       mov dword ptr [ebp], 0x6635f0
// 00663acb  c7450410366600       mov dword ptr [ebp + 4], 0x663610
// 00663ad2  c6450800             mov byte ptr [ebp + 8], 0
// 00663ad6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 00663add  896c2418             mov dword ptr [esp + 0x18], ebp
// 00663ae1  7413                 je 0x663af6
// 00663ae3  8b16                 mov edx, dword ptr [esi]
// 00663ae5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 00663aec  8b06                 mov eax, dword ptr [esi]
// 00663aee  8b08                 mov ecx, dword ptr [eax]
// 00663af0  56                   push esi
// 00663af1  ffd1                 call ecx
// 00663af3  83c404               add esp, 4
// 00663af6  807e4800             cmp byte ptr [esi + 0x48], 0
// 00663afa  740e                 je 0x663b0a
// 00663afc  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 00663b03  c644242001           mov byte ptr [esp + 0x20], 1
// 00663b08  7f05                 jg 0x663b0f
// 00663b0a  c644242000           mov byte ptr [esp + 0x20], 0
// 00663b0f  837e2400             cmp dword ptr [esi + 0x24], 0
// 00663b13  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00663b19  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00663b21  0f8e5e010000         jle 0x663c85
// 00663b27  83c324               add ebx, 0x24
// 00663b2a  83c534               add ebp, 0x34
// 00663b2d  57                   push edi
// 00663b2e  8bff                 mov edi, edi
// 00663b30  8b0b                 mov ecx, dword ptr [ebx]
// 00663b32  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00663b35  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 00663b3b  0fafc1               imul eax, ecx
// 00663b3e  99                   cdq 
// 00663b3f  f7ff                 idiv edi
// 00663b41  89442414             mov dword ptr [esp + 0x14], eax
// 00663b45  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00663b48  0fafc1               imul eax, ecx
// 00663b4b  99                   cdq 
// 00663b4c  f7ff                 idiv edi
// 00663b4e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00663b54  89542418             mov dword ptr [esp + 0x18], edx
// 00663b58  8bc8                 mov ecx, eax
// 00663b5a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00663b60  894d30               mov dword ptr [ebp + 0x30], ecx
// 00663b63  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00663b67  750c                 jne 0x663b75
// 00663b69  c74500f0366600       mov dword ptr [ebp], 0x6636f0
// 00663b70  e9f7000000           jmp 0x663c6c
// 00663b75  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00663b79  3bf8                 cmp edi, eax
// 00663b7b  7510                 jne 0x663b8d
// 00663b7d  3bca                 cmp ecx, edx
// 00663b7f  750c                 jne 0x663b8d
// 00663b81  c74500e0366600       mov dword ptr [ebp], 0x6636e0
// 00663b88  e9df000000           jmp 0x663c6c
// 00663b8d  03ff                 add edi, edi
// 00663b8f  3bf8                 cmp edi, eax
// 00663b91  755d                 jne 0x663bf0
// 00663b93  3bca                 cmp ecx, edx
// 00663b95  7525                 jne 0x663bbc
// 00663b97  807c242400           cmp byte ptr [esp + 0x24], 0
// 00663b9c  7412                 je 0x663bb0
// 00663b9e  837b0402             cmp dword ptr [ebx + 4], 2
// 00663ba2  760c                 jbe 0x663bb0
// 00663ba4  c74500b0386600       mov dword ptr [ebp], 0x6638b0
// 00663bab  e98e000000           jmp 0x663c3e
// 00663bb0  c74500e0376600       mov dword ptr [ebp], 0x6637e0
// 00663bb7  e982000000           jmp 0x663c3e
// 00663bbc  3bf8                 cmp edi, eax
// 00663bbe  7530                 jne 0x663bf0
// 00663bc0  8d1409               lea edx, [ecx + ecx]
// 00663bc3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00663bc7  7527                 jne 0x663bf0
// 00663bc9  807c242400           cmp byte ptr [esp + 0x24], 0
// 00663bce  7417                 je 0x663be7
// 00663bd0  837b0402             cmp dword ptr [ebx + 4], 2
// 00663bd4  7611                 jbe 0x663be7
// 00663bd6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00663bda  c7450070396600       mov dword ptr [ebp], 0x663970
// 00663be1  c6400801             mov byte ptr [eax + 8], 1
// 00663be5  eb57                 jmp 0x663c3e
// 00663be7  c7450040386600       mov dword ptr [ebp], 0x663840
// 00663bee  eb4e                 jmp 0x663c3e
// 00663bf0  99                   cdq 
// 00663bf1  f77c2414             idiv dword ptr [esp + 0x14]
// 00663bf5  89442414             mov dword ptr [esp + 0x14], eax
// 00663bf9  85d2                 test edx, edx
// 00663bfb  752e                 jne 0x663c2b
// 00663bfd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00663c01  99                   cdq 
// 00663c02  f7f9                 idiv ecx
// 00663c04  85d2                 test edx, edx
// 00663c06  7523                 jne 0x663c2b
// 00663c08  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00663c0c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00663c10  8a542414             mov dl, byte ptr [esp + 0x14]
// 00663c14  c7450000376600       mov dword ptr [ebp], 0x663700
// 00663c1b  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00663c22  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00663c29  eb13                 jmp 0x663c3e
// 00663c2b  8b06                 mov eax, dword ptr [esi]
// 00663c2d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00663c34  8b0e                 mov ecx, dword ptr [esi]
// 00663c36  8b11                 mov edx, dword ptr [ecx]
// 00663c38  56                   push esi
// 00663c39  ffd2                 call edx
// 00663c3b  83c404               add esp, 4
// 00663c3e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00663c44  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00663c4a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00663c4d  8b7e04               mov edi, dword ptr [esi + 4]
// 00663c50  50                   push eax
// 00663c51  51                   push ecx
// 00663c52  52                   push edx
// 00663c53  83c708               add edi, 8
// 00663c56  e865f8feff           call 0x6534c0
// 00663c5b  83c408               add esp, 8
// 00663c5e  50                   push eax
// 00663c5f  8b07                 mov eax, dword ptr [edi]
// 00663c61  6a01                 push 1
// 00663c63  56                   push esi
// 00663c64  ffd0                 call eax
// 00663c66  83c410               add esp, 0x10
// 00663c69  8945d8               mov dword ptr [ebp - 0x28], eax
// 00663c6c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663c70  40                   inc eax
// 00663c71  83c504               add ebp, 4
// 00663c74  83c354               add ebx, 0x54
// 00663c77  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00663c7a  89442410             mov dword ptr [esp + 0x10], eax
// 00663c7e  0f8cacfeffff         jl 0x663b30
// 00663c84  5f                   pop edi
// 00663c85  5e                   pop esi
// 00663c86  5d                   pop ebp
// 00663c87  5b                   pop ebx
// 00663c88  83c410               add esp, 0x10
// 00663c8b  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
