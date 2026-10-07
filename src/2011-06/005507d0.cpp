// roc 2011-06 005507d0  unit: seg_00550000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005507d0
//
// 005507d0  53                   push ebx
// 005507d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005507d5  83c8ff               or eax, 0xffffffff
// 005507d8  33d2                 xor edx, edx
// 005507da  f7f3                 div ebx
// 005507dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005507e0  56                   push esi
// 005507e1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005507e5  57                   push edi
// 005507e6  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 005507e9  3bc8                 cmp ecx, eax
// 005507eb  7614                 jbe 0x550801
// 005507ed  68c404a800           push 0xa804c4
// 005507f2  56                   push esi
// 005507f3  e8e80b0100           call 0x5613e0
// 005507f8  83c408               add esp, 8
// 005507fb  5f                   pop edi
// 005507fc  5e                   pop esi
// 005507fd  33c0                 xor eax, eax
// 005507ff  5b                   pop ebx
// 00550800  c3                   ret 
// 00550801  0fafcb               imul ecx, ebx
// 00550804  8bc7                 mov eax, edi
// 00550806  51                   push ecx
// 00550807  0d00001000           or eax, 0x100000
// 0055080c  56                   push esi
// 0055080d  89466c               mov dword ptr [esi + 0x6c], eax
// 00550810  e82b0e0100           call 0x561640
// 00550815  83c408               add esp, 8
// 00550818  897e6c               mov dword ptr [esi + 0x6c], edi
// 0055081b  5f                   pop edi
// 0055081c  5e                   pop esi
// 0055081d  5b                   pop ebx
// 0055081e  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
