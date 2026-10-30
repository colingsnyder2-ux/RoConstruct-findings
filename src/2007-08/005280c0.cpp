// from server: 100% by auto
// roc 2007-08 005280c0  unit: seg_00520000  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005280c0
//
// 005280c0  83ec10               sub esp, 0x10
// 005280c3  53                   push ebx
// 005280c4  55                   push ebp
// 005280c5  56                   push esi
// 005280c6  8b742420             mov esi, dword ptr [esp + 0x20]
// 005280ca  8b4604               mov eax, dword ptr [esi + 4]
// 005280cd  8b08                 mov ecx, dword ptr [eax]
// 005280cf  68a0000000           push 0xa0
// 005280d4  6a01                 push 1
// 005280d6  56                   push esi
// 005280d7  ffd1                 call ecx
// 005280d9  8be8                 mov ebp, eax
// 005280db  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 005280e1  83c40c               add esp, 0xc
// 005280e4  c74500f07b5200       mov dword ptr [ebp], 0x527bf0
// 005280eb  c74504107c5200       mov dword ptr [ebp + 4], 0x527c10
// 005280f2  c6450800             mov byte ptr [ebp + 8], 0
// 005280f6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 005280fd  896c2418             mov dword ptr [esp + 0x18], ebp
// 00528101  7413                 je 0x528116
// 00528103  8b16                 mov edx, dword ptr [esi]
// 00528105  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0052810c  8b06                 mov eax, dword ptr [esi]
// 0052810e  8b08                 mov ecx, dword ptr [eax]
// 00528110  56                   push esi
// 00528111  ffd1                 call ecx
// 00528113  83c404               add esp, 4
// 00528116  807e4800             cmp byte ptr [esi + 0x48], 0
// 0052811a  740e                 je 0x52812a
// 0052811c  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 00528123  c644242001           mov byte ptr [esp + 0x20], 1
// 00528128  7f05                 jg 0x52812f
// 0052812a  c644242000           mov byte ptr [esp + 0x20], 0
// 0052812f  837e2400             cmp dword ptr [esi + 0x24], 0
// 00528133  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00528139  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00528141  0f8e60010000         jle 0x5282a7
// 00528147  83c324               add ebx, 0x24
// 0052814a  83c534               add ebp, 0x34
// 0052814d  57                   push edi
// 0052814e  8bff                 mov edi, edi
// 00528150  8b0b                 mov ecx, dword ptr [ebx]
// 00528152  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00528155  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0052815b  0fafc1               imul eax, ecx
// 0052815e  99                   cdq 
// 0052815f  f7ff                 idiv edi
// 00528161  89442414             mov dword ptr [esp + 0x14], eax
// 00528165  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00528168  0fafc1               imul eax, ecx
// 0052816b  99                   cdq 
// 0052816c  f7ff                 idiv edi
// 0052816e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00528174  89542418             mov dword ptr [esp + 0x18], edx
// 00528178  8bc8                 mov ecx, eax
// 0052817a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00528180  894d30               mov dword ptr [ebp + 0x30], ecx
// 00528183  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00528187  750c                 jne 0x528195
// 00528189  c74500f07c5200       mov dword ptr [ebp], 0x527cf0
// 00528190  e9f7000000           jmp 0x52828c
// 00528195  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00528199  3bf8                 cmp edi, eax
// 0052819b  7510                 jne 0x5281ad
// 0052819d  3bca                 cmp ecx, edx
// 0052819f  750c                 jne 0x5281ad
// 005281a1  c74500e07c5200       mov dword ptr [ebp], 0x527ce0
// 005281a8  e9df000000           jmp 0x52828c
// 005281ad  03ff                 add edi, edi
// 005281af  3bf8                 cmp edi, eax
// 005281b1  755d                 jne 0x528210
// 005281b3  3bca                 cmp ecx, edx
// 005281b5  7525                 jne 0x5281dc
// 005281b7  807c242400           cmp byte ptr [esp + 0x24], 0
// 005281bc  7412                 je 0x5281d0
// 005281be  837b0402             cmp dword ptr [ebx + 4], 2
// 005281c2  760c                 jbe 0x5281d0
// 005281c4  c74500b07e5200       mov dword ptr [ebp], 0x527eb0
// 005281cb  e98e000000           jmp 0x52825e
// 005281d0  c74500e07d5200       mov dword ptr [ebp], 0x527de0
// 005281d7  e982000000           jmp 0x52825e
// 005281dc  3bf8                 cmp edi, eax
// 005281de  7530                 jne 0x528210
// 005281e0  8d1409               lea edx, [ecx + ecx]
// 005281e3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005281e7  7527                 jne 0x528210
// 005281e9  807c242400           cmp byte ptr [esp + 0x24], 0
// 005281ee  7417                 je 0x528207
// 005281f0  837b0402             cmp dword ptr [ebx + 4], 2
// 005281f4  7611                 jbe 0x528207
// 005281f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005281fa  c74500807f5200       mov dword ptr [ebp], 0x527f80
// 00528201  c6400801             mov byte ptr [eax + 8], 1
// 00528205  eb57                 jmp 0x52825e
// 00528207  c74500407e5200       mov dword ptr [ebp], 0x527e40
// 0052820e  eb4e                 jmp 0x52825e
// 00528210  99                   cdq 
// 00528211  f77c2414             idiv dword ptr [esp + 0x14]
// 00528215  85d2                 test edx, edx
// 00528217  89442414             mov dword ptr [esp + 0x14], eax
// 0052821b  752e                 jne 0x52824b
// 0052821d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00528221  99                   cdq 
// 00528222  f7f9                 idiv ecx
// 00528224  85d2                 test edx, edx
// 00528226  7523                 jne 0x52824b
// 00528228  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052822c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00528230  8a542414             mov dl, byte ptr [esp + 0x14]
// 00528234  c74500007d5200       mov dword ptr [ebp], 0x527d00
// 0052823b  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00528242  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00528249  eb13                 jmp 0x52825e
// 0052824b  8b06                 mov eax, dword ptr [esi]
// 0052824d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00528254  8b0e                 mov ecx, dword ptr [esi]
// 00528256  8b11                 mov edx, dword ptr [ecx]
// 00528258  56                   push esi
// 00528259  ffd2                 call edx
// 0052825b  83c404               add esp, 4
// 0052825e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00528264  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0052826a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0052826d  8b7e04               mov edi, dword ptr [esi + 4]
// 00528270  50                   push eax
// 00528271  51                   push ecx
// 00528272  52                   push edx
// 00528273  83c708               add edi, 8
// 00528276  e8e55fffff           call 0x51e260
// 0052827b  83c408               add esp, 8
// 0052827e  50                   push eax
// 0052827f  8b07                 mov eax, dword ptr [edi]
// 00528281  6a01                 push 1
// 00528283  56                   push esi
// 00528284  ffd0                 call eax
// 00528286  83c410               add esp, 0x10
// 00528289  8945d8               mov dword ptr [ebp - 0x28], eax
// 0052828c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00528290  83c001               add eax, 1
// 00528293  83c504               add ebp, 4
// 00528296  83c354               add ebx, 0x54
// 00528299  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0052829c  89442410             mov dword ptr [esp + 0x10], eax
// 005282a0  0f8caafeffff         jl 0x528150
// 005282a6  5f                   pop edi
// 005282a7  5e                   pop esi
// 005282a8  5d                   pop ebp
// 005282a9  5b                   pop ebx
// 005282aa  83c410               add esp, 0x10
// 005282ad  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
