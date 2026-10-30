// roc 2007-03 00519050  unit: seg_00510000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519050
//
// 00519050  b8dcff0000           mov eax, 0xffdc
// 00519055  394620               cmp dword ptr [esi + 0x20], eax
// 00519058  7f05                 jg 0x51905f
// 0051905a  39461c               cmp dword ptr [esi + 0x1c], eax
// 0051905d  7e18                 jle 0x519077
// 0051905f  8b0e                 mov ecx, dword ptr [esi]
// 00519061  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00519068  8b16                 mov edx, dword ptr [esi]
// 0051906a  894218               mov dword ptr [edx + 0x18], eax
// 0051906d  8b06                 mov eax, dword ptr [esi]
// 0051906f  8b08                 mov ecx, dword ptr [eax]
// 00519071  56                   push esi
// 00519072  ffd1                 call ecx
// 00519074  83c404               add esp, 4
// 00519077  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 0051907e  741e                 je 0x51909e
// 00519080  8b16                 mov edx, dword ptr [esi]
// 00519082  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 00519089  8b06                 mov eax, dword ptr [esi]
// 0051908b  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00519091  894818               mov dword ptr [eax + 0x18], ecx
// 00519094  8b16                 mov edx, dword ptr [esi]
// 00519096  8b02                 mov eax, dword ptr [edx]
// 00519098  56                   push esi
// 00519099  ffd0                 call eax
// 0051909b  83c404               add esp, 4
// 0051909e  b80a000000           mov eax, 0xa
// 005190a3  394624               cmp dword ptr [esi + 0x24], eax
// 005190a6  7e20                 jle 0x5190c8
// 005190a8  8b0e                 mov ecx, dword ptr [esi]
// 005190aa  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005190b1  8b16                 mov edx, dword ptr [esi]
// 005190b3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005190b6  894a18               mov dword ptr [edx + 0x18], ecx
// 005190b9  8b16                 mov edx, dword ptr [esi]
// 005190bb  89421c               mov dword ptr [edx + 0x1c], eax
// 005190be  8b06                 mov eax, dword ptr [esi]
// 005190c0  8b08                 mov ecx, dword ptr [eax]
// 005190c2  56                   push esi
// 005190c3  ffd1                 call ecx
// 005190c5  83c404               add esp, 4
// 005190c8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005190ce  53                   push ebx
// 005190cf  55                   push ebp
// 005190d0  bb01000000           mov ebx, 1
// 005190d5  33ed                 xor ebp, ebp
// 005190d7  396e24               cmp dword ptr [esi + 0x24], ebp
// 005190da  57                   push edi
// 005190db  899e10010000         mov dword ptr [esi + 0x110], ebx
// 005190e1  899e14010000         mov dword ptr [esi + 0x114], ebx
// 005190e7  7e64                 jle 0x51914d
// 005190e9  8d780c               lea edi, [eax + 0xc]
// 005190ec  8d642400             lea esp, [esp]
// 005190f0  8b47fc               mov eax, dword ptr [edi - 4]
// 005190f3  85c0                 test eax, eax
// 005190f5  7e10                 jle 0x519107
// 005190f7  83f804               cmp eax, 4
// 005190fa  7f0b                 jg 0x519107
// 005190fc  8b07                 mov eax, dword ptr [edi]
// 005190fe  85c0                 test eax, eax
// 00519100  7e05                 jle 0x519107
// 00519102  83f804               cmp eax, 4
// 00519105  7e13                 jle 0x51911a
// 00519107  8b16                 mov edx, dword ptr [esi]
// 00519109  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00519110  8b06                 mov eax, dword ptr [esi]
// 00519112  8b08                 mov ecx, dword ptr [eax]
// 00519114  56                   push esi
// 00519115  ffd1                 call ecx
// 00519117  83c404               add esp, 4
// 0051911a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00519120  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00519123  3bc1                 cmp eax, ecx
// 00519125  7f02                 jg 0x519129
// 00519127  8bc1                 mov eax, ecx
// 00519129  898610010000         mov dword ptr [esi + 0x110], eax
// 0051912f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00519135  8b0f                 mov ecx, dword ptr [edi]
// 00519137  3bc1                 cmp eax, ecx
// 00519139  7f02                 jg 0x51913d
// 0051913b  8bc1                 mov eax, ecx
// 0051913d  03eb                 add ebp, ebx
// 0051913f  898614010000         mov dword ptr [esi + 0x114], eax
// 00519145  83c754               add edi, 0x54
// 00519148  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0051914b  7ca3                 jl 0x5190f0
// 0051914d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00519153  33ed                 xor ebp, ebp
// 00519155  396e24               cmp dword ptr [esi + 0x24], ebp
// 00519158  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00519162  0f8e91000000         jle 0x5191f9
// 00519168  8d781c               lea edi, [eax + 0x1c]
// 0051916b  eb03                 jmp 0x519170
// 0051916d  8d4900               lea ecx, [ecx]
// 00519170  8b47ec               mov eax, dword ptr [edi - 0x14]
// 00519173  c7470808000000       mov dword ptr [edi + 8], 8
// 0051917a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0051917e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 00519184  03d2                 add edx, edx
// 00519186  03d2                 add edx, edx
// 00519188  03d2                 add edx, edx
// 0051918a  52                   push edx
// 0051918b  50                   push eax
// 0051918c  e87fb4ffff           call 0x514610
// 00519191  8b57f0               mov edx, dword ptr [edi - 0x10]
// 00519194  8907                 mov dword ptr [edi], eax
// 00519196  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0051919a  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 005191a0  03c9                 add ecx, ecx
// 005191a2  03c9                 add ecx, ecx
// 005191a4  03c9                 add ecx, ecx
// 005191a6  51                   push ecx
// 005191a7  52                   push edx
// 005191a8  e863b4ffff           call 0x514610
// 005191ad  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 005191b0  894704               mov dword ptr [edi + 4], eax
// 005191b3  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 005191b7  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005191bd  50                   push eax
// 005191be  51                   push ecx
// 005191bf  e84cb4ffff           call 0x514610
// 005191c4  89470c               mov dword ptr [edi + 0xc], eax
// 005191c7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 005191ca  0faf4620             imul eax, dword ptr [esi + 0x20]
// 005191ce  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 005191d4  52                   push edx
// 005191d5  50                   push eax
// 005191d6  e835b4ffff           call 0x514610
// 005191db  894710               mov dword ptr [edi + 0x10], eax
// 005191de  885f14               mov byte ptr [edi + 0x14], bl
// 005191e1  c7473000000000       mov dword ptr [edi + 0x30], 0
// 005191e8  03eb                 add ebp, ebx
// 005191ea  83c420               add esp, 0x20
// 005191ed  83c754               add edi, 0x54
// 005191f0  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 005191f3  0f8c77ffffff         jl 0x519170
// 005191f9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 005191ff  8b5620               mov edx, dword ptr [esi + 0x20]
// 00519202  03c9                 add ecx, ecx
// 00519204  03c9                 add ecx, ecx
// 00519206  03c9                 add ecx, ecx
// 00519208  51                   push ecx
// 00519209  52                   push edx
// 0051920a  e801b4ffff           call 0x514610
// 0051920f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00519215  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0051921b  83c408               add esp, 8
// 0051921e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00519221  7c17                 jl 0x51923a
// 00519223  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0051922a  750e                 jne 0x51923a
// 0051922c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00519232  5f                   pop edi
// 00519233  5d                   pop ebp
// 00519234  c6411000             mov byte ptr [ecx + 0x10], 0
// 00519238  5b                   pop ebx
// 00519239  c3                   ret 
// 0051923a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00519240  5f                   pop edi
// 00519241  5d                   pop ebp
// 00519242  885a10               mov byte ptr [edx + 0x10], bl
// 00519245  5b                   pop ebx
// 00519246  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
