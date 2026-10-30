// roc 2009-12 0061a250  unit: seg_00610000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a250
//
// 0061a250  53                   push ebx
// 0061a251  56                   push esi
// 0061a252  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a256  57                   push edi
// 0061a257  68d8000000           push 0xd8
// 0061a25c  e85ff2ffff           call 0x6194c0
// 0061a261  83c404               add esp, 4
// 0061a264  33ff                 xor edi, edi
// 0061a266  8d5e48               lea ebx, [esi + 0x48]
// 0061a269  8da42400000000       lea esp, [esp]
// 0061a270  833b00               cmp dword ptr [ebx], 0
// 0061a273  740b                 je 0x61a280
// 0061a275  57                   push edi
// 0061a276  8bc6                 mov eax, esi
// 0061a278  e823f3ffff           call 0x6195a0
// 0061a27d  83c404               add esp, 4
// 0061a280  47                   inc edi
// 0061a281  83c304               add ebx, 4
// 0061a284  83ff04               cmp edi, 4
// 0061a287  7ce7                 jl 0x61a270
// 0061a289  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0061a290  7533                 jne 0x61a2c5
// 0061a292  33ff                 xor edi, edi
// 0061a294  8d5e68               lea ebx, [esi + 0x68]
// 0061a297  837bf000             cmp dword ptr [ebx - 0x10], 0
// 0061a29b  740d                 je 0x61a2aa
// 0061a29d  6a00                 push 0
// 0061a29f  57                   push edi
// 0061a2a0  8bc6                 mov eax, esi
// 0061a2a2  e8d9f4ffff           call 0x619780
// 0061a2a7  83c408               add esp, 8
// 0061a2aa  833b00               cmp dword ptr [ebx], 0
// 0061a2ad  740d                 je 0x61a2bc
// 0061a2af  6a01                 push 1
// 0061a2b1  57                   push edi
// 0061a2b2  8bc6                 mov eax, esi
// 0061a2b4  e8c7f4ffff           call 0x619780
// 0061a2b9  83c408               add esp, 8
// 0061a2bc  47                   inc edi
// 0061a2bd  83c304               add ebx, 4
// 0061a2c0  83ff04               cmp edi, 4
// 0061a2c3  7cd2                 jl 0x61a297
// 0061a2c5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061a2c8  8b08                 mov ecx, dword ptr [eax]
// 0061a2ca  c601ff               mov byte ptr [ecx], 0xff
// 0061a2cd  ff00                 inc dword ptr [eax]
// 0061a2cf  83cfff               or edi, 0xffffffff
// 0061a2d2  017804               add dword ptr [eax + 4], edi
// 0061a2d5  8d5f19               lea ebx, [edi + 0x19]
// 0061a2d8  751c                 jne 0x61a2f6
// 0061a2da  8b500c               mov edx, dword ptr [eax + 0xc]
// 0061a2dd  56                   push esi
// 0061a2de  ffd2                 call edx
// 0061a2e0  83c404               add esp, 4
// 0061a2e3  84c0                 test al, al
// 0061a2e5  750f                 jne 0x61a2f6
// 0061a2e7  8b06                 mov eax, dword ptr [esi]
// 0061a2e9  895814               mov dword ptr [eax + 0x14], ebx
// 0061a2ec  8b0e                 mov ecx, dword ptr [esi]
// 0061a2ee  8b11                 mov edx, dword ptr [ecx]
// 0061a2f0  56                   push esi
// 0061a2f1  ffd2                 call edx
// 0061a2f3  83c404               add esp, 4
// 0061a2f6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061a2f9  8b08                 mov ecx, dword ptr [eax]
// 0061a2fb  c601d9               mov byte ptr [ecx], 0xd9
// 0061a2fe  ff00                 inc dword ptr [eax]
// 0061a300  017804               add dword ptr [eax + 4], edi
// 0061a303  751c                 jne 0x61a321
// 0061a305  8b500c               mov edx, dword ptr [eax + 0xc]
// 0061a308  56                   push esi
// 0061a309  ffd2                 call edx
// 0061a30b  83c404               add esp, 4
// 0061a30e  84c0                 test al, al
// 0061a310  750f                 jne 0x61a321
// 0061a312  8b06                 mov eax, dword ptr [esi]
// 0061a314  895814               mov dword ptr [eax + 0x14], ebx
// 0061a317  8b0e                 mov ecx, dword ptr [esi]
// 0061a319  8b11                 mov edx, dword ptr [ecx]
// 0061a31b  56                   push esi
// 0061a31c  ffd2                 call edx
// 0061a31e  83c404               add esp, 4
// 0061a321  5f                   pop edi
// 0061a322  5e                   pop esi
// 0061a323  5b                   pop ebx
// 0061a324  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
