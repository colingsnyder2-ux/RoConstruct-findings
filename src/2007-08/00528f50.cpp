// from server: 100% by auto
// roc 2007-08 00528f50  unit: seg_00520000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528f50
//
// 00528f50  56                   push esi
// 00528f51  33f6                 xor esi, esi
// 00528f53  33c0                 xor eax, eax
// 00528f55  85d2                 test edx, edx
// 00528f57  7e1b                 jle 0x528f74
// 00528f59  57                   push edi
// 00528f5a  83c118               add ecx, 0x18
// 00528f5d  8bfa                 mov edi, edx
// 00528f5f  90                   nop 
// 00528f60  8b11                 mov edx, dword ptr [ecx]
// 00528f62  3bd6                 cmp edx, esi
// 00528f64  7e05                 jle 0x528f6b
// 00528f66  8d41e8               lea eax, [ecx - 0x18]
// 00528f69  8bf2                 mov esi, edx
// 00528f6b  83c120               add ecx, 0x20
// 00528f6e  83ef01               sub edi, 1
// 00528f71  75ed                 jne 0x528f60
// 00528f73  5f                   pop edi
// 00528f74  5e                   pop esi
// 00528f75  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_biggest_volume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
