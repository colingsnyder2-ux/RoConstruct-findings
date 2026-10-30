// from server: 100% by auto
// roc 2009-06 00592140  unit: seg_00590000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592140
//
// 00592140  b8dcff0000           mov eax, 0xffdc
// 00592145  394620               cmp dword ptr [esi + 0x20], eax
// 00592148  7f05                 jg 0x59214f
// 0059214a  39461c               cmp dword ptr [esi + 0x1c], eax
// 0059214d  7e18                 jle 0x592167
// 0059214f  8b0e                 mov ecx, dword ptr [esi]
// 00592151  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00592158  8b16                 mov edx, dword ptr [esi]
// 0059215a  894218               mov dword ptr [edx + 0x18], eax
// 0059215d  8b06                 mov eax, dword ptr [esi]
// 0059215f  8b08                 mov ecx, dword ptr [eax]
// 00592161  56                   push esi
// 00592162  ffd1                 call ecx
// 00592164  83c404               add esp, 4
// 00592167  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 0059216e  741e                 je 0x59218e
// 00592170  8b16                 mov edx, dword ptr [esi]
// 00592172  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 00592179  8b06                 mov eax, dword ptr [esi]
// 0059217b  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00592181  894818               mov dword ptr [eax + 0x18], ecx
// 00592184  8b16                 mov edx, dword ptr [esi]
// 00592186  8b02                 mov eax, dword ptr [edx]
// 00592188  56                   push esi
// 00592189  ffd0                 call eax
// 0059218b  83c404               add esp, 4
// 0059218e  b80a000000           mov eax, 0xa
// 00592193  394624               cmp dword ptr [esi + 0x24], eax
// 00592196  7e20                 jle 0x5921b8
// 00592198  8b0e                 mov ecx, dword ptr [esi]
// 0059219a  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005921a1  8b16                 mov edx, dword ptr [esi]
// 005921a3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005921a6  894a18               mov dword ptr [edx + 0x18], ecx
// 005921a9  8b16                 mov edx, dword ptr [esi]
// 005921ab  89421c               mov dword ptr [edx + 0x1c], eax
// 005921ae  8b06                 mov eax, dword ptr [esi]
// 005921b0  8b08                 mov ecx, dword ptr [eax]
// 005921b2  56                   push esi
// 005921b3  ffd1                 call ecx
// 005921b5  83c404               add esp, 4
// 005921b8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005921be  53                   push ebx
// 005921bf  55                   push ebp
// 005921c0  bb01000000           mov ebx, 1
// 005921c5  33ed                 xor ebp, ebp
// 005921c7  396e24               cmp dword ptr [esi + 0x24], ebp
// 005921ca  57                   push edi
// 005921cb  899e10010000         mov dword ptr [esi + 0x110], ebx
// 005921d1  899e14010000         mov dword ptr [esi + 0x114], ebx
// 005921d7  7e64                 jle 0x59223d
// 005921d9  8d780c               lea edi, [eax + 0xc]
// 005921dc  8d642400             lea esp, [esp]
// 005921e0  8b47fc               mov eax, dword ptr [edi - 4]
// 005921e3  85c0                 test eax, eax
// 005921e5  7e10                 jle 0x5921f7
// 005921e7  83f804               cmp eax, 4
// 005921ea  7f0b                 jg 0x5921f7
// 005921ec  8b07                 mov eax, dword ptr [edi]
// 005921ee  85c0                 test eax, eax
// 005921f0  7e05                 jle 0x5921f7
// 005921f2  83f804               cmp eax, 4
// 005921f5  7e13                 jle 0x59220a
// 005921f7  8b16                 mov edx, dword ptr [esi]
// 005921f9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00592200  8b06                 mov eax, dword ptr [esi]
// 00592202  8b08                 mov ecx, dword ptr [eax]
// 00592204  56                   push esi
// 00592205  ffd1                 call ecx
// 00592207  83c404               add esp, 4
// 0059220a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00592210  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00592213  3bc1                 cmp eax, ecx
// 00592215  7f02                 jg 0x592219
// 00592217  8bc1                 mov eax, ecx
// 00592219  898610010000         mov dword ptr [esi + 0x110], eax
// 0059221f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00592225  8b0f                 mov ecx, dword ptr [edi]
// 00592227  3bc1                 cmp eax, ecx
// 00592229  7f02                 jg 0x59222d
// 0059222b  8bc1                 mov eax, ecx
// 0059222d  03eb                 add ebp, ebx
// 0059222f  898614010000         mov dword ptr [esi + 0x114], eax
// 00592235  83c754               add edi, 0x54
// 00592238  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0059223b  7ca3                 jl 0x5921e0
// 0059223d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00592243  33ed                 xor ebp, ebp
// 00592245  396e24               cmp dword ptr [esi + 0x24], ebp
// 00592248  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00592252  0f8e91000000         jle 0x5922e9
// 00592258  8d781c               lea edi, [eax + 0x1c]
// 0059225b  eb03                 jmp 0x592260
// 0059225d  8d4900               lea ecx, [ecx]
// 00592260  8b47ec               mov eax, dword ptr [edi - 0x14]
// 00592263  c7470808000000       mov dword ptr [edi + 8], 8
// 0059226a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0059226e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 00592274  03d2                 add edx, edx
// 00592276  03d2                 add edx, edx
// 00592278  03d2                 add edx, edx
// 0059227a  52                   push edx
// 0059227b  50                   push eax
// 0059227c  e88f7bffff           call 0x589e10
// 00592281  8b57f0               mov edx, dword ptr [edi - 0x10]
// 00592284  8907                 mov dword ptr [edi], eax
// 00592286  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0059228a  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00592290  03c9                 add ecx, ecx
// 00592292  03c9                 add ecx, ecx
// 00592294  03c9                 add ecx, ecx
// 00592296  51                   push ecx
// 00592297  52                   push edx
// 00592298  e8737bffff           call 0x589e10
// 0059229d  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 005922a0  894704               mov dword ptr [edi + 4], eax
// 005922a3  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 005922a7  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005922ad  50                   push eax
// 005922ae  51                   push ecx
// 005922af  e85c7bffff           call 0x589e10
// 005922b4  89470c               mov dword ptr [edi + 0xc], eax
// 005922b7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 005922ba  0faf4620             imul eax, dword ptr [esi + 0x20]
// 005922be  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 005922c4  52                   push edx
// 005922c5  50                   push eax
// 005922c6  e8457bffff           call 0x589e10
// 005922cb  894710               mov dword ptr [edi + 0x10], eax
// 005922ce  885f14               mov byte ptr [edi + 0x14], bl
// 005922d1  c7473000000000       mov dword ptr [edi + 0x30], 0
// 005922d8  03eb                 add ebp, ebx
// 005922da  83c420               add esp, 0x20
// 005922dd  83c754               add edi, 0x54
// 005922e0  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 005922e3  0f8c77ffffff         jl 0x592260
// 005922e9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 005922ef  8b5620               mov edx, dword ptr [esi + 0x20]
// 005922f2  03c9                 add ecx, ecx
// 005922f4  03c9                 add ecx, ecx
// 005922f6  03c9                 add ecx, ecx
// 005922f8  51                   push ecx
// 005922f9  52                   push edx
// 005922fa  e8117bffff           call 0x589e10
// 005922ff  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00592305  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0059230b  83c408               add esp, 8
// 0059230e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00592311  7c17                 jl 0x59232a
// 00592313  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0059231a  750e                 jne 0x59232a
// 0059231c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00592322  5f                   pop edi
// 00592323  5d                   pop ebp
// 00592324  c6411000             mov byte ptr [ecx + 0x10], 0
// 00592328  5b                   pop ebx
// 00592329  c3                   ret 
// 0059232a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00592330  5f                   pop edi
// 00592331  5d                   pop ebp
// 00592332  885a10               mov byte ptr [edx + 0x10], bl
// 00592335  5b                   pop ebx
// 00592336  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
