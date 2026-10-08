// from server: 100% by auto
// roc 2012-06 00659ba0  unit: seg_00650000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00659ba0
//
// 00659ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00659ba4  8a4808               mov cl, byte ptr [eax + 8]
// 00659ba7  f6c102               test cl, 2
// 00659baa  0f84c6000000         je 0x659c76
// 00659bb0  8b10                 mov edx, dword ptr [eax]
// 00659bb2  8a4009               mov al, byte ptr [eax + 9]
// 00659bb5  56                   push esi
// 00659bb6  3c08                 cmp al, 8
// 00659bb8  753a                 jne 0x659bf4
// 00659bba  80f902               cmp cl, 2
// 00659bbd  7507                 jne 0x659bc6
// 00659bbf  be03000000           mov esi, 3
// 00659bc4  eb0e                 jmp 0x659bd4
// 00659bc6  80f906               cmp cl, 6
// 00659bc9  0f85a6000000         jne 0x659c75
// 00659bcf  be04000000           mov esi, 4
// 00659bd4  85d2                 test edx, edx
// 00659bd6  0f8699000000         jbe 0x659c75
// 00659bdc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00659be0  83c002               add eax, 2
// 00659be3  8a48ff               mov cl, byte ptr [eax - 1]
// 00659be6  2848fe               sub byte ptr [eax - 2], cl
// 00659be9  2808                 sub byte ptr [eax], cl
// 00659beb  03c6                 add eax, esi
// 00659bed  83ea01               sub edx, 1
// 00659bf0  75f1                 jne 0x659be3
// 00659bf2  5e                   pop esi
// 00659bf3  c3                   ret 
// 00659bf4  3c10                 cmp al, 0x10
// 00659bf6  757d                 jne 0x659c75
// 00659bf8  55                   push ebp
// 00659bf9  80f902               cmp cl, 2
// 00659bfc  7507                 jne 0x659c05
// 00659bfe  bd06000000           mov ebp, 6
// 00659c03  eb0a                 jmp 0x659c0f
// 00659c05  80f906               cmp cl, 6
// 00659c08  756a                 jne 0x659c74
// 00659c0a  bd08000000           mov ebp, 8
// 00659c0f  85d2                 test edx, edx
// 00659c11  7661                 jbe 0x659c74
// 00659c13  8b442410             mov eax, dword ptr [esp + 0x10]
// 00659c17  53                   push ebx
// 00659c18  57                   push edi
// 00659c19  40                   inc eax
// 00659c1a  8bfa                 mov edi, edx
// 00659c1c  8d642400             lea esp, [esp]
// 00659c20  0fb67001             movzx esi, byte ptr [eax + 1]
// 00659c24  0fb64802             movzx ecx, byte ptr [eax + 2]
// 00659c28  0fb610               movzx edx, byte ptr [eax]
// 00659c2b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 00659c2f  c1e608               shl esi, 8
// 00659c32  0bf1                 or esi, ecx
// 00659c34  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00659c38  c1e108               shl ecx, 8
// 00659c3b  0bca                 or ecx, edx
// 00659c3d  0fb65003             movzx edx, byte ptr [eax + 3]
// 00659c41  c1e208               shl edx, 8
// 00659c44  0bd3                 or edx, ebx
// 00659c46  2bce                 sub ecx, esi
// 00659c48  81e1ffff0000         and ecx, 0xffff
// 00659c4e  2bd6                 sub edx, esi
// 00659c50  81e2ffff0000         and edx, 0xffff
// 00659c56  8bd9                 mov ebx, ecx
// 00659c58  8808                 mov byte ptr [eax], cl
// 00659c5a  8bca                 mov ecx, edx
// 00659c5c  c1eb08               shr ebx, 8
// 00659c5f  c1e908               shr ecx, 8
// 00659c62  8858ff               mov byte ptr [eax - 1], bl
// 00659c65  884803               mov byte ptr [eax + 3], cl
// 00659c68  885004               mov byte ptr [eax + 4], dl
// 00659c6b  03c5                 add eax, ebp
// 00659c6d  83ef01               sub edi, 1
// 00659c70  75ae                 jne 0x659c20
// 00659c72  5f                   pop edi
// 00659c73  5b                   pop ebx
// 00659c74  5d                   pop ebp
// 00659c75  5e                   pop esi
// 00659c76  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
