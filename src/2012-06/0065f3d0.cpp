// from server: 100% by auto
// roc 2012-06 0065f3d0  unit: seg_00650000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f3d0
//
// 0065f3d0  33c0                 xor eax, eax
// 0065f3d2  8d8a94000000         lea ecx, [edx + 0x94]
// 0065f3d8  66833900             cmp word ptr [ecx], 0
// 0065f3dc  7509                 jne 0x65f3e7
// 0065f3de  40                   inc eax
// 0065f3df  83c104               add ecx, 4
// 0065f3e2  83f809               cmp eax, 9
// 0065f3e5  7cf1                 jl 0x65f3d8
// 0065f3e7  83f809               cmp eax, 9
// 0065f3ea  0f859b000000         jne 0x65f48b
// 0065f3f0  b80e000000           mov eax, 0xe
// 0065f3f5  8d8ad0000000         lea ecx, [edx + 0xd0]
// 0065f3fb  eb03                 jmp 0x65f400
// 0065f3fd  8d4900               lea ecx, [ecx]
// 0065f400  668379fc00           cmp word ptr [ecx - 4], 0
// 0065f405  0f8580000000         jne 0x65f48b
// 0065f40b  66833900             cmp word ptr [ecx], 0
// 0065f40f  7535                 jne 0x65f446
// 0065f411  6683790400           cmp word ptr [ecx + 4], 0
// 0065f416  753d                 jne 0x65f455
// 0065f418  6683790800           cmp word ptr [ecx + 8], 0
// 0065f41d  7547                 jne 0x65f466
// 0065f41f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 0065f424  7551                 jne 0x65f477
// 0065f426  6683791000           cmp word ptr [ecx + 0x10], 0
// 0065f42b  755b                 jne 0x65f488
// 0065f42d  83c006               add eax, 6
// 0065f430  83c118               add ecx, 0x18
// 0065f433  83f820               cmp eax, 0x20
// 0065f436  7cc8                 jl 0x65f400
// 0065f438  8b12                 mov edx, dword ptr [edx]
// 0065f43a  33c9                 xor ecx, ecx
// 0065f43c  83f820               cmp eax, 0x20
// 0065f43f  0f94c1               sete cl
// 0065f442  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f445  c3                   ret 
// 0065f446  8b12                 mov edx, dword ptr [edx]
// 0065f448  33c9                 xor ecx, ecx
// 0065f44a  40                   inc eax
// 0065f44b  83f820               cmp eax, 0x20
// 0065f44e  0f94c1               sete cl
// 0065f451  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f454  c3                   ret 
// 0065f455  8b12                 mov edx, dword ptr [edx]
// 0065f457  33c9                 xor ecx, ecx
// 0065f459  83c002               add eax, 2
// 0065f45c  83f820               cmp eax, 0x20
// 0065f45f  0f94c1               sete cl
// 0065f462  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f465  c3                   ret 
// 0065f466  8b12                 mov edx, dword ptr [edx]
// 0065f468  33c9                 xor ecx, ecx
// 0065f46a  83c003               add eax, 3
// 0065f46d  83f820               cmp eax, 0x20
// 0065f470  0f94c1               sete cl
// 0065f473  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f476  c3                   ret 
// 0065f477  8b12                 mov edx, dword ptr [edx]
// 0065f479  33c9                 xor ecx, ecx
// 0065f47b  83c004               add eax, 4
// 0065f47e  83f820               cmp eax, 0x20
// 0065f481  0f94c1               sete cl
// 0065f484  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f487  c3                   ret 
// 0065f488  83c005               add eax, 5
// 0065f48b  8b12                 mov edx, dword ptr [edx]
// 0065f48d  33c9                 xor ecx, ecx
// 0065f48f  83f820               cmp eax, 0x20
// 0065f492  0f94c1               sete cl
// 0065f495  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0065f498  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
