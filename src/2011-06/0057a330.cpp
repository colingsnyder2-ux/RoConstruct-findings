// from server: 100% by auto
// roc 2011-06 0057a330  unit: seg_00570000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a330
//
// 0057a330  56                   push esi
// 0057a331  8b742408             mov esi, dword ptr [esp + 8]
// 0057a335  8b4604               mov eax, dword ptr [esi + 4]
// 0057a338  8b08                 mov ecx, dword ptr [eax]
// 0057a33a  57                   push edi
// 0057a33b  6a2c                 push 0x2c
// 0057a33d  6a01                 push 1
// 0057a33f  56                   push esi
// 0057a340  ffd1                 call ecx
// 0057a342  8bf8                 mov edi, eax
// 0057a344  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0057a34a  83c40c               add esp, 0xc
// 0057a34d  c70700a25700         mov dword ptr [edi], 0x57a200
// 0057a353  c7470c20a35700       mov dword ptr [edi + 0xc], 0x57a320
// 0057a35a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 0057a361  c7472800000000       mov dword ptr [edi + 0x28], 0
// 0057a368  837e6403             cmp dword ptr [esi + 0x64], 3
// 0057a36c  7413                 je 0x57a381
// 0057a36e  8b16                 mov edx, dword ptr [esi]
// 0057a370  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 0057a377  8b06                 mov eax, dword ptr [esi]
// 0057a379  8b08                 mov ecx, dword ptr [eax]
// 0057a37b  56                   push esi
// 0057a37c  ffd1                 call ecx
// 0057a37e  83c404               add esp, 4
// 0057a381  8b5604               mov edx, dword ptr [esi + 4]
// 0057a384  8b02                 mov eax, dword ptr [edx]
// 0057a386  55                   push ebp
// 0057a387  6880000000           push 0x80
// 0057a38c  6a01                 push 1
// 0057a38e  56                   push esi
// 0057a38f  ffd0                 call eax
// 0057a391  83c40c               add esp, 0xc
// 0057a394  894718               mov dword ptr [edi + 0x18], eax
// 0057a397  33ed                 xor ebp, ebp
// 0057a399  8da42400000000       lea esp, [esp]
// 0057a3a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057a3a3  8b5104               mov edx, dword ptr [ecx + 4]
// 0057a3a6  6800100000           push 0x1000
// 0057a3ab  6a01                 push 1
// 0057a3ad  56                   push esi
// 0057a3ae  ffd2                 call edx
// 0057a3b0  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057a3b3  890429               mov dword ptr [ecx + ebp], eax
// 0057a3b6  83c504               add ebp, 4
// 0057a3b9  83c40c               add esp, 0xc
// 0057a3bc  81fd80000000         cmp ebp, 0x80
// 0057a3c2  7cdc                 jl 0x57a3a0
// 0057a3c4  c6471c01             mov byte ptr [edi + 0x1c], 1
// 0057a3c8  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0057a3cc  7461                 je 0x57a42f
// 0057a3ce  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 0057a3d1  83fd08               cmp ebp, 8
// 0057a3d4  7d1c                 jge 0x57a3f2
// 0057a3d6  8b16                 mov edx, dword ptr [esi]
// 0057a3d8  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 0057a3df  8b06                 mov eax, dword ptr [esi]
// 0057a3e1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 0057a3e8  8b0e                 mov ecx, dword ptr [esi]
// 0057a3ea  8b11                 mov edx, dword ptr [ecx]
// 0057a3ec  56                   push esi
// 0057a3ed  ffd2                 call edx
// 0057a3ef  83c404               add esp, 4
// 0057a3f2  81fd00010000         cmp ebp, 0x100
// 0057a3f8  7e1c                 jle 0x57a416
// 0057a3fa  8b06                 mov eax, dword ptr [esi]
// 0057a3fc  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 0057a403  8b0e                 mov ecx, dword ptr [esi]
// 0057a405  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 0057a40c  8b16                 mov edx, dword ptr [esi]
// 0057a40e  8b02                 mov eax, dword ptr [edx]
// 0057a410  56                   push esi
// 0057a411  ffd0                 call eax
// 0057a413  83c404               add esp, 4
// 0057a416  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057a419  8b5108               mov edx, dword ptr [ecx + 8]
// 0057a41c  6a03                 push 3
// 0057a41e  55                   push ebp
// 0057a41f  6a01                 push 1
// 0057a421  56                   push esi
// 0057a422  ffd2                 call edx
// 0057a424  83c410               add esp, 0x10
// 0057a427  894710               mov dword ptr [edi + 0x10], eax
// 0057a42a  896f14               mov dword ptr [edi + 0x14], ebp
// 0057a42d  eb07                 jmp 0x57a436
// 0057a42f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0057a436  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0057a43a  b902000000           mov ecx, 2
// 0057a43f  5d                   pop ebp
// 0057a440  7403                 je 0x57a445
// 0057a442  894e4c               mov dword ptr [esi + 0x4c], ecx
// 0057a445  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 0057a448  7525                 jne 0x57a46f
// 0057a44a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0057a44d  8b5604               mov edx, dword ptr [esi + 4]
// 0057a450  03c1                 add eax, ecx
// 0057a452  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057a455  8d0440               lea eax, [eax + eax*2]
// 0057a458  03c0                 add eax, eax
// 0057a45a  50                   push eax
// 0057a45b  6a01                 push 1
// 0057a45d  56                   push esi
// 0057a45e  ffd1                 call ecx
// 0057a460  83c40c               add esp, 0xc
// 0057a463  894720               mov dword ptr [edi + 0x20], eax
// 0057a466  5f                   pop edi
// 0057a467  8bc6                 mov eax, esi
// 0057a469  5e                   pop esi
// 0057a46a  e9c1fcffff           jmp 0x57a130
// 0057a46f  5f                   pop edi
// 0057a470  5e                   pop esi
// 0057a471  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
