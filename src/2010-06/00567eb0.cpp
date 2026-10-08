// from server: 100% by auto
// roc 2010-06 00567eb0  unit: seg_00560000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567eb0
//
// 00567eb0  56                   push esi
// 00567eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00567eb5  807e0910             cmp byte ptr [esi + 9], 0x10
// 00567eb9  753e                 jne 0x567ef9
// 00567ebb  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00567ebf  0faf16               imul edx, dword ptr [esi]
// 00567ec2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00567ec6  8bc8                 mov ecx, eax
// 00567ec8  85d2                 test edx, edx
// 00567eca  7612                 jbe 0x567ede
// 00567ecc  57                   push edi
// 00567ecd  8bfa                 mov edi, edx
// 00567ecf  90                   nop 
// 00567ed0  8a10                 mov dl, byte ptr [eax]
// 00567ed2  8811                 mov byte ptr [ecx], dl
// 00567ed4  83c002               add eax, 2
// 00567ed7  41                   inc ecx
// 00567ed8  83ef01               sub edi, 1
// 00567edb  75f3                 jne 0x567ed0
// 00567edd  5f                   pop edi
// 00567ede  8a460a               mov al, byte ptr [esi + 0xa]
// 00567ee1  8ac8                 mov cl, al
// 00567ee3  02c9                 add cl, cl
// 00567ee5  02c9                 add cl, cl
// 00567ee7  0fb6d0               movzx edx, al
// 00567eea  02c9                 add cl, cl
// 00567eec  0faf16               imul edx, dword ptr [esi]
// 00567eef  c6460908             mov byte ptr [esi + 9], 8
// 00567ef3  884e0b               mov byte ptr [esi + 0xb], cl
// 00567ef6  895604               mov dword ptr [esi + 4], edx
// 00567ef9  5e                   pop esi
// 00567efa  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_chop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
