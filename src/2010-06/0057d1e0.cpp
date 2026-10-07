// roc 2010-06 0057d1e0  unit: seg_00570000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d1e0
//
// 0057d1e0  33c0                 xor eax, eax
// 0057d1e2  8d8a94000000         lea ecx, [edx + 0x94]
// 0057d1e8  66833900             cmp word ptr [ecx], 0
// 0057d1ec  7509                 jne 0x57d1f7
// 0057d1ee  40                   inc eax
// 0057d1ef  83c104               add ecx, 4
// 0057d1f2  83f809               cmp eax, 9
// 0057d1f5  7cf1                 jl 0x57d1e8
// 0057d1f7  83f809               cmp eax, 9
// 0057d1fa  0f859b000000         jne 0x57d29b
// 0057d200  b80e000000           mov eax, 0xe
// 0057d205  8d8ad0000000         lea ecx, [edx + 0xd0]
// 0057d20b  eb03                 jmp 0x57d210
// 0057d20d  8d4900               lea ecx, [ecx]
// 0057d210  668379fc00           cmp word ptr [ecx - 4], 0
// 0057d215  0f8580000000         jne 0x57d29b
// 0057d21b  66833900             cmp word ptr [ecx], 0
// 0057d21f  7535                 jne 0x57d256
// 0057d221  6683790400           cmp word ptr [ecx + 4], 0
// 0057d226  753d                 jne 0x57d265
// 0057d228  6683790800           cmp word ptr [ecx + 8], 0
// 0057d22d  7547                 jne 0x57d276
// 0057d22f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 0057d234  7551                 jne 0x57d287
// 0057d236  6683791000           cmp word ptr [ecx + 0x10], 0
// 0057d23b  755b                 jne 0x57d298
// 0057d23d  83c006               add eax, 6
// 0057d240  83c118               add ecx, 0x18
// 0057d243  83f820               cmp eax, 0x20
// 0057d246  7cc8                 jl 0x57d210
// 0057d248  8b12                 mov edx, dword ptr [edx]
// 0057d24a  33c9                 xor ecx, ecx
// 0057d24c  83f820               cmp eax, 0x20
// 0057d24f  0f94c1               sete cl
// 0057d252  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d255  c3                   ret 
// 0057d256  8b12                 mov edx, dword ptr [edx]
// 0057d258  33c9                 xor ecx, ecx
// 0057d25a  40                   inc eax
// 0057d25b  83f820               cmp eax, 0x20
// 0057d25e  0f94c1               sete cl
// 0057d261  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d264  c3                   ret 
// 0057d265  8b12                 mov edx, dword ptr [edx]
// 0057d267  33c9                 xor ecx, ecx
// 0057d269  83c002               add eax, 2
// 0057d26c  83f820               cmp eax, 0x20
// 0057d26f  0f94c1               sete cl
// 0057d272  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d275  c3                   ret 
// 0057d276  8b12                 mov edx, dword ptr [edx]
// 0057d278  33c9                 xor ecx, ecx
// 0057d27a  83c003               add eax, 3
// 0057d27d  83f820               cmp eax, 0x20
// 0057d280  0f94c1               sete cl
// 0057d283  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d286  c3                   ret 
// 0057d287  8b12                 mov edx, dword ptr [edx]
// 0057d289  33c9                 xor ecx, ecx
// 0057d28b  83c004               add eax, 4
// 0057d28e  83f820               cmp eax, 0x20
// 0057d291  0f94c1               sete cl
// 0057d294  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d297  c3                   ret 
// 0057d298  83c005               add eax, 5
// 0057d29b  8b12                 mov edx, dword ptr [edx]
// 0057d29d  33c9                 xor ecx, ecx
// 0057d29f  83f820               cmp eax, 0x20
// 0057d2a2  0f94c1               sete cl
// 0057d2a5  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0057d2a8  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
