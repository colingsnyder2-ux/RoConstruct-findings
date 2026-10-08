// from server: 100% by auto
// roc 2009-06 00584780  unit: seg_00580000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584780
//
// 00584780  56                   push esi
// 00584781  8b742408             mov esi, dword ptr [esp + 8]
// 00584785  807e0910             cmp byte ptr [esi + 9], 0x10
// 00584789  753e                 jne 0x5847c9
// 0058478b  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0058478f  0faf16               imul edx, dword ptr [esi]
// 00584792  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00584796  8bc8                 mov ecx, eax
// 00584798  85d2                 test edx, edx
// 0058479a  7612                 jbe 0x5847ae
// 0058479c  57                   push edi
// 0058479d  8bfa                 mov edi, edx
// 0058479f  90                   nop 
// 005847a0  8a10                 mov dl, byte ptr [eax]
// 005847a2  8811                 mov byte ptr [ecx], dl
// 005847a4  83c002               add eax, 2
// 005847a7  41                   inc ecx
// 005847a8  83ef01               sub edi, 1
// 005847ab  75f3                 jne 0x5847a0
// 005847ad  5f                   pop edi
// 005847ae  8a460a               mov al, byte ptr [esi + 0xa]
// 005847b1  8ac8                 mov cl, al
// 005847b3  02c9                 add cl, cl
// 005847b5  02c9                 add cl, cl
// 005847b7  0fb6d0               movzx edx, al
// 005847ba  02c9                 add cl, cl
// 005847bc  0faf16               imul edx, dword ptr [esi]
// 005847bf  c6460908             mov byte ptr [esi + 9], 8
// 005847c3  884e0b               mov byte ptr [esi + 0xb], cl
// 005847c6  895604               mov dword ptr [esi + 4], edx
// 005847c9  5e                   pop esi
// 005847ca  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
