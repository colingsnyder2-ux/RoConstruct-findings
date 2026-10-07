// roc 2009-06 0058e8b0  unit: seg_00580000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058e8b0
//
// 0058e8b0  8b442404             mov eax, dword ptr [esp + 4]
// 0058e8b4  8a4808               mov cl, byte ptr [eax + 8]
// 0058e8b7  f6c102               test cl, 2
// 0058e8ba  0f84c6000000         je 0x58e986
// 0058e8c0  8b10                 mov edx, dword ptr [eax]
// 0058e8c2  8a4009               mov al, byte ptr [eax + 9]
// 0058e8c5  56                   push esi
// 0058e8c6  3c08                 cmp al, 8
// 0058e8c8  753a                 jne 0x58e904
// 0058e8ca  80f902               cmp cl, 2
// 0058e8cd  7507                 jne 0x58e8d6
// 0058e8cf  be03000000           mov esi, 3
// 0058e8d4  eb0e                 jmp 0x58e8e4
// 0058e8d6  80f906               cmp cl, 6
// 0058e8d9  0f85a6000000         jne 0x58e985
// 0058e8df  be04000000           mov esi, 4
// 0058e8e4  85d2                 test edx, edx
// 0058e8e6  0f8699000000         jbe 0x58e985
// 0058e8ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058e8f0  83c002               add eax, 2
// 0058e8f3  8a48ff               mov cl, byte ptr [eax - 1]
// 0058e8f6  2848fe               sub byte ptr [eax - 2], cl
// 0058e8f9  2808                 sub byte ptr [eax], cl
// 0058e8fb  03c6                 add eax, esi
// 0058e8fd  83ea01               sub edx, 1
// 0058e900  75f1                 jne 0x58e8f3
// 0058e902  5e                   pop esi
// 0058e903  c3                   ret 
// 0058e904  3c10                 cmp al, 0x10
// 0058e906  757d                 jne 0x58e985
// 0058e908  55                   push ebp
// 0058e909  80f902               cmp cl, 2
// 0058e90c  7507                 jne 0x58e915
// 0058e90e  bd06000000           mov ebp, 6
// 0058e913  eb0a                 jmp 0x58e91f
// 0058e915  80f906               cmp cl, 6
// 0058e918  756a                 jne 0x58e984
// 0058e91a  bd08000000           mov ebp, 8
// 0058e91f  85d2                 test edx, edx
// 0058e921  7661                 jbe 0x58e984
// 0058e923  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058e927  53                   push ebx
// 0058e928  57                   push edi
// 0058e929  40                   inc eax
// 0058e92a  8bfa                 mov edi, edx
// 0058e92c  8d642400             lea esp, [esp]
// 0058e930  0fb67001             movzx esi, byte ptr [eax + 1]
// 0058e934  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0058e938  0fb610               movzx edx, byte ptr [eax]
// 0058e93b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0058e93f  c1e608               shl esi, 8
// 0058e942  0bf1                 or esi, ecx
// 0058e944  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0058e948  c1e108               shl ecx, 8
// 0058e94b  0bca                 or ecx, edx
// 0058e94d  0fb65003             movzx edx, byte ptr [eax + 3]
// 0058e951  c1e208               shl edx, 8
// 0058e954  0bd3                 or edx, ebx
// 0058e956  2bce                 sub ecx, esi
// 0058e958  81e1ffff0000         and ecx, 0xffff
// 0058e95e  2bd6                 sub edx, esi
// 0058e960  81e2ffff0000         and edx, 0xffff
// 0058e966  8bd9                 mov ebx, ecx
// 0058e968  8808                 mov byte ptr [eax], cl
// 0058e96a  8bca                 mov ecx, edx
// 0058e96c  c1eb08               shr ebx, 8
// 0058e96f  c1e908               shr ecx, 8
// 0058e972  8858ff               mov byte ptr [eax - 1], bl
// 0058e975  884803               mov byte ptr [eax + 3], cl
// 0058e978  885004               mov byte ptr [eax + 4], dl
// 0058e97b  03c5                 add eax, ebp
// 0058e97d  83ef01               sub edi, 1
// 0058e980  75ae                 jne 0x58e930
// 0058e982  5f                   pop edi
// 0058e983  5b                   pop ebx
// 0058e984  5d                   pop ebp
// 0058e985  5e                   pop esi
// 0058e986  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
