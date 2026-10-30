// from server: 100% by auto
// roc 2007-08 00528f20  unit: seg_00520000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528f20
//
// 00528f20  56                   push esi
// 00528f21  33f6                 xor esi, esi
// 00528f23  33c0                 xor eax, eax
// 00528f25  85d2                 test edx, edx
// 00528f27  7e21                 jle 0x528f4a
// 00528f29  57                   push edi
// 00528f2a  83c11c               add ecx, 0x1c
// 00528f2d  8bfa                 mov edi, edx
// 00528f2f  90                   nop 
// 00528f30  8b11                 mov edx, dword ptr [ecx]
// 00528f32  3bd6                 cmp edx, esi
// 00528f34  7e0b                 jle 0x528f41
// 00528f36  8379fc00             cmp dword ptr [ecx - 4], 0
// 00528f3a  7e05                 jle 0x528f41
// 00528f3c  8d41e4               lea eax, [ecx - 0x1c]
// 00528f3f  8bf2                 mov esi, edx
// 00528f41  83c120               add ecx, 0x20
// 00528f44  83ef01               sub edi, 1
// 00528f47  75e7                 jne 0x528f30
// 00528f49  5f                   pop edi
// 00528f4a  5e                   pop esi
// 00528f4b  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_biggest_color_pop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
