// roc 2009-12 00614150  unit: seg_00610000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614150
//
// 00614150  b8dcff0000           mov eax, 0xffdc
// 00614155  394620               cmp dword ptr [esi + 0x20], eax
// 00614158  7f05                 jg 0x61415f
// 0061415a  39461c               cmp dword ptr [esi + 0x1c], eax
// 0061415d  7e18                 jle 0x614177
// 0061415f  8b0e                 mov ecx, dword ptr [esi]
// 00614161  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00614168  8b16                 mov edx, dword ptr [esi]
// 0061416a  894218               mov dword ptr [edx + 0x18], eax
// 0061416d  8b06                 mov eax, dword ptr [esi]
// 0061416f  8b08                 mov ecx, dword ptr [eax]
// 00614171  56                   push esi
// 00614172  ffd1                 call ecx
// 00614174  83c404               add esp, 4
// 00614177  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 0061417e  741e                 je 0x61419e
// 00614180  8b16                 mov edx, dword ptr [esi]
// 00614182  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 00614189  8b06                 mov eax, dword ptr [esi]
// 0061418b  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00614191  894818               mov dword ptr [eax + 0x18], ecx
// 00614194  8b16                 mov edx, dword ptr [esi]
// 00614196  8b02                 mov eax, dword ptr [edx]
// 00614198  56                   push esi
// 00614199  ffd0                 call eax
// 0061419b  83c404               add esp, 4
// 0061419e  b80a000000           mov eax, 0xa
// 006141a3  394624               cmp dword ptr [esi + 0x24], eax
// 006141a6  7e20                 jle 0x6141c8
// 006141a8  8b0e                 mov ecx, dword ptr [esi]
// 006141aa  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 006141b1  8b16                 mov edx, dword ptr [esi]
// 006141b3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006141b6  894a18               mov dword ptr [edx + 0x18], ecx
// 006141b9  8b16                 mov edx, dword ptr [esi]
// 006141bb  89421c               mov dword ptr [edx + 0x1c], eax
// 006141be  8b06                 mov eax, dword ptr [esi]
// 006141c0  8b08                 mov ecx, dword ptr [eax]
// 006141c2  56                   push esi
// 006141c3  ffd1                 call ecx
// 006141c5  83c404               add esp, 4
// 006141c8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 006141ce  53                   push ebx
// 006141cf  55                   push ebp
// 006141d0  bb01000000           mov ebx, 1
// 006141d5  33ed                 xor ebp, ebp
// 006141d7  396e24               cmp dword ptr [esi + 0x24], ebp
// 006141da  57                   push edi
// 006141db  899e10010000         mov dword ptr [esi + 0x110], ebx
// 006141e1  899e14010000         mov dword ptr [esi + 0x114], ebx
// 006141e7  7e64                 jle 0x61424d
// 006141e9  8d780c               lea edi, [eax + 0xc]
// 006141ec  8d642400             lea esp, [esp]
// 006141f0  8b47fc               mov eax, dword ptr [edi - 4]
// 006141f3  85c0                 test eax, eax
// 006141f5  7e10                 jle 0x614207
// 006141f7  83f804               cmp eax, 4
// 006141fa  7f0b                 jg 0x614207
// 006141fc  8b07                 mov eax, dword ptr [edi]
// 006141fe  85c0                 test eax, eax
// 00614200  7e05                 jle 0x614207
// 00614202  83f804               cmp eax, 4
// 00614205  7e13                 jle 0x61421a
// 00614207  8b16                 mov edx, dword ptr [esi]
// 00614209  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00614210  8b06                 mov eax, dword ptr [esi]
// 00614212  8b08                 mov ecx, dword ptr [eax]
// 00614214  56                   push esi
// 00614215  ffd1                 call ecx
// 00614217  83c404               add esp, 4
// 0061421a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00614220  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00614223  3bc1                 cmp eax, ecx
// 00614225  7f02                 jg 0x614229
// 00614227  8bc1                 mov eax, ecx
// 00614229  898610010000         mov dword ptr [esi + 0x110], eax
// 0061422f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00614235  8b0f                 mov ecx, dword ptr [edi]
// 00614237  3bc1                 cmp eax, ecx
// 00614239  7f02                 jg 0x61423d
// 0061423b  8bc1                 mov eax, ecx
// 0061423d  03eb                 add ebp, ebx
// 0061423f  898614010000         mov dword ptr [esi + 0x114], eax
// 00614245  83c754               add edi, 0x54
// 00614248  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0061424b  7ca3                 jl 0x6141f0
// 0061424d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00614253  33ed                 xor ebp, ebp
// 00614255  396e24               cmp dword ptr [esi + 0x24], ebp
// 00614258  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00614262  0f8e91000000         jle 0x6142f9
// 00614268  8d781c               lea edi, [eax + 0x1c]
// 0061426b  eb03                 jmp 0x614270
// 0061426d  8d4900               lea ecx, [ecx]
// 00614270  8b47ec               mov eax, dword ptr [edi - 0x14]
// 00614273  c7470808000000       mov dword ptr [edi + 8], 8
// 0061427a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0061427e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 00614284  03d2                 add edx, edx
// 00614286  03d2                 add edx, edx
// 00614288  03d2                 add edx, edx
// 0061428a  52                   push edx
// 0061428b  50                   push eax
// 0061428c  e8cf79ffff           call 0x60bc60
// 00614291  8b57f0               mov edx, dword ptr [edi - 0x10]
// 00614294  8907                 mov dword ptr [edi], eax
// 00614296  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0061429a  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 006142a0  03c9                 add ecx, ecx
// 006142a2  03c9                 add ecx, ecx
// 006142a4  03c9                 add ecx, ecx
// 006142a6  51                   push ecx
// 006142a7  52                   push edx
// 006142a8  e8b379ffff           call 0x60bc60
// 006142ad  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 006142b0  894704               mov dword ptr [edi + 4], eax
// 006142b3  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 006142b7  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 006142bd  50                   push eax
// 006142be  51                   push ecx
// 006142bf  e89c79ffff           call 0x60bc60
// 006142c4  89470c               mov dword ptr [edi + 0xc], eax
// 006142c7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 006142ca  0faf4620             imul eax, dword ptr [esi + 0x20]
// 006142ce  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 006142d4  52                   push edx
// 006142d5  50                   push eax
// 006142d6  e88579ffff           call 0x60bc60
// 006142db  894710               mov dword ptr [edi + 0x10], eax
// 006142de  885f14               mov byte ptr [edi + 0x14], bl
// 006142e1  c7473000000000       mov dword ptr [edi + 0x30], 0
// 006142e8  03eb                 add ebp, ebx
// 006142ea  83c420               add esp, 0x20
// 006142ed  83c754               add edi, 0x54
// 006142f0  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 006142f3  0f8c77ffffff         jl 0x614270
// 006142f9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 006142ff  8b5620               mov edx, dword ptr [esi + 0x20]
// 00614302  03c9                 add ecx, ecx
// 00614304  03c9                 add ecx, ecx
// 00614306  03c9                 add ecx, ecx
// 00614308  51                   push ecx
// 00614309  52                   push edx
// 0061430a  e85179ffff           call 0x60bc60
// 0061430f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00614315  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0061431b  83c408               add esp, 8
// 0061431e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00614321  7c17                 jl 0x61433a
// 00614323  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0061432a  750e                 jne 0x61433a
// 0061432c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00614332  5f                   pop edi
// 00614333  5d                   pop ebp
// 00614334  c6411000             mov byte ptr [ecx + 0x10], 0
// 00614338  5b                   pop ebx
// 00614339  c3                   ret 
// 0061433a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00614340  5f                   pop edi
// 00614341  5d                   pop ebp
// 00614342  885a10               mov byte ptr [edx + 0x10], bl
// 00614345  5b                   pop ebx
// 00614346  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
