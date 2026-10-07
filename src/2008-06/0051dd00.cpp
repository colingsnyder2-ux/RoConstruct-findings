// roc 2008-06 0051dd00  unit: seg_00510000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dd00
//
// 0051dd00  53                   push ebx
// 0051dd01  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051dd05  83c8ff               or eax, 0xffffffff
// 0051dd08  33d2                 xor edx, edx
// 0051dd0a  f7f3                 div ebx
// 0051dd0c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051dd10  56                   push esi
// 0051dd11  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051dd15  57                   push edi
// 0051dd16  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 0051dd19  3bc8                 cmp ecx, eax
// 0051dd1b  7614                 jbe 0x51dd31
// 0051dd1d  68e8958200           push 0x8295e8
// 0051dd22  56                   push esi
// 0051dd23  e828bd0000           call 0x529a50
// 0051dd28  83c408               add esp, 8
// 0051dd2b  5f                   pop edi
// 0051dd2c  5e                   pop esi
// 0051dd2d  33c0                 xor eax, eax
// 0051dd2f  5b                   pop ebx
// 0051dd30  c3                   ret 
// 0051dd31  0fafcb               imul ecx, ebx
// 0051dd34  8bc7                 mov eax, edi
// 0051dd36  51                   push ecx
// 0051dd37  0d00001000           or eax, 0x100000
// 0051dd3c  56                   push esi
// 0051dd3d  89466c               mov dword ptr [esi + 0x6c], eax
// 0051dd40  e85bc70000           call 0x52a4a0
// 0051dd45  83c408               add esp, 8
// 0051dd48  897e6c               mov dword ptr [esi + 0x6c], edi
// 0051dd4b  5f                   pop edi
// 0051dd4c  5e                   pop esi
// 0051dd4d  5b                   pop ebx
// 0051dd4e  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
