// roc 2007-03 007255a0  unit: seg_00720000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007255a0
//
// 007255a0  33c0                 xor eax, eax
// 007255a2  8d8a94000000         lea ecx, [edx + 0x94]
// 007255a8  66833900             cmp word ptr [ecx], 0
// 007255ac  750b                 jne 0x7255b9
// 007255ae  83c001               add eax, 1
// 007255b1  83c104               add ecx, 4
// 007255b4  83f809               cmp eax, 9
// 007255b7  7cef                 jl 0x7255a8
// 007255b9  83f809               cmp eax, 9
// 007255bc  0f859b000000         jne 0x72565d
// 007255c2  b80e000000           mov eax, 0xe
// 007255c7  8d8ad0000000         lea ecx, [edx + 0xd0]
// 007255cd  8d4900               lea ecx, [ecx]
// 007255d0  668379fc00           cmp word ptr [ecx - 4], 0
// 007255d5  0f8582000000         jne 0x72565d
// 007255db  66833900             cmp word ptr [ecx], 0
// 007255df  7535                 jne 0x725616
// 007255e1  6683790400           cmp word ptr [ecx + 4], 0
// 007255e6  753f                 jne 0x725627
// 007255e8  6683790800           cmp word ptr [ecx + 8], 0
// 007255ed  7549                 jne 0x725638
// 007255ef  6683790c00           cmp word ptr [ecx + 0xc], 0
// 007255f4  7553                 jne 0x725649
// 007255f6  6683791000           cmp word ptr [ecx + 0x10], 0
// 007255fb  755d                 jne 0x72565a
// 007255fd  83c006               add eax, 6
// 00725600  83c118               add ecx, 0x18
// 00725603  83f820               cmp eax, 0x20
// 00725606  7cc8                 jl 0x7255d0
// 00725608  8b12                 mov edx, dword ptr [edx]
// 0072560a  33c9                 xor ecx, ecx
// 0072560c  83f820               cmp eax, 0x20
// 0072560f  0f94c1               sete cl
// 00725612  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00725615  c3                   ret 
// 00725616  8b12                 mov edx, dword ptr [edx]
// 00725618  33c9                 xor ecx, ecx
// 0072561a  83c001               add eax, 1
// 0072561d  83f820               cmp eax, 0x20
// 00725620  0f94c1               sete cl
// 00725623  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00725626  c3                   ret 
// 00725627  8b12                 mov edx, dword ptr [edx]
// 00725629  33c9                 xor ecx, ecx
// 0072562b  83c002               add eax, 2
// 0072562e  83f820               cmp eax, 0x20
// 00725631  0f94c1               sete cl
// 00725634  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00725637  c3                   ret 
// 00725638  8b12                 mov edx, dword ptr [edx]
// 0072563a  33c9                 xor ecx, ecx
// 0072563c  83c003               add eax, 3
// 0072563f  83f820               cmp eax, 0x20
// 00725642  0f94c1               sete cl
// 00725645  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00725648  c3                   ret 
// 00725649  8b12                 mov edx, dword ptr [edx]
// 0072564b  33c9                 xor ecx, ecx
// 0072564d  83c004               add eax, 4
// 00725650  83f820               cmp eax, 0x20
// 00725653  0f94c1               sete cl
// 00725656  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00725659  c3                   ret 
// 0072565a  83c005               add eax, 5
// 0072565d  8b12                 mov edx, dword ptr [edx]
// 0072565f  33c9                 xor ecx, ecx
// 00725661  83f820               cmp eax, 0x20
// 00725664  0f94c1               sete cl
// 00725667  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0072566a  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
