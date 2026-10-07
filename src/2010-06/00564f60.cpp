// roc 2010-06 00564f60  unit: seg_00560000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564f60
//
// 00564f60  53                   push ebx
// 00564f61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00564f65  83c8ff               or eax, 0xffffffff
// 00564f68  33d2                 xor edx, edx
// 00564f6a  f7f3                 div ebx
// 00564f6c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00564f70  56                   push esi
// 00564f71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00564f75  57                   push edi
// 00564f76  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 00564f79  3bc8                 cmp ecx, eax
// 00564f7b  7614                 jbe 0x564f91
// 00564f7d  680416a200           push 0xa21604
// 00564f82  56                   push esi
// 00564f83  e8d8cb0000           call 0x571b60
// 00564f88  83c408               add esp, 8
// 00564f8b  5f                   pop edi
// 00564f8c  5e                   pop esi
// 00564f8d  33c0                 xor eax, eax
// 00564f8f  5b                   pop ebx
// 00564f90  c3                   ret 
// 00564f91  0fafcb               imul ecx, ebx
// 00564f94  8bc7                 mov eax, edi
// 00564f96  51                   push ecx
// 00564f97  0d00001000           or eax, 0x100000
// 00564f9c  56                   push esi
// 00564f9d  89466c               mov dword ptr [esi + 0x6c], eax
// 00564fa0  e8fbd50000           call 0x5725a0
// 00564fa5  83c408               add esp, 8
// 00564fa8  897e6c               mov dword ptr [esi + 0x6c], edi
// 00564fab  5f                   pop edi
// 00564fac  5e                   pop esi
// 00564fad  5b                   pop ebx
// 00564fae  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
