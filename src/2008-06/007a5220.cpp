// roc 2008-06 007a5220  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5220
//
// 007a5220  33c0                 xor eax, eax
// 007a5222  56                   push esi
// 007a5223  8bf1                 mov esi, ecx
// 007a5225  83e601               and esi, 1
// 007a5228  0bc6                 or eax, esi
// 007a522a  4a                   dec edx
// 007a522b  d1e9                 shr ecx, 1
// 007a522d  03c0                 add eax, eax
// 007a522f  85d2                 test edx, edx
// 007a5231  7ff0                 jg 0x7a5223
// 007a5233  d1e8                 shr eax, 1
// 007a5235  5e                   pop esi
// 007a5236  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
