// roc 2007-03 00523c20  unit: seg_00520000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523c20
//
// 00523c20  56                   push esi
// 00523c21  33f6                 xor esi, esi
// 00523c23  33c0                 xor eax, eax
// 00523c25  85d2                 test edx, edx
// 00523c27  7e1b                 jle 0x523c44
// 00523c29  57                   push edi
// 00523c2a  83c118               add ecx, 0x18
// 00523c2d  8bfa                 mov edi, edx
// 00523c2f  90                   nop 
// 00523c30  8b11                 mov edx, dword ptr [ecx]
// 00523c32  3bd6                 cmp edx, esi
// 00523c34  7e05                 jle 0x523c3b
// 00523c36  8d41e8               lea eax, [ecx - 0x18]
// 00523c39  8bf2                 mov esi, edx
// 00523c3b  83c120               add ecx, 0x20
// 00523c3e  83ef01               sub edi, 1
// 00523c41  75ed                 jne 0x523c30
// 00523c43  5f                   pop edi
// 00523c44  5e                   pop esi
// 00523c45  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_biggest_volume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
