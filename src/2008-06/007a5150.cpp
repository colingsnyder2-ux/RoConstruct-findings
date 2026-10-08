// from server: 100% by auto
// roc 2008-06 007a5150  unit: CXTIconHandle  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5150
//
// 007a5150  33c0                 xor eax, eax
// 007a5152  8d8a94000000         lea ecx, [edx + 0x94]
// 007a5158  66833900             cmp word ptr [ecx], 0
// 007a515c  7509                 jne 0x7a5167
// 007a515e  40                   inc eax
// 007a515f  83c104               add ecx, 4
// 007a5162  83f809               cmp eax, 9
// 007a5165  7cf1                 jl 0x7a5158
// 007a5167  83f809               cmp eax, 9
// 007a516a  0f859b000000         jne 0x7a520b
// 007a5170  b80e000000           mov eax, 0xe
// 007a5175  8d8ad0000000         lea ecx, [edx + 0xd0]
// 007a517b  eb03                 jmp 0x7a5180
// 007a517d  8d4900               lea ecx, [ecx]
// 007a5180  668379fc00           cmp word ptr [ecx - 4], 0
// 007a5185  0f8580000000         jne 0x7a520b
// 007a518b  66833900             cmp word ptr [ecx], 0
// 007a518f  7535                 jne 0x7a51c6
// 007a5191  6683790400           cmp word ptr [ecx + 4], 0
// 007a5196  753d                 jne 0x7a51d5
// 007a5198  6683790800           cmp word ptr [ecx + 8], 0
// 007a519d  7547                 jne 0x7a51e6
// 007a519f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 007a51a4  7551                 jne 0x7a51f7
// 007a51a6  6683791000           cmp word ptr [ecx + 0x10], 0
// 007a51ab  755b                 jne 0x7a5208
// 007a51ad  83c006               add eax, 6
// 007a51b0  83c118               add ecx, 0x18
// 007a51b3  83f820               cmp eax, 0x20
// 007a51b6  7cc8                 jl 0x7a5180
// 007a51b8  8b12                 mov edx, dword ptr [edx]
// 007a51ba  33c9                 xor ecx, ecx
// 007a51bc  83f820               cmp eax, 0x20
// 007a51bf  0f94c1               sete cl
// 007a51c2  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a51c5  c3                   ret 
// 007a51c6  8b12                 mov edx, dword ptr [edx]
// 007a51c8  33c9                 xor ecx, ecx
// 007a51ca  40                   inc eax
// 007a51cb  83f820               cmp eax, 0x20
// 007a51ce  0f94c1               sete cl
// 007a51d1  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a51d4  c3                   ret 
// 007a51d5  8b12                 mov edx, dword ptr [edx]
// 007a51d7  33c9                 xor ecx, ecx
// 007a51d9  83c002               add eax, 2
// 007a51dc  83f820               cmp eax, 0x20
// 007a51df  0f94c1               sete cl
// 007a51e2  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a51e5  c3                   ret 
// 007a51e6  8b12                 mov edx, dword ptr [edx]
// 007a51e8  33c9                 xor ecx, ecx
// 007a51ea  83c003               add eax, 3
// 007a51ed  83f820               cmp eax, 0x20
// 007a51f0  0f94c1               sete cl
// 007a51f3  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a51f6  c3                   ret 
// 007a51f7  8b12                 mov edx, dword ptr [edx]
// 007a51f9  33c9                 xor ecx, ecx
// 007a51fb  83c004               add eax, 4
// 007a51fe  83f820               cmp eax, 0x20
// 007a5201  0f94c1               sete cl
// 007a5204  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a5207  c3                   ret 
// 007a5208  83c005               add eax, 5
// 007a520b  8b12                 mov edx, dword ptr [edx]
// 007a520d  33c9                 xor ecx, ecx
// 007a520f  83f820               cmp eax, 0x20
// 007a5212  0f94c1               sete cl
// 007a5215  894a2c               mov dword ptr [edx + 0x2c], ecx
// 007a5218  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
