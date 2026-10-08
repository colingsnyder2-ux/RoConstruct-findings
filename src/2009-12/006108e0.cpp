// roc 2009-12 006108e0  unit: seg_00610000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006108e0
//
// 006108e0  8b442404             mov eax, dword ptr [esp + 4]
// 006108e4  8a4808               mov cl, byte ptr [eax + 8]
// 006108e7  f6c102               test cl, 2
// 006108ea  0f84c6000000         je 0x6109b6
// 006108f0  8b10                 mov edx, dword ptr [eax]
// 006108f2  8a4009               mov al, byte ptr [eax + 9]
// 006108f5  56                   push esi
// 006108f6  3c08                 cmp al, 8
// 006108f8  753a                 jne 0x610934
// 006108fa  80f902               cmp cl, 2
// 006108fd  7507                 jne 0x610906
// 006108ff  be03000000           mov esi, 3
// 00610904  eb0e                 jmp 0x610914
// 00610906  80f906               cmp cl, 6
// 00610909  0f85a6000000         jne 0x6109b5
// 0061090f  be04000000           mov esi, 4
// 00610914  85d2                 test edx, edx
// 00610916  0f8699000000         jbe 0x6109b5
// 0061091c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00610920  83c002               add eax, 2
// 00610923  8a48ff               mov cl, byte ptr [eax - 1]
// 00610926  2848fe               sub byte ptr [eax - 2], cl
// 00610929  2808                 sub byte ptr [eax], cl
// 0061092b  03c6                 add eax, esi
// 0061092d  83ea01               sub edx, 1
// 00610930  75f1                 jne 0x610923
// 00610932  5e                   pop esi
// 00610933  c3                   ret 
// 00610934  3c10                 cmp al, 0x10
// 00610936  757d                 jne 0x6109b5
// 00610938  55                   push ebp
// 00610939  80f902               cmp cl, 2
// 0061093c  7507                 jne 0x610945
// 0061093e  bd06000000           mov ebp, 6
// 00610943  eb0a                 jmp 0x61094f
// 00610945  80f906               cmp cl, 6
// 00610948  756a                 jne 0x6109b4
// 0061094a  bd08000000           mov ebp, 8
// 0061094f  85d2                 test edx, edx
// 00610951  7661                 jbe 0x6109b4
// 00610953  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610957  53                   push ebx
// 00610958  57                   push edi
// 00610959  40                   inc eax
// 0061095a  8bfa                 mov edi, edx
// 0061095c  8d642400             lea esp, [esp]
// 00610960  0fb67001             movzx esi, byte ptr [eax + 1]
// 00610964  0fb64802             movzx ecx, byte ptr [eax + 2]
// 00610968  0fb610               movzx edx, byte ptr [eax]
// 0061096b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0061096f  c1e608               shl esi, 8
// 00610972  0bf1                 or esi, ecx
// 00610974  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00610978  c1e108               shl ecx, 8
// 0061097b  0bca                 or ecx, edx
// 0061097d  0fb65003             movzx edx, byte ptr [eax + 3]
// 00610981  c1e208               shl edx, 8
// 00610984  0bd3                 or edx, ebx
// 00610986  2bce                 sub ecx, esi
// 00610988  81e1ffff0000         and ecx, 0xffff
// 0061098e  2bd6                 sub edx, esi
// 00610990  81e2ffff0000         and edx, 0xffff
// 00610996  8bd9                 mov ebx, ecx
// 00610998  8808                 mov byte ptr [eax], cl
// 0061099a  8bca                 mov ecx, edx
// 0061099c  c1eb08               shr ebx, 8
// 0061099f  c1e908               shr ecx, 8
// 006109a2  8858ff               mov byte ptr [eax - 1], bl
// 006109a5  884803               mov byte ptr [eax + 3], cl
// 006109a8  885004               mov byte ptr [eax + 4], dl
// 006109ab  03c5                 add eax, ebp
// 006109ad  83ef01               sub edi, 1
// 006109b0  75ae                 jne 0x610960
// 006109b2  5f                   pop edi
// 006109b3  5b                   pop ebx
// 006109b4  5d                   pop ebp
// 006109b5  5e                   pop esi
// 006109b6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
