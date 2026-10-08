// roc 2009-12 00606530  unit: seg_00600000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00606530
//
// 00606530  56                   push esi
// 00606531  8b742408             mov esi, dword ptr [esp + 8]
// 00606535  807e0910             cmp byte ptr [esi + 9], 0x10
// 00606539  753e                 jne 0x606579
// 0060653b  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0060653f  0faf16               imul edx, dword ptr [esi]
// 00606542  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00606546  8bc8                 mov ecx, eax
// 00606548  85d2                 test edx, edx
// 0060654a  7612                 jbe 0x60655e
// 0060654c  57                   push edi
// 0060654d  8bfa                 mov edi, edx
// 0060654f  90                   nop 
// 00606550  8a10                 mov dl, byte ptr [eax]
// 00606552  8811                 mov byte ptr [ecx], dl
// 00606554  83c002               add eax, 2
// 00606557  41                   inc ecx
// 00606558  83ef01               sub edi, 1
// 0060655b  75f3                 jne 0x606550
// 0060655d  5f                   pop edi
// 0060655e  8a460a               mov al, byte ptr [esi + 0xa]
// 00606561  8ac8                 mov cl, al
// 00606563  02c9                 add cl, cl
// 00606565  02c9                 add cl, cl
// 00606567  0fb6d0               movzx edx, al
// 0060656a  02c9                 add cl, cl
// 0060656c  0faf16               imul edx, dword ptr [esi]
// 0060656f  c6460908             mov byte ptr [esi + 9], 8
// 00606573  884e0b               mov byte ptr [esi + 0xb], cl
// 00606576  895604               mov dword ptr [esi + 4], edx
// 00606579  5e                   pop esi
// 0060657a  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
