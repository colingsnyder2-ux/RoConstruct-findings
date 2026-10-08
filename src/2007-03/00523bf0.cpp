// roc 2007-03 00523bf0  unit: seg_00520000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523bf0
//
// 00523bf0  56                   push esi
// 00523bf1  33f6                 xor esi, esi
// 00523bf3  33c0                 xor eax, eax
// 00523bf5  85d2                 test edx, edx
// 00523bf7  7e21                 jle 0x523c1a
// 00523bf9  57                   push edi
// 00523bfa  83c11c               add ecx, 0x1c
// 00523bfd  8bfa                 mov edi, edx
// 00523bff  90                   nop 
// 00523c00  8b11                 mov edx, dword ptr [ecx]
// 00523c02  3bd6                 cmp edx, esi
// 00523c04  7e0b                 jle 0x523c11
// 00523c06  8379fc00             cmp dword ptr [ecx - 4], 0
// 00523c0a  7e05                 jle 0x523c11
// 00523c0c  8d41e4               lea eax, [ecx - 0x1c]
// 00523c0f  8bf2                 mov esi, edx
// 00523c11  83c120               add ecx, 0x20
// 00523c14  83ef01               sub edi, 1
// 00523c17  75e7                 jne 0x523c00
// 00523c19  5f                   pop edi
// 00523c1a  5e                   pop esi
// 00523c1b  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_biggest_color_pop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
