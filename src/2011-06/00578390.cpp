// roc 2011-06 00578390  unit: seg_00570000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578390
//
// 00578390  83ec10               sub esp, 0x10
// 00578393  53                   push ebx
// 00578394  55                   push ebp
// 00578395  56                   push esi
// 00578396  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057839a  8b4604               mov eax, dword ptr [esi + 4]
// 0057839d  8b08                 mov ecx, dword ptr [eax]
// 0057839f  68a0000000           push 0xa0
// 005783a4  6a01                 push 1
// 005783a6  56                   push esi
// 005783a7  ffd1                 call ecx
// 005783a9  8be8                 mov ebp, eax
// 005783ab  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 005783b1  83c40c               add esp, 0xc
// 005783b4  c74500e07e5700       mov dword ptr [ebp], 0x577ee0
// 005783bb  c74504007f5700       mov dword ptr [ebp + 4], 0x577f00
// 005783c2  c6450800             mov byte ptr [ebp + 8], 0
// 005783c6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 005783cd  896c2418             mov dword ptr [esp + 0x18], ebp
// 005783d1  7413                 je 0x5783e6
// 005783d3  8b16                 mov edx, dword ptr [esi]
// 005783d5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 005783dc  8b06                 mov eax, dword ptr [esi]
// 005783de  8b08                 mov ecx, dword ptr [eax]
// 005783e0  56                   push esi
// 005783e1  ffd1                 call ecx
// 005783e3  83c404               add esp, 4
// 005783e6  807e4800             cmp byte ptr [esi + 0x48], 0
// 005783ea  740e                 je 0x5783fa
// 005783ec  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 005783f3  c644242001           mov byte ptr [esp + 0x20], 1
// 005783f8  7f05                 jg 0x5783ff
// 005783fa  c644242000           mov byte ptr [esp + 0x20], 0
// 005783ff  837e2400             cmp dword ptr [esi + 0x24], 0
// 00578403  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00578409  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00578411  0f8e5e010000         jle 0x578575
// 00578417  83c324               add ebx, 0x24
// 0057841a  83c534               add ebp, 0x34
// 0057841d  57                   push edi
// 0057841e  8bff                 mov edi, edi
// 00578420  8b0b                 mov ecx, dword ptr [ebx]
// 00578422  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00578425  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0057842b  0fafc1               imul eax, ecx
// 0057842e  99                   cdq 
// 0057842f  f7ff                 idiv edi
// 00578431  89442414             mov dword ptr [esp + 0x14], eax
// 00578435  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00578438  0fafc1               imul eax, ecx
// 0057843b  99                   cdq 
// 0057843c  f7ff                 idiv edi
// 0057843e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00578444  89542418             mov dword ptr [esp + 0x18], edx
// 00578448  8bc8                 mov ecx, eax
// 0057844a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00578450  894d30               mov dword ptr [ebp + 0x30], ecx
// 00578453  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00578457  750c                 jne 0x578465
// 00578459  c74500e07f5700       mov dword ptr [ebp], 0x577fe0
// 00578460  e9f7000000           jmp 0x57855c
// 00578465  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00578469  3bf8                 cmp edi, eax
// 0057846b  7510                 jne 0x57847d
// 0057846d  3bca                 cmp ecx, edx
// 0057846f  750c                 jne 0x57847d
// 00578471  c74500d07f5700       mov dword ptr [ebp], 0x577fd0
// 00578478  e9df000000           jmp 0x57855c
// 0057847d  03ff                 add edi, edi
// 0057847f  3bf8                 cmp edi, eax
// 00578481  755d                 jne 0x5784e0
// 00578483  3bca                 cmp ecx, edx
// 00578485  7525                 jne 0x5784ac
// 00578487  807c242400           cmp byte ptr [esp + 0x24], 0
// 0057848c  7412                 je 0x5784a0
// 0057848e  837b0402             cmp dword ptr [ebx + 4], 2
// 00578492  760c                 jbe 0x5784a0
// 00578494  c74500a0815700       mov dword ptr [ebp], 0x5781a0
// 0057849b  e98e000000           jmp 0x57852e
// 005784a0  c74500d0805700       mov dword ptr [ebp], 0x5780d0
// 005784a7  e982000000           jmp 0x57852e
// 005784ac  3bf8                 cmp edi, eax
// 005784ae  7530                 jne 0x5784e0
// 005784b0  8d1409               lea edx, [ecx + ecx]
// 005784b3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005784b7  7527                 jne 0x5784e0
// 005784b9  807c242400           cmp byte ptr [esp + 0x24], 0
// 005784be  7417                 je 0x5784d7
// 005784c0  837b0402             cmp dword ptr [ebx + 4], 2
// 005784c4  7611                 jbe 0x5784d7
// 005784c6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005784ca  c7450060825700       mov dword ptr [ebp], 0x578260
// 005784d1  c6400801             mov byte ptr [eax + 8], 1
// 005784d5  eb57                 jmp 0x57852e
// 005784d7  c7450030815700       mov dword ptr [ebp], 0x578130
// 005784de  eb4e                 jmp 0x57852e
// 005784e0  99                   cdq 
// 005784e1  f77c2414             idiv dword ptr [esp + 0x14]
// 005784e5  89442414             mov dword ptr [esp + 0x14], eax
// 005784e9  85d2                 test edx, edx
// 005784eb  752e                 jne 0x57851b
// 005784ed  8b442418             mov eax, dword ptr [esp + 0x18]
// 005784f1  99                   cdq 
// 005784f2  f7f9                 idiv ecx
// 005784f4  85d2                 test edx, edx
// 005784f6  7523                 jne 0x57851b
// 005784f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005784fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00578500  8a542414             mov dl, byte ptr [esp + 0x14]
// 00578504  c74500f07f5700       mov dword ptr [ebp], 0x577ff0
// 0057850b  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00578512  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00578519  eb13                 jmp 0x57852e
// 0057851b  8b06                 mov eax, dword ptr [esi]
// 0057851d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00578524  8b0e                 mov ecx, dword ptr [esi]
// 00578526  8b11                 mov edx, dword ptr [ecx]
// 00578528  56                   push esi
// 00578529  ffd2                 call edx
// 0057852b  83c404               add esp, 4
// 0057852e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00578534  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0057853a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0057853d  8b7e04               mov edi, dword ptr [esi + 4]
// 00578540  50                   push eax
// 00578541  51                   push ecx
// 00578542  52                   push edx
// 00578543  83c708               add edi, 8
// 00578546  e865f8feff           call 0x567db0
// 0057854b  83c408               add esp, 8
// 0057854e  50                   push eax
// 0057854f  8b07                 mov eax, dword ptr [edi]
// 00578551  6a01                 push 1
// 00578553  56                   push esi
// 00578554  ffd0                 call eax
// 00578556  83c410               add esp, 0x10
// 00578559  8945d8               mov dword ptr [ebp - 0x28], eax
// 0057855c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00578560  40                   inc eax
// 00578561  83c504               add ebp, 4
// 00578564  83c354               add ebx, 0x54
// 00578567  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0057856a  89442410             mov dword ptr [esp + 0x10], eax
// 0057856e  0f8cacfeffff         jl 0x578420
// 00578574  5f                   pop edi
// 00578575  5e                   pop esi
// 00578576  5d                   pop ebp
// 00578577  5b                   pop ebx
// 00578578  83c410               add esp, 0x10
// 0057857b  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
