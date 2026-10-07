// roc 2011-06 00573cd0  unit: seg_00570000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573cd0
//
// 00573cd0  33c0                 xor eax, eax
// 00573cd2  8d8a94000000         lea ecx, [edx + 0x94]
// 00573cd8  66833900             cmp word ptr [ecx], 0
// 00573cdc  7509                 jne 0x573ce7
// 00573cde  40                   inc eax
// 00573cdf  83c104               add ecx, 4
// 00573ce2  83f809               cmp eax, 9
// 00573ce5  7cf1                 jl 0x573cd8
// 00573ce7  83f809               cmp eax, 9
// 00573cea  0f859b000000         jne 0x573d8b
// 00573cf0  b80e000000           mov eax, 0xe
// 00573cf5  8d8ad0000000         lea ecx, [edx + 0xd0]
// 00573cfb  eb03                 jmp 0x573d00
// 00573cfd  8d4900               lea ecx, [ecx]
// 00573d00  668379fc00           cmp word ptr [ecx - 4], 0
// 00573d05  0f8580000000         jne 0x573d8b
// 00573d0b  66833900             cmp word ptr [ecx], 0
// 00573d0f  7535                 jne 0x573d46
// 00573d11  6683790400           cmp word ptr [ecx + 4], 0
// 00573d16  753d                 jne 0x573d55
// 00573d18  6683790800           cmp word ptr [ecx + 8], 0
// 00573d1d  7547                 jne 0x573d66
// 00573d1f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 00573d24  7551                 jne 0x573d77
// 00573d26  6683791000           cmp word ptr [ecx + 0x10], 0
// 00573d2b  755b                 jne 0x573d88
// 00573d2d  83c006               add eax, 6
// 00573d30  83c118               add ecx, 0x18
// 00573d33  83f820               cmp eax, 0x20
// 00573d36  7cc8                 jl 0x573d00
// 00573d38  8b12                 mov edx, dword ptr [edx]
// 00573d3a  33c9                 xor ecx, ecx
// 00573d3c  83f820               cmp eax, 0x20
// 00573d3f  0f94c1               sete cl
// 00573d42  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d45  c3                   ret 
// 00573d46  8b12                 mov edx, dword ptr [edx]
// 00573d48  33c9                 xor ecx, ecx
// 00573d4a  40                   inc eax
// 00573d4b  83f820               cmp eax, 0x20
// 00573d4e  0f94c1               sete cl
// 00573d51  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d54  c3                   ret 
// 00573d55  8b12                 mov edx, dword ptr [edx]
// 00573d57  33c9                 xor ecx, ecx
// 00573d59  83c002               add eax, 2
// 00573d5c  83f820               cmp eax, 0x20
// 00573d5f  0f94c1               sete cl
// 00573d62  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d65  c3                   ret 
// 00573d66  8b12                 mov edx, dword ptr [edx]
// 00573d68  33c9                 xor ecx, ecx
// 00573d6a  83c003               add eax, 3
// 00573d6d  83f820               cmp eax, 0x20
// 00573d70  0f94c1               sete cl
// 00573d73  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d76  c3                   ret 
// 00573d77  8b12                 mov edx, dword ptr [edx]
// 00573d79  33c9                 xor ecx, ecx
// 00573d7b  83c004               add eax, 4
// 00573d7e  83f820               cmp eax, 0x20
// 00573d81  0f94c1               sete cl
// 00573d84  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d87  c3                   ret 
// 00573d88  83c005               add eax, 5
// 00573d8b  8b12                 mov edx, dword ptr [edx]
// 00573d8d  33c9                 xor ecx, ecx
// 00573d8f  83f820               cmp eax, 0x20
// 00573d92  0f94c1               sete cl
// 00573d95  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00573d98  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
