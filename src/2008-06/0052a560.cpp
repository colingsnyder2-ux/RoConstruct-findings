// roc 2008-06 0052a560  unit: seg_00520000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a560
//
// 0052a560  b8dcff0000           mov eax, 0xffdc
// 0052a565  394620               cmp dword ptr [esi + 0x20], eax
// 0052a568  7f05                 jg 0x52a56f
// 0052a56a  39461c               cmp dword ptr [esi + 0x1c], eax
// 0052a56d  7e18                 jle 0x52a587
// 0052a56f  8b0e                 mov ecx, dword ptr [esi]
// 0052a571  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0052a578  8b16                 mov edx, dword ptr [esi]
// 0052a57a  894218               mov dword ptr [edx + 0x18], eax
// 0052a57d  8b06                 mov eax, dword ptr [esi]
// 0052a57f  8b08                 mov ecx, dword ptr [eax]
// 0052a581  56                   push esi
// 0052a582  ffd1                 call ecx
// 0052a584  83c404               add esp, 4
// 0052a587  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 0052a58e  741e                 je 0x52a5ae
// 0052a590  8b16                 mov edx, dword ptr [esi]
// 0052a592  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0052a599  8b06                 mov eax, dword ptr [esi]
// 0052a59b  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0052a5a1  894818               mov dword ptr [eax + 0x18], ecx
// 0052a5a4  8b16                 mov edx, dword ptr [esi]
// 0052a5a6  8b02                 mov eax, dword ptr [edx]
// 0052a5a8  56                   push esi
// 0052a5a9  ffd0                 call eax
// 0052a5ab  83c404               add esp, 4
// 0052a5ae  b80a000000           mov eax, 0xa
// 0052a5b3  394624               cmp dword ptr [esi + 0x24], eax
// 0052a5b6  7e20                 jle 0x52a5d8
// 0052a5b8  8b0e                 mov ecx, dword ptr [esi]
// 0052a5ba  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0052a5c1  8b16                 mov edx, dword ptr [esi]
// 0052a5c3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0052a5c6  894a18               mov dword ptr [edx + 0x18], ecx
// 0052a5c9  8b16                 mov edx, dword ptr [esi]
// 0052a5cb  89421c               mov dword ptr [edx + 0x1c], eax
// 0052a5ce  8b06                 mov eax, dword ptr [esi]
// 0052a5d0  8b08                 mov ecx, dword ptr [eax]
// 0052a5d2  56                   push esi
// 0052a5d3  ffd1                 call ecx
// 0052a5d5  83c404               add esp, 4
// 0052a5d8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0052a5de  53                   push ebx
// 0052a5df  55                   push ebp
// 0052a5e0  bb01000000           mov ebx, 1
// 0052a5e5  33ed                 xor ebp, ebp
// 0052a5e7  396e24               cmp dword ptr [esi + 0x24], ebp
// 0052a5ea  57                   push edi
// 0052a5eb  899e10010000         mov dword ptr [esi + 0x110], ebx
// 0052a5f1  899e14010000         mov dword ptr [esi + 0x114], ebx
// 0052a5f7  7e64                 jle 0x52a65d
// 0052a5f9  8d780c               lea edi, [eax + 0xc]
// 0052a5fc  8d642400             lea esp, [esp]
// 0052a600  8b47fc               mov eax, dword ptr [edi - 4]
// 0052a603  85c0                 test eax, eax
// 0052a605  7e10                 jle 0x52a617
// 0052a607  83f804               cmp eax, 4
// 0052a60a  7f0b                 jg 0x52a617
// 0052a60c  8b07                 mov eax, dword ptr [edi]
// 0052a60e  85c0                 test eax, eax
// 0052a610  7e05                 jle 0x52a617
// 0052a612  83f804               cmp eax, 4
// 0052a615  7e13                 jle 0x52a62a
// 0052a617  8b16                 mov edx, dword ptr [esi]
// 0052a619  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0052a620  8b06                 mov eax, dword ptr [esi]
// 0052a622  8b08                 mov ecx, dword ptr [eax]
// 0052a624  56                   push esi
// 0052a625  ffd1                 call ecx
// 0052a627  83c404               add esp, 4
// 0052a62a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0052a630  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0052a633  3bc1                 cmp eax, ecx
// 0052a635  7f02                 jg 0x52a639
// 0052a637  8bc1                 mov eax, ecx
// 0052a639  898610010000         mov dword ptr [esi + 0x110], eax
// 0052a63f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0052a645  8b0f                 mov ecx, dword ptr [edi]
// 0052a647  3bc1                 cmp eax, ecx
// 0052a649  7f02                 jg 0x52a64d
// 0052a64b  8bc1                 mov eax, ecx
// 0052a64d  03eb                 add ebp, ebx
// 0052a64f  898614010000         mov dword ptr [esi + 0x114], eax
// 0052a655  83c754               add edi, 0x54
// 0052a658  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0052a65b  7ca3                 jl 0x52a600
// 0052a65d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0052a663  33ed                 xor ebp, ebp
// 0052a665  396e24               cmp dword ptr [esi + 0x24], ebp
// 0052a668  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 0052a672  0f8e91000000         jle 0x52a709
// 0052a678  8d781c               lea edi, [eax + 0x1c]
// 0052a67b  eb03                 jmp 0x52a680
// 0052a67d  8d4900               lea ecx, [ecx]
// 0052a680  8b47ec               mov eax, dword ptr [edi - 0x14]
// 0052a683  c7470808000000       mov dword ptr [edi + 8], 8
// 0052a68a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0052a68e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 0052a694  03d2                 add edx, edx
// 0052a696  03d2                 add edx, edx
// 0052a698  03d2                 add edx, edx
// 0052a69a  52                   push edx
// 0052a69b  50                   push eax
// 0052a69c  e85fb4ffff           call 0x525b00
// 0052a6a1  8b57f0               mov edx, dword ptr [edi - 0x10]
// 0052a6a4  8907                 mov dword ptr [edi], eax
// 0052a6a6  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0052a6aa  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0052a6b0  03c9                 add ecx, ecx
// 0052a6b2  03c9                 add ecx, ecx
// 0052a6b4  03c9                 add ecx, ecx
// 0052a6b6  51                   push ecx
// 0052a6b7  52                   push edx
// 0052a6b8  e843b4ffff           call 0x525b00
// 0052a6bd  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 0052a6c0  894704               mov dword ptr [edi + 4], eax
// 0052a6c3  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0052a6c7  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0052a6cd  50                   push eax
// 0052a6ce  51                   push ecx
// 0052a6cf  e82cb4ffff           call 0x525b00
// 0052a6d4  89470c               mov dword ptr [edi + 0xc], eax
// 0052a6d7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0052a6da  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0052a6de  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0052a6e4  52                   push edx
// 0052a6e5  50                   push eax
// 0052a6e6  e815b4ffff           call 0x525b00
// 0052a6eb  894710               mov dword ptr [edi + 0x10], eax
// 0052a6ee  885f14               mov byte ptr [edi + 0x14], bl
// 0052a6f1  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0052a6f8  03eb                 add ebp, ebx
// 0052a6fa  83c420               add esp, 0x20
// 0052a6fd  83c754               add edi, 0x54
// 0052a700  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0052a703  0f8c77ffffff         jl 0x52a680
// 0052a709  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0052a70f  8b5620               mov edx, dword ptr [esi + 0x20]
// 0052a712  03c9                 add ecx, ecx
// 0052a714  03c9                 add ecx, ecx
// 0052a716  03c9                 add ecx, ecx
// 0052a718  51                   push ecx
// 0052a719  52                   push edx
// 0052a71a  e8e1b3ffff           call 0x525b00
// 0052a71f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0052a725  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0052a72b  83c408               add esp, 8
// 0052a72e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0052a731  7c17                 jl 0x52a74a
// 0052a733  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0052a73a  750e                 jne 0x52a74a
// 0052a73c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0052a742  5f                   pop edi
// 0052a743  5d                   pop ebp
// 0052a744  c6411000             mov byte ptr [ecx + 0x10], 0
// 0052a748  5b                   pop ebx
// 0052a749  c3                   ret 
// 0052a74a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0052a750  5f                   pop edi
// 0052a751  5d                   pop ebp
// 0052a752  885a10               mov byte ptr [edx + 0x10], bl
// 0052a755  5b                   pop ebx
// 0052a756  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
