// roc 2011-06 005680a0  unit: seg_00560000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005680a0
//
// 005680a0  b8dcff0000           mov eax, 0xffdc
// 005680a5  394620               cmp dword ptr [esi + 0x20], eax
// 005680a8  7f05                 jg 0x5680af
// 005680aa  39461c               cmp dword ptr [esi + 0x1c], eax
// 005680ad  7e18                 jle 0x5680c7
// 005680af  8b0e                 mov ecx, dword ptr [esi]
// 005680b1  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 005680b8  8b16                 mov edx, dword ptr [esi]
// 005680ba  894218               mov dword ptr [edx + 0x18], eax
// 005680bd  8b06                 mov eax, dword ptr [esi]
// 005680bf  8b08                 mov ecx, dword ptr [eax]
// 005680c1  56                   push esi
// 005680c2  ffd1                 call ecx
// 005680c4  83c404               add esp, 4
// 005680c7  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 005680ce  741e                 je 0x5680ee
// 005680d0  8b16                 mov edx, dword ptr [esi]
// 005680d2  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 005680d9  8b06                 mov eax, dword ptr [esi]
// 005680db  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 005680e1  894818               mov dword ptr [eax + 0x18], ecx
// 005680e4  8b16                 mov edx, dword ptr [esi]
// 005680e6  8b02                 mov eax, dword ptr [edx]
// 005680e8  56                   push esi
// 005680e9  ffd0                 call eax
// 005680eb  83c404               add esp, 4
// 005680ee  b80a000000           mov eax, 0xa
// 005680f3  394624               cmp dword ptr [esi + 0x24], eax
// 005680f6  7e20                 jle 0x568118
// 005680f8  8b0e                 mov ecx, dword ptr [esi]
// 005680fa  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00568101  8b16                 mov edx, dword ptr [esi]
// 00568103  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00568106  894a18               mov dword ptr [edx + 0x18], ecx
// 00568109  8b16                 mov edx, dword ptr [esi]
// 0056810b  89421c               mov dword ptr [edx + 0x1c], eax
// 0056810e  8b06                 mov eax, dword ptr [esi]
// 00568110  8b08                 mov ecx, dword ptr [eax]
// 00568112  56                   push esi
// 00568113  ffd1                 call ecx
// 00568115  83c404               add esp, 4
// 00568118  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0056811e  53                   push ebx
// 0056811f  55                   push ebp
// 00568120  bb01000000           mov ebx, 1
// 00568125  33ed                 xor ebp, ebp
// 00568127  396e24               cmp dword ptr [esi + 0x24], ebp
// 0056812a  57                   push edi
// 0056812b  899e10010000         mov dword ptr [esi + 0x110], ebx
// 00568131  899e14010000         mov dword ptr [esi + 0x114], ebx
// 00568137  7e64                 jle 0x56819d
// 00568139  8d780c               lea edi, [eax + 0xc]
// 0056813c  8d642400             lea esp, [esp]
// 00568140  8b47fc               mov eax, dword ptr [edi - 4]
// 00568143  85c0                 test eax, eax
// 00568145  7e10                 jle 0x568157
// 00568147  83f804               cmp eax, 4
// 0056814a  7f0b                 jg 0x568157
// 0056814c  8b07                 mov eax, dword ptr [edi]
// 0056814e  85c0                 test eax, eax
// 00568150  7e05                 jle 0x568157
// 00568152  83f804               cmp eax, 4
// 00568155  7e13                 jle 0x56816a
// 00568157  8b16                 mov edx, dword ptr [esi]
// 00568159  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00568160  8b06                 mov eax, dword ptr [esi]
// 00568162  8b08                 mov ecx, dword ptr [eax]
// 00568164  56                   push esi
// 00568165  ffd1                 call ecx
// 00568167  83c404               add esp, 4
// 0056816a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00568170  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00568173  3bc1                 cmp eax, ecx
// 00568175  7f02                 jg 0x568179
// 00568177  8bc1                 mov eax, ecx
// 00568179  898610010000         mov dword ptr [esi + 0x110], eax
// 0056817f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00568185  8b0f                 mov ecx, dword ptr [edi]
// 00568187  3bc1                 cmp eax, ecx
// 00568189  7f02                 jg 0x56818d
// 0056818b  8bc1                 mov eax, ecx
// 0056818d  03eb                 add ebp, ebx
// 0056818f  898614010000         mov dword ptr [esi + 0x114], eax
// 00568195  83c754               add edi, 0x54
// 00568198  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0056819b  7ca3                 jl 0x568140
// 0056819d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005681a3  33ed                 xor ebp, ebp
// 005681a5  396e24               cmp dword ptr [esi + 0x24], ebp
// 005681a8  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 005681b2  0f8e91000000         jle 0x568249
// 005681b8  8d781c               lea edi, [eax + 0x1c]
// 005681bb  eb03                 jmp 0x5681c0
// 005681bd  8d4900               lea ecx, [ecx]
// 005681c0  8b47ec               mov eax, dword ptr [edi - 0x14]
// 005681c3  c7470808000000       mov dword ptr [edi + 8], 8
// 005681ca  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 005681ce  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 005681d4  03d2                 add edx, edx
// 005681d6  03d2                 add edx, edx
// 005681d8  03d2                 add edx, edx
// 005681da  52                   push edx
// 005681db  50                   push eax
// 005681dc  e8bffbffff           call 0x567da0
// 005681e1  8b57f0               mov edx, dword ptr [edi - 0x10]
// 005681e4  8907                 mov dword ptr [edi], eax
// 005681e6  0faf5620             imul edx, dword ptr [esi + 0x20]
// 005681ea  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 005681f0  03c9                 add ecx, ecx
// 005681f2  03c9                 add ecx, ecx
// 005681f4  03c9                 add ecx, ecx
// 005681f6  51                   push ecx
// 005681f7  52                   push edx
// 005681f8  e8a3fbffff           call 0x567da0
// 005681fd  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00568200  894704               mov dword ptr [edi + 4], eax
// 00568203  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 00568207  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0056820d  50                   push eax
// 0056820e  51                   push ecx
// 0056820f  e88cfbffff           call 0x567da0
// 00568214  89470c               mov dword ptr [edi + 0xc], eax
// 00568217  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0056821a  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0056821e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00568224  52                   push edx
// 00568225  50                   push eax
// 00568226  e875fbffff           call 0x567da0
// 0056822b  894710               mov dword ptr [edi + 0x10], eax
// 0056822e  885f14               mov byte ptr [edi + 0x14], bl
// 00568231  c7473000000000       mov dword ptr [edi + 0x30], 0
// 00568238  03eb                 add ebp, ebx
// 0056823a  83c420               add esp, 0x20
// 0056823d  83c754               add edi, 0x54
// 00568240  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00568243  0f8c77ffffff         jl 0x5681c0
// 00568249  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0056824f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00568252  03c9                 add ecx, ecx
// 00568254  03c9                 add ecx, ecx
// 00568256  03c9                 add ecx, ecx
// 00568258  51                   push ecx
// 00568259  52                   push edx
// 0056825a  e841fbffff           call 0x567da0
// 0056825f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00568265  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0056826b  83c408               add esp, 8
// 0056826e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00568271  7c17                 jl 0x56828a
// 00568273  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0056827a  750e                 jne 0x56828a
// 0056827c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00568282  5f                   pop edi
// 00568283  5d                   pop ebp
// 00568284  c6411000             mov byte ptr [ecx + 0x10], 0
// 00568288  5b                   pop ebx
// 00568289  c3                   ret 
// 0056828a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00568290  5f                   pop edi
// 00568291  5d                   pop ebp
// 00568292  885a10               mov byte ptr [edx + 0x10], bl
// 00568295  5b                   pop ebx
// 00568296  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
