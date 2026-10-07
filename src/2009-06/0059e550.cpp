// roc 2009-06 0059e550  unit: seg_00590000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e550
//
// 0059e550  83ec10               sub esp, 0x10
// 0059e553  53                   push ebx
// 0059e554  55                   push ebp
// 0059e555  56                   push esi
// 0059e556  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059e55a  8b4604               mov eax, dword ptr [esi + 4]
// 0059e55d  8b08                 mov ecx, dword ptr [eax]
// 0059e55f  68a0000000           push 0xa0
// 0059e564  6a01                 push 1
// 0059e566  56                   push esi
// 0059e567  ffd1                 call ecx
// 0059e569  8be8                 mov ebp, eax
// 0059e56b  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 0059e571  83c40c               add esp, 0xc
// 0059e574  c74500a0e05900       mov dword ptr [ebp], 0x59e0a0
// 0059e57b  c74504c0e05900       mov dword ptr [ebp + 4], 0x59e0c0
// 0059e582  c6450800             mov byte ptr [ebp + 8], 0
// 0059e586  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 0059e58d  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059e591  7413                 je 0x59e5a6
// 0059e593  8b16                 mov edx, dword ptr [esi]
// 0059e595  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0059e59c  8b06                 mov eax, dword ptr [esi]
// 0059e59e  8b08                 mov ecx, dword ptr [eax]
// 0059e5a0  56                   push esi
// 0059e5a1  ffd1                 call ecx
// 0059e5a3  83c404               add esp, 4
// 0059e5a6  807e4800             cmp byte ptr [esi + 0x48], 0
// 0059e5aa  740e                 je 0x59e5ba
// 0059e5ac  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 0059e5b3  c644242001           mov byte ptr [esp + 0x20], 1
// 0059e5b8  7f05                 jg 0x59e5bf
// 0059e5ba  c644242000           mov byte ptr [esp + 0x20], 0
// 0059e5bf  837e2400             cmp dword ptr [esi + 0x24], 0
// 0059e5c3  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0059e5c9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059e5d1  0f8e5e010000         jle 0x59e735
// 0059e5d7  83c324               add ebx, 0x24
// 0059e5da  83c534               add ebp, 0x34
// 0059e5dd  57                   push edi
// 0059e5de  8bff                 mov edi, edi
// 0059e5e0  8b0b                 mov ecx, dword ptr [ebx]
// 0059e5e2  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 0059e5e5  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0059e5eb  0fafc1               imul eax, ecx
// 0059e5ee  99                   cdq 
// 0059e5ef  f7ff                 idiv edi
// 0059e5f1  89442414             mov dword ptr [esp + 0x14], eax
// 0059e5f5  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 0059e5f8  0fafc1               imul eax, ecx
// 0059e5fb  99                   cdq 
// 0059e5fc  f7ff                 idiv edi
// 0059e5fe  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0059e604  89542418             mov dword ptr [esp + 0x18], edx
// 0059e608  8bc8                 mov ecx, eax
// 0059e60a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0059e610  894d30               mov dword ptr [ebp + 0x30], ecx
// 0059e613  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 0059e617  750c                 jne 0x59e625
// 0059e619  c74500a0e15900       mov dword ptr [ebp], 0x59e1a0
// 0059e620  e9f7000000           jmp 0x59e71c
// 0059e625  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059e629  3bf8                 cmp edi, eax
// 0059e62b  7510                 jne 0x59e63d
// 0059e62d  3bca                 cmp ecx, edx
// 0059e62f  750c                 jne 0x59e63d
// 0059e631  c7450090e15900       mov dword ptr [ebp], 0x59e190
// 0059e638  e9df000000           jmp 0x59e71c
// 0059e63d  03ff                 add edi, edi
// 0059e63f  3bf8                 cmp edi, eax
// 0059e641  755d                 jne 0x59e6a0
// 0059e643  3bca                 cmp ecx, edx
// 0059e645  7525                 jne 0x59e66c
// 0059e647  807c242400           cmp byte ptr [esp + 0x24], 0
// 0059e64c  7412                 je 0x59e660
// 0059e64e  837b0402             cmp dword ptr [ebx + 4], 2
// 0059e652  760c                 jbe 0x59e660
// 0059e654  c7450060e35900       mov dword ptr [ebp], 0x59e360
// 0059e65b  e98e000000           jmp 0x59e6ee
// 0059e660  c7450090e25900       mov dword ptr [ebp], 0x59e290
// 0059e667  e982000000           jmp 0x59e6ee
// 0059e66c  3bf8                 cmp edi, eax
// 0059e66e  7530                 jne 0x59e6a0
// 0059e670  8d1409               lea edx, [ecx + ecx]
// 0059e673  3b542418             cmp edx, dword ptr [esp + 0x18]
// 0059e677  7527                 jne 0x59e6a0
// 0059e679  807c242400           cmp byte ptr [esp + 0x24], 0
// 0059e67e  7417                 je 0x59e697
// 0059e680  837b0402             cmp dword ptr [ebx + 4], 2
// 0059e684  7611                 jbe 0x59e697
// 0059e686  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059e68a  c7450020e45900       mov dword ptr [ebp], 0x59e420
// 0059e691  c6400801             mov byte ptr [eax + 8], 1
// 0059e695  eb57                 jmp 0x59e6ee
// 0059e697  c74500f0e25900       mov dword ptr [ebp], 0x59e2f0
// 0059e69e  eb4e                 jmp 0x59e6ee
// 0059e6a0  99                   cdq 
// 0059e6a1  f77c2414             idiv dword ptr [esp + 0x14]
// 0059e6a5  89442414             mov dword ptr [esp + 0x14], eax
// 0059e6a9  85d2                 test edx, edx
// 0059e6ab  752e                 jne 0x59e6db
// 0059e6ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059e6b1  99                   cdq 
// 0059e6b2  f7f9                 idiv ecx
// 0059e6b4  85d2                 test edx, edx
// 0059e6b6  7523                 jne 0x59e6db
// 0059e6b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059e6bc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059e6c0  8a542414             mov dl, byte ptr [esp + 0x14]
// 0059e6c4  c74500b0e15900       mov dword ptr [ebp], 0x59e1b0
// 0059e6cb  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 0059e6d2  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 0059e6d9  eb13                 jmp 0x59e6ee
// 0059e6db  8b06                 mov eax, dword ptr [esi]
// 0059e6dd  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 0059e6e4  8b0e                 mov ecx, dword ptr [esi]
// 0059e6e6  8b11                 mov edx, dword ptr [ecx]
// 0059e6e8  56                   push esi
// 0059e6e9  ffd2                 call edx
// 0059e6eb  83c404               add esp, 4
// 0059e6ee  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0059e6f4  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0059e6fa  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0059e6fd  8b7e04               mov edi, dword ptr [esi + 4]
// 0059e700  50                   push eax
// 0059e701  51                   push ecx
// 0059e702  52                   push edx
// 0059e703  83c708               add edi, 8
// 0059e706  e815b7feff           call 0x589e20
// 0059e70b  83c408               add esp, 8
// 0059e70e  50                   push eax
// 0059e70f  8b07                 mov eax, dword ptr [edi]
// 0059e711  6a01                 push 1
// 0059e713  56                   push esi
// 0059e714  ffd0                 call eax
// 0059e716  83c410               add esp, 0x10
// 0059e719  8945d8               mov dword ptr [ebp - 0x28], eax
// 0059e71c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e720  40                   inc eax
// 0059e721  83c504               add ebp, 4
// 0059e724  83c354               add ebx, 0x54
// 0059e727  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0059e72a  89442410             mov dword ptr [esp + 0x10], eax
// 0059e72e  0f8cacfeffff         jl 0x59e5e0
// 0059e734  5f                   pop edi
// 0059e735  5e                   pop esi
// 0059e736  5d                   pop ebp
// 0059e737  5b                   pop ebx
// 0059e738  83c410               add esp, 0x10
// 0059e73b  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
