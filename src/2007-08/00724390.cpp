// from server: 100% by auto
// roc 2007-08 00724390  unit: CXTIconHandle  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724390
//
// 00724390  33c0                 xor eax, eax
// 00724392  56                   push esi
// 00724393  8bf1                 mov esi, ecx
// 00724395  83e601               and esi, 1
// 00724398  0bc6                 or eax, esi
// 0072439a  83ea01               sub edx, 1
// 0072439d  d1e9                 shr ecx, 1
// 0072439f  03c0                 add eax, eax
// 007243a1  85d2                 test edx, edx
// 007243a3  7fee                 jg 0x724393
// 007243a5  d1e8                 shr eax, 1
// 007243a7  5e                   pop esi
// 007243a8  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_reverse)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
