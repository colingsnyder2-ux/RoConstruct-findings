// from server: 100% by auto
// roc 2008-06 005206f0  unit: seg_00520000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005206f0
//
// 005206f0  56                   push esi
// 005206f1  8b742408             mov esi, dword ptr [esp + 8]
// 005206f5  807e0910             cmp byte ptr [esi + 9], 0x10
// 005206f9  753e                 jne 0x520739
// 005206fb  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 005206ff  0faf16               imul edx, dword ptr [esi]
// 00520702  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00520706  8bc8                 mov ecx, eax
// 00520708  85d2                 test edx, edx
// 0052070a  7612                 jbe 0x52071e
// 0052070c  57                   push edi
// 0052070d  8bfa                 mov edi, edx
// 0052070f  90                   nop 
// 00520710  8a10                 mov dl, byte ptr [eax]
// 00520712  8811                 mov byte ptr [ecx], dl
// 00520714  83c002               add eax, 2
// 00520717  41                   inc ecx
// 00520718  83ef01               sub edi, 1
// 0052071b  75f3                 jne 0x520710
// 0052071d  5f                   pop edi
// 0052071e  8a460a               mov al, byte ptr [esi + 0xa]
// 00520721  8ac8                 mov cl, al
// 00520723  02c9                 add cl, cl
// 00520725  02c9                 add cl, cl
// 00520727  0fb6d0               movzx edx, al
// 0052072a  02c9                 add cl, cl
// 0052072c  0faf16               imul edx, dword ptr [esi]
// 0052072f  c6460908             mov byte ptr [esi + 9], 8
// 00520733  884e0b               mov byte ptr [esi + 0xb], cl
// 00520736  895604               mov dword ptr [esi + 4], edx
// 00520739  5e                   pop esi
// 0052073a  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
