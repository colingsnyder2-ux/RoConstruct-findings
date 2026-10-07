// roc 2011-06 0055ca00  unit: seg_00550000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055ca00
//
// 0055ca00  56                   push esi
// 0055ca01  8b742408             mov esi, dword ptr [esp + 8]
// 0055ca05  807e0910             cmp byte ptr [esi + 9], 0x10
// 0055ca09  753e                 jne 0x55ca49
// 0055ca0b  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0055ca0f  0faf16               imul edx, dword ptr [esi]
// 0055ca12  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055ca16  8bc8                 mov ecx, eax
// 0055ca18  85d2                 test edx, edx
// 0055ca1a  7612                 jbe 0x55ca2e
// 0055ca1c  57                   push edi
// 0055ca1d  8bfa                 mov edi, edx
// 0055ca1f  90                   nop 
// 0055ca20  8a10                 mov dl, byte ptr [eax]
// 0055ca22  8811                 mov byte ptr [ecx], dl
// 0055ca24  83c002               add eax, 2
// 0055ca27  41                   inc ecx
// 0055ca28  83ef01               sub edi, 1
// 0055ca2b  75f3                 jne 0x55ca20
// 0055ca2d  5f                   pop edi
// 0055ca2e  8a460a               mov al, byte ptr [esi + 0xa]
// 0055ca31  8ac8                 mov cl, al
// 0055ca33  02c9                 add cl, cl
// 0055ca35  02c9                 add cl, cl
// 0055ca37  0fb6d0               movzx edx, al
// 0055ca3a  02c9                 add cl, cl
// 0055ca3c  0faf16               imul edx, dword ptr [esi]
// 0055ca3f  c6460908             mov byte ptr [esi + 9], 8
// 0055ca43  884e0b               mov byte ptr [esi + 0xb], cl
// 0055ca46  895604               mov dword ptr [esi + 4], edx
// 0055ca49  5e                   pop esi
// 0055ca4a  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
