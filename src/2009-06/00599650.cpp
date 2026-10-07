// roc 2009-06 00599650  unit: seg_00590000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599650
//
// 00599650  33c0                 xor eax, eax
// 00599652  8d8a94000000         lea ecx, [edx + 0x94]
// 00599658  66833900             cmp word ptr [ecx], 0
// 0059965c  7509                 jne 0x599667
// 0059965e  40                   inc eax
// 0059965f  83c104               add ecx, 4
// 00599662  83f809               cmp eax, 9
// 00599665  7cf1                 jl 0x599658
// 00599667  83f809               cmp eax, 9
// 0059966a  0f859b000000         jne 0x59970b
// 00599670  b80e000000           mov eax, 0xe
// 00599675  8d8ad0000000         lea ecx, [edx + 0xd0]
// 0059967b  eb03                 jmp 0x599680
// 0059967d  8d4900               lea ecx, [ecx]
// 00599680  668379fc00           cmp word ptr [ecx - 4], 0
// 00599685  0f8580000000         jne 0x59970b
// 0059968b  66833900             cmp word ptr [ecx], 0
// 0059968f  7535                 jne 0x5996c6
// 00599691  6683790400           cmp word ptr [ecx + 4], 0
// 00599696  753d                 jne 0x5996d5
// 00599698  6683790800           cmp word ptr [ecx + 8], 0
// 0059969d  7547                 jne 0x5996e6
// 0059969f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 005996a4  7551                 jne 0x5996f7
// 005996a6  6683791000           cmp word ptr [ecx + 0x10], 0
// 005996ab  755b                 jne 0x599708
// 005996ad  83c006               add eax, 6
// 005996b0  83c118               add ecx, 0x18
// 005996b3  83f820               cmp eax, 0x20
// 005996b6  7cc8                 jl 0x599680
// 005996b8  8b12                 mov edx, dword ptr [edx]
// 005996ba  33c9                 xor ecx, ecx
// 005996bc  83f820               cmp eax, 0x20
// 005996bf  0f94c1               sete cl
// 005996c2  894a2c               mov dword ptr [edx + 0x2c], ecx
// 005996c5  c3                   ret 
// 005996c6  8b12                 mov edx, dword ptr [edx]
// 005996c8  33c9                 xor ecx, ecx
// 005996ca  40                   inc eax
// 005996cb  83f820               cmp eax, 0x20
// 005996ce  0f94c1               sete cl
// 005996d1  894a2c               mov dword ptr [edx + 0x2c], ecx
// 005996d4  c3                   ret 
// 005996d5  8b12                 mov edx, dword ptr [edx]
// 005996d7  33c9                 xor ecx, ecx
// 005996d9  83c002               add eax, 2
// 005996dc  83f820               cmp eax, 0x20
// 005996df  0f94c1               sete cl
// 005996e2  894a2c               mov dword ptr [edx + 0x2c], ecx
// 005996e5  c3                   ret 
// 005996e6  8b12                 mov edx, dword ptr [edx]
// 005996e8  33c9                 xor ecx, ecx
// 005996ea  83c003               add eax, 3
// 005996ed  83f820               cmp eax, 0x20
// 005996f0  0f94c1               sete cl
// 005996f3  894a2c               mov dword ptr [edx + 0x2c], ecx
// 005996f6  c3                   ret 
// 005996f7  8b12                 mov edx, dword ptr [edx]
// 005996f9  33c9                 xor ecx, ecx
// 005996fb  83c004               add eax, 4
// 005996fe  83f820               cmp eax, 0x20
// 00599701  0f94c1               sete cl
// 00599704  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00599707  c3                   ret 
// 00599708  83c005               add eax, 5
// 0059970b  8b12                 mov edx, dword ptr [edx]
// 0059970d  33c9                 xor ecx, ecx
// 0059970f  83f820               cmp eax, 0x20
// 00599712  0f94c1               sete cl
// 00599715  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00599718  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
