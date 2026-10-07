// roc 2007-08 00519330  unit: seg_00510000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519330
//
// 00519330  56                   push esi
// 00519331  8b742408             mov esi, dword ptr [esp + 8]
// 00519335  807e0910             cmp byte ptr [esi + 9], 0x10
// 00519339  7540                 jne 0x51937b
// 0051933b  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0051933f  0faf16               imul edx, dword ptr [esi]
// 00519342  85d2                 test edx, edx
// 00519344  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00519348  8bc8                 mov ecx, eax
// 0051934a  7614                 jbe 0x519360
// 0051934c  57                   push edi
// 0051934d  8bfa                 mov edi, edx
// 0051934f  90                   nop 
// 00519350  8a10                 mov dl, byte ptr [eax]
// 00519352  8811                 mov byte ptr [ecx], dl
// 00519354  83c002               add eax, 2
// 00519357  83c101               add ecx, 1
// 0051935a  83ef01               sub edi, 1
// 0051935d  75f1                 jne 0x519350
// 0051935f  5f                   pop edi
// 00519360  8a460a               mov al, byte ptr [esi + 0xa]
// 00519363  8ac8                 mov cl, al
// 00519365  02c9                 add cl, cl
// 00519367  02c9                 add cl, cl
// 00519369  0fb6d0               movzx edx, al
// 0051936c  02c9                 add cl, cl
// 0051936e  0faf16               imul edx, dword ptr [esi]
// 00519371  c6460908             mov byte ptr [esi + 9], 8
// 00519375  884e0b               mov byte ptr [esi + 0xb], cl
// 00519378  895604               mov dword ptr [esi + 4], edx
// 0051937b  5e                   pop esi
// 0051937c  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
