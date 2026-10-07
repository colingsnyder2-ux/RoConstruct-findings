// roc 2012-06 00649880  unit: seg_00640000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649880
//
// 00649880  56                   push esi
// 00649881  8b742408             mov esi, dword ptr [esp + 8]
// 00649885  807e0910             cmp byte ptr [esi + 9], 0x10
// 00649889  753e                 jne 0x6498c9
// 0064988b  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0064988f  0faf16               imul edx, dword ptr [esi]
// 00649892  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00649896  8bc8                 mov ecx, eax
// 00649898  85d2                 test edx, edx
// 0064989a  7612                 jbe 0x6498ae
// 0064989c  57                   push edi
// 0064989d  8bfa                 mov edi, edx
// 0064989f  90                   nop 
// 006498a0  8a10                 mov dl, byte ptr [eax]
// 006498a2  8811                 mov byte ptr [ecx], dl
// 006498a4  83c002               add eax, 2
// 006498a7  41                   inc ecx
// 006498a8  83ef01               sub edi, 1
// 006498ab  75f3                 jne 0x6498a0
// 006498ad  5f                   pop edi
// 006498ae  8a460a               mov al, byte ptr [esi + 0xa]
// 006498b1  8ac8                 mov cl, al
// 006498b3  02c9                 add cl, cl
// 006498b5  02c9                 add cl, cl
// 006498b7  0fb6d0               movzx edx, al
// 006498ba  02c9                 add cl, cl
// 006498bc  0faf16               imul edx, dword ptr [esi]
// 006498bf  c6460908             mov byte ptr [esi + 9], 8
// 006498c3  884e0b               mov byte ptr [esi + 0xb], cl
// 006498c6  895604               mov dword ptr [esi + 4], edx
// 006498c9  5e                   pop esi
// 006498ca  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
