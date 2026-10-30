// from server: 100% by auto
// roc 2008-06 00534270  unit: seg_00530000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534270
//
// 00534270  83ec10               sub esp, 0x10
// 00534273  53                   push ebx
// 00534274  55                   push ebp
// 00534275  56                   push esi
// 00534276  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053427a  8b4604               mov eax, dword ptr [esi + 4]
// 0053427d  8b08                 mov ecx, dword ptr [eax]
// 0053427f  68a0000000           push 0xa0
// 00534284  6a01                 push 1
// 00534286  56                   push esi
// 00534287  ffd1                 call ecx
// 00534289  8be8                 mov ebp, eax
// 0053428b  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 00534291  83c40c               add esp, 0xc
// 00534294  c74500c03d5300       mov dword ptr [ebp], 0x533dc0
// 0053429b  c74504e03d5300       mov dword ptr [ebp + 4], 0x533de0
// 005342a2  c6450800             mov byte ptr [ebp + 8], 0
// 005342a6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 005342ad  896c2418             mov dword ptr [esp + 0x18], ebp
// 005342b1  7413                 je 0x5342c6
// 005342b3  8b16                 mov edx, dword ptr [esi]
// 005342b5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 005342bc  8b06                 mov eax, dword ptr [esi]
// 005342be  8b08                 mov ecx, dword ptr [eax]
// 005342c0  56                   push esi
// 005342c1  ffd1                 call ecx
// 005342c3  83c404               add esp, 4
// 005342c6  807e4800             cmp byte ptr [esi + 0x48], 0
// 005342ca  740e                 je 0x5342da
// 005342cc  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 005342d3  c644242001           mov byte ptr [esp + 0x20], 1
// 005342d8  7f05                 jg 0x5342df
// 005342da  c644242000           mov byte ptr [esp + 0x20], 0
// 005342df  837e2400             cmp dword ptr [esi + 0x24], 0
// 005342e3  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 005342e9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005342f1  0f8e5e010000         jle 0x534455
// 005342f7  83c324               add ebx, 0x24
// 005342fa  83c534               add ebp, 0x34
// 005342fd  57                   push edi
// 005342fe  8bff                 mov edi, edi
// 00534300  8b0b                 mov ecx, dword ptr [ebx]
// 00534302  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00534305  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0053430b  0fafc1               imul eax, ecx
// 0053430e  99                   cdq 
// 0053430f  f7ff                 idiv edi
// 00534311  89442414             mov dword ptr [esp + 0x14], eax
// 00534315  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00534318  0fafc1               imul eax, ecx
// 0053431b  99                   cdq 
// 0053431c  f7ff                 idiv edi
// 0053431e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00534324  89542418             mov dword ptr [esp + 0x18], edx
// 00534328  8bc8                 mov ecx, eax
// 0053432a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00534330  894d30               mov dword ptr [ebp + 0x30], ecx
// 00534333  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00534337  750c                 jne 0x534345
// 00534339  c74500c03e5300       mov dword ptr [ebp], 0x533ec0
// 00534340  e9f7000000           jmp 0x53443c
// 00534345  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00534349  3bf8                 cmp edi, eax
// 0053434b  7510                 jne 0x53435d
// 0053434d  3bca                 cmp ecx, edx
// 0053434f  750c                 jne 0x53435d
// 00534351  c74500b03e5300       mov dword ptr [ebp], 0x533eb0
// 00534358  e9df000000           jmp 0x53443c
// 0053435d  03ff                 add edi, edi
// 0053435f  3bf8                 cmp edi, eax
// 00534361  755d                 jne 0x5343c0
// 00534363  3bca                 cmp ecx, edx
// 00534365  7525                 jne 0x53438c
// 00534367  807c242400           cmp byte ptr [esp + 0x24], 0
// 0053436c  7412                 je 0x534380
// 0053436e  837b0402             cmp dword ptr [ebx + 4], 2
// 00534372  760c                 jbe 0x534380
// 00534374  c7450080405300       mov dword ptr [ebp], 0x534080
// 0053437b  e98e000000           jmp 0x53440e
// 00534380  c74500b03f5300       mov dword ptr [ebp], 0x533fb0
// 00534387  e982000000           jmp 0x53440e
// 0053438c  3bf8                 cmp edi, eax
// 0053438e  7530                 jne 0x5343c0
// 00534390  8d1409               lea edx, [ecx + ecx]
// 00534393  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00534397  7527                 jne 0x5343c0
// 00534399  807c242400           cmp byte ptr [esp + 0x24], 0
// 0053439e  7417                 je 0x5343b7
// 005343a0  837b0402             cmp dword ptr [ebx + 4], 2
// 005343a4  7611                 jbe 0x5343b7
// 005343a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005343aa  c7450040415300       mov dword ptr [ebp], 0x534140
// 005343b1  c6400801             mov byte ptr [eax + 8], 1
// 005343b5  eb57                 jmp 0x53440e
// 005343b7  c7450010405300       mov dword ptr [ebp], 0x534010
// 005343be  eb4e                 jmp 0x53440e
// 005343c0  99                   cdq 
// 005343c1  f77c2414             idiv dword ptr [esp + 0x14]
// 005343c5  89442414             mov dword ptr [esp + 0x14], eax
// 005343c9  85d2                 test edx, edx
// 005343cb  752e                 jne 0x5343fb
// 005343cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005343d1  99                   cdq 
// 005343d2  f7f9                 idiv ecx
// 005343d4  85d2                 test edx, edx
// 005343d6  7523                 jne 0x5343fb
// 005343d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005343dc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005343e0  8a542414             mov dl, byte ptr [esp + 0x14]
// 005343e4  c74500d03e5300       mov dword ptr [ebp], 0x533ed0
// 005343eb  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 005343f2  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 005343f9  eb13                 jmp 0x53440e
// 005343fb  8b06                 mov eax, dword ptr [esi]
// 005343fd  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00534404  8b0e                 mov ecx, dword ptr [esi]
// 00534406  8b11                 mov edx, dword ptr [ecx]
// 00534408  56                   push esi
// 00534409  ffd2                 call edx
// 0053440b  83c404               add esp, 4
// 0053440e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00534414  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0053441a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0053441d  8b7e04               mov edi, dword ptr [esi + 4]
// 00534420  50                   push eax
// 00534421  51                   push ecx
// 00534422  52                   push edx
// 00534423  83c708               add edi, 8
// 00534426  e8e516ffff           call 0x525b10
// 0053442b  83c408               add esp, 8
// 0053442e  50                   push eax
// 0053442f  8b07                 mov eax, dword ptr [edi]
// 00534431  6a01                 push 1
// 00534433  56                   push esi
// 00534434  ffd0                 call eax
// 00534436  83c410               add esp, 0x10
// 00534439  8945d8               mov dword ptr [ebp - 0x28], eax
// 0053443c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00534440  40                   inc eax
// 00534441  83c504               add ebp, 4
// 00534444  83c354               add ebx, 0x54
// 00534447  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0053444a  89442410             mov dword ptr [esp + 0x10], eax
// 0053444e  0f8cacfeffff         jl 0x534300
// 00534454  5f                   pop edi
// 00534455  5e                   pop esi
// 00534456  5d                   pop ebp
// 00534457  5b                   pop ebx
// 00534458  83c410               add esp, 0x10
// 0053445b  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
