// from server: 100% by auto
// roc 2007-08 007242c0  unit: CXTIconHandle  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007242c0
//
// 007242c0  33c0                 xor eax, eax
// 007242c2  8d8a94000000         lea ecx, [edx + 0x94]
// 007242c8  66833900             cmp word ptr [ecx], 0
// 007242cc  750b                 jne 0x7242d9
// 007242ce  83c001               add eax, 1
// 007242d1  83c104               add ecx, 4
// 007242d4  83f809               cmp eax, 9
// 007242d7  7cef                 jl 0x7242c8
// 007242d9  83f809               cmp eax, 9
// 007242dc  0f859b000000         jne 0x72437d
// 007242e2  b80e000000           mov eax, 0xe
// 007242e7  8d8ad0000000         lea ecx, [edx + 0xd0]
// 007242ed  8d4900               lea ecx, [ecx]
// 007242f0  668379fc00           cmp word ptr [ecx - 4], 0
// 007242f5  0f8582000000         jne 0x72437d
// 007242fb  66833900             cmp word ptr [ecx], 0
// 007242ff  7535                 jne 0x724336
// 00724301  6683790400           cmp word ptr [ecx + 4], 0
// 00724306  753f                 jne 0x724347
// 00724308  6683790800           cmp word ptr [ecx + 8], 0
// 0072430d  7549                 jne 0x724358
// 0072430f  6683790c00           cmp word ptr [ecx + 0xc], 0
// 00724314  7553                 jne 0x724369
// 00724316  6683791000           cmp word ptr [ecx + 0x10], 0
// 0072431b  755d                 jne 0x72437a
// 0072431d  83c006               add eax, 6
// 00724320  83c118               add ecx, 0x18
// 00724323  83f820               cmp eax, 0x20
// 00724326  7cc8                 jl 0x7242f0
// 00724328  8b12                 mov edx, dword ptr [edx]
// 0072432a  33c9                 xor ecx, ecx
// 0072432c  83f820               cmp eax, 0x20
// 0072432f  0f94c1               sete cl
// 00724332  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00724335  c3                   ret 
// 00724336  8b12                 mov edx, dword ptr [edx]
// 00724338  33c9                 xor ecx, ecx
// 0072433a  83c001               add eax, 1
// 0072433d  83f820               cmp eax, 0x20
// 00724340  0f94c1               sete cl
// 00724343  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00724346  c3                   ret 
// 00724347  8b12                 mov edx, dword ptr [edx]
// 00724349  33c9                 xor ecx, ecx
// 0072434b  83c002               add eax, 2
// 0072434e  83f820               cmp eax, 0x20
// 00724351  0f94c1               sete cl
// 00724354  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00724357  c3                   ret 
// 00724358  8b12                 mov edx, dword ptr [edx]
// 0072435a  33c9                 xor ecx, ecx
// 0072435c  83c003               add eax, 3
// 0072435f  83f820               cmp eax, 0x20
// 00724362  0f94c1               sete cl
// 00724365  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00724368  c3                   ret 
// 00724369  8b12                 mov edx, dword ptr [edx]
// 0072436b  33c9                 xor ecx, ecx
// 0072436d  83c004               add eax, 4
// 00724370  83f820               cmp eax, 0x20
// 00724373  0f94c1               sete cl
// 00724376  894a2c               mov dword ptr [edx + 0x2c], ecx
// 00724379  c3                   ret 
// 0072437a  83c005               add eax, 5
// 0072437d  8b12                 mov edx, dword ptr [edx]
// 0072437f  33c9                 xor ecx, ecx
// 00724381  83f820               cmp eax, 0x20
// 00724384  0f94c1               sete cl
// 00724387  894a2c               mov dword ptr [edx + 0x2c], ecx
// 0072438a  c3                   ret 
// library zlib-1.2.3/trees.c (function _set_data_type)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
