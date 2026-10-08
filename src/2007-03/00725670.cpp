// roc 2007-03 00725670  unit: seg_00720000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725670
//
// 00725670  33c0                 xor eax, eax
// 00725672  56                   push esi
// 00725673  8bf1                 mov esi, ecx
// 00725675  83e601               and esi, 1
// 00725678  0bc6                 or eax, esi
// 0072567a  83ea01               sub edx, 1
// 0072567d  d1e9                 shr ecx, 1
// 0072567f  03c0                 add eax, eax
// 00725681  85d2                 test edx, edx
// 00725683  7fee                 jg 0x725673
// 00725685  d1e8                 shr eax, 1
// 00725687  5e                   pop esi
// 00725688  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_reverse)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
