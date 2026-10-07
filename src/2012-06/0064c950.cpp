// roc 2012-06 0064c950  unit: seg_00640000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064c950
//
// 0064c950  8b442404             mov eax, dword ptr [esp + 4]
// 0064c954  8a4808               mov cl, byte ptr [eax + 8]
// 0064c957  f6c102               test cl, 2
// 0064c95a  0f84c6000000         je 0x64ca26
// 0064c960  8b10                 mov edx, dword ptr [eax]
// 0064c962  8a4009               mov al, byte ptr [eax + 9]
// 0064c965  56                   push esi
// 0064c966  3c08                 cmp al, 8
// 0064c968  753a                 jne 0x64c9a4
// 0064c96a  80f902               cmp cl, 2
// 0064c96d  7507                 jne 0x64c976
// 0064c96f  be03000000           mov esi, 3
// 0064c974  eb0e                 jmp 0x64c984
// 0064c976  80f906               cmp cl, 6
// 0064c979  0f85a6000000         jne 0x64ca25
// 0064c97f  be04000000           mov esi, 4
// 0064c984  85d2                 test edx, edx
// 0064c986  0f8699000000         jbe 0x64ca25
// 0064c98c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064c990  83c002               add eax, 2
// 0064c993  8a48ff               mov cl, byte ptr [eax - 1]
// 0064c996  0048fe               add byte ptr [eax - 2], cl
// 0064c999  0008                 add byte ptr [eax], cl
// 0064c99b  03c6                 add eax, esi
// 0064c99d  83ea01               sub edx, 1
// 0064c9a0  75f1                 jne 0x64c993
// 0064c9a2  5e                   pop esi
// 0064c9a3  c3                   ret 
// 0064c9a4  3c10                 cmp al, 0x10
// 0064c9a6  757d                 jne 0x64ca25
// 0064c9a8  55                   push ebp
// 0064c9a9  80f902               cmp cl, 2
// 0064c9ac  7507                 jne 0x64c9b5
// 0064c9ae  bd06000000           mov ebp, 6
// 0064c9b3  eb0a                 jmp 0x64c9bf
// 0064c9b5  80f906               cmp cl, 6
// 0064c9b8  756a                 jne 0x64ca24
// 0064c9ba  bd08000000           mov ebp, 8
// 0064c9bf  85d2                 test edx, edx
// 0064c9c1  7661                 jbe 0x64ca24
// 0064c9c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064c9c7  53                   push ebx
// 0064c9c8  57                   push edi
// 0064c9c9  40                   inc eax
// 0064c9ca  8bfa                 mov edi, edx
// 0064c9cc  8d642400             lea esp, [esp]
// 0064c9d0  0fb67001             movzx esi, byte ptr [eax + 1]
// 0064c9d4  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0064c9d8  0fb610               movzx edx, byte ptr [eax]
// 0064c9db  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0064c9df  c1e608               shl esi, 8
// 0064c9e2  0bf1                 or esi, ecx
// 0064c9e4  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0064c9e8  c1e108               shl ecx, 8
// 0064c9eb  0bca                 or ecx, edx
// 0064c9ed  0fb65003             movzx edx, byte ptr [eax + 3]
// 0064c9f1  c1e208               shl edx, 8
// 0064c9f4  0bd3                 or edx, ebx
// 0064c9f6  03ce                 add ecx, esi
// 0064c9f8  81e1ffff0000         and ecx, 0xffff
// 0064c9fe  03d6                 add edx, esi
// 0064ca00  81e2ffff0000         and edx, 0xffff
// 0064ca06  8bd9                 mov ebx, ecx
// 0064ca08  8808                 mov byte ptr [eax], cl
// 0064ca0a  8bca                 mov ecx, edx
// 0064ca0c  c1eb08               shr ebx, 8
// 0064ca0f  c1e908               shr ecx, 8
// 0064ca12  8858ff               mov byte ptr [eax - 1], bl
// 0064ca15  884803               mov byte ptr [eax + 3], cl
// 0064ca18  885004               mov byte ptr [eax + 4], dl
// 0064ca1b  03c5                 add eax, ebp
// 0064ca1d  83ef01               sub edi, 1
// 0064ca20  75ae                 jne 0x64c9d0
// 0064ca22  5f                   pop edi
// 0064ca23  5b                   pop ebx
// 0064ca24  5d                   pop ebp
// 0064ca25  5e                   pop esi
// 0064ca26  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
