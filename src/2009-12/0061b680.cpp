// roc 2009-12 0061b680  unit: seg_00610000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b680
//
// 0061b680  33c0                 xor eax, eax
// 0061b682  8d8a94000000         lea ecx, [edx + 0x94]
// 0061b688  66833900             cmp word ptr [ecx], 0
// 0061b68c  7509                 jne 0x61b697
// 0061b68e  40                   inc eax
// 0061b68f  83c104               add ecx, 4
// 0061b692  83f809               cmp eax, 9
// 0061b695  7cf1                 jl 0x61b688
// 0061b697  83f809               cmp eax, 9
// 0061b69a  0f859b000000         jne 0x61b73b
// 0061b6a0  b80e000000           mov eax, 0xe
// 0061b6a5  8d8ad0000000         lea ecx, [edx + 0xd0]
// 0061b6ab  eb03                 jmp 0x61b6b0
// 0061b6ad  8d4900               lea ecx, [ecx]
// 0061b6b0  668379fc00           cmp word ptr [ecx - 4], 0
// 0061b6b5  0f8580000000         jne 0x61b73b
// 0061b6bb  66833900             cmp word ptr [ecx], 0
// 0061b6bf  7535                 jne 0x61b6f6
// 0061b6c1  6683790400           cmp word ptr [ecx + 4], 0
// 0061b6c6  753d                 jne 0x61b705
// 0061b6c8  6683790800           cmp word ptr [ecx + 8], 0
// 0061b6cd  7547                 jne 0x61b716
// 0061b6cf  6683790c00           cmp word ptr [ecx + 0xc], 0
// 0061b6d4  7551                 jne 0x61b727
// 0061b6d6  6683791000           cmp word ptr [ecx + 0x10], 0
// 0061b6db  755b                 jne 0x61b738
// 0061b6dd  83c006               add eax, 6
// 0061b6e0  83c118               add ecx, 0x18
// 0061b6e3  83f820               cmp eax, 0x20
// 0061b6e6  7cc8                 jl 0x61b6b0
// 0061b6e8  8b12                 mov edx, dword ptr [edx]
// 0061b6ea  33c9                 xor ecx, ecx
// 0061b6ec  83f820               cmp eax, 0x20
// 0061b6ef  0f94c1               sete cl
// 0061b6f2  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b6f5  c3                   ret 
// 0061b6f6  8b12                 mov edx, dword ptr [edx]
// 0061b6f8  33c9                 xor ecx, ecx
// 0061b6fa  40                   inc eax
// 0061b6fb  83f820               cmp eax, 0x20
// 0061b6fe  0f94c1               sete cl
// 0061b701  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b704  c3                   ret 
// 0061b705  8b12                 mov edx, dword ptr [edx]
// 0061b707  33c9                 xor ecx, ecx
// 0061b709  83c002               add eax, 2
// 0061b70c  83f820               cmp eax, 0x20
// 0061b70f  0f94c1               sete cl
// 0061b712  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b715  c3                   ret 
// 0061b716  8b12                 mov edx, dword ptr [edx]
// 0061b718  33c9                 xor ecx, ecx
// 0061b71a  83c003               add eax, 3
// 0061b71d  83f820               cmp eax, 0x20
// 0061b720  0f94c1               sete cl
// 0061b723  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b726  c3                   ret 
// 0061b727  8b12                 mov edx, dword ptr [edx]
// 0061b729  33c9                 xor ecx, ecx
// 0061b72b  83c004               add eax, 4
// 0061b72e  83f820               cmp eax, 0x20
// 0061b731  0f94c1               sete cl
// 0061b734  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b737  c3                   ret 
// 0061b738  83c005               add eax, 5
// 0061b73b  8b12                 mov edx, dword ptr [edx]
// 0061b73d  33c9                 xor ecx, ecx
// 0061b73f  83f820               cmp eax, 0x20
// 0061b742  0f94c1               sete cl
// 0061b745  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0061b748  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
