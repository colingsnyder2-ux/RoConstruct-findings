// roc 2012-06 0063de10  unit: seg_00630000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063de10
//
// 0063de10  53                   push ebx
// 0063de11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0063de15  83c8ff               or eax, 0xffffffff
// 0063de18  33d2                 xor edx, edx
// 0063de1a  f7f3                 div ebx
// 0063de1c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063de20  56                   push esi
// 0063de21  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063de25  57                   push edi
// 0063de26  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 0063de29  3bc8                 cmp ecx, eax
// 0063de2b  7614                 jbe 0x63de41
// 0063de2d  68bc43b800           push 0xb843bc
// 0063de32  56                   push esi
// 0063de33  e828040100           call 0x64e260
// 0063de38  83c408               add esp, 8
// 0063de3b  5f                   pop edi
// 0063de3c  5e                   pop esi
// 0063de3d  33c0                 xor eax, eax
// 0063de3f  5b                   pop ebx
// 0063de40  c3                   ret 
// 0063de41  0fafcb               imul ecx, ebx
// 0063de44  8bc7                 mov eax, edi
// 0063de46  51                   push ecx
// 0063de47  0d00001000           or eax, 0x100000
// 0063de4c  56                   push esi
// 0063de4d  89466c               mov dword ptr [esi + 0x6c], eax
// 0063de50  e86b060100           call 0x64e4c0
// 0063de55  83c408               add esp, 8
// 0063de58  897e6c               mov dword ptr [esi + 0x6c], edi
// 0063de5b  5f                   pop edi
// 0063de5c  5e                   pop esi
// 0063de5d  5b                   pop ebx
// 0063de5e  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
