// roc 2011-06 0056e490  unit: seg_00560000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056e490
//
// 0056e490  8b442404             mov eax, dword ptr [esp + 4]
// 0056e494  8a4808               mov cl, byte ptr [eax + 8]
// 0056e497  f6c102               test cl, 2
// 0056e49a  0f84c6000000         je 0x56e566
// 0056e4a0  8b10                 mov edx, dword ptr [eax]
// 0056e4a2  8a4009               mov al, byte ptr [eax + 9]
// 0056e4a5  56                   push esi
// 0056e4a6  3c08                 cmp al, 8
// 0056e4a8  753a                 jne 0x56e4e4
// 0056e4aa  80f902               cmp cl, 2
// 0056e4ad  7507                 jne 0x56e4b6
// 0056e4af  be03000000           mov esi, 3
// 0056e4b4  eb0e                 jmp 0x56e4c4
// 0056e4b6  80f906               cmp cl, 6
// 0056e4b9  0f85a6000000         jne 0x56e565
// 0056e4bf  be04000000           mov esi, 4
// 0056e4c4  85d2                 test edx, edx
// 0056e4c6  0f8699000000         jbe 0x56e565
// 0056e4cc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e4d0  83c002               add eax, 2
// 0056e4d3  8a48ff               mov cl, byte ptr [eax - 1]
// 0056e4d6  2848fe               sub byte ptr [eax - 2], cl
// 0056e4d9  2808                 sub byte ptr [eax], cl
// 0056e4db  03c6                 add eax, esi
// 0056e4dd  83ea01               sub edx, 1
// 0056e4e0  75f1                 jne 0x56e4d3
// 0056e4e2  5e                   pop esi
// 0056e4e3  c3                   ret 
// 0056e4e4  3c10                 cmp al, 0x10
// 0056e4e6  757d                 jne 0x56e565
// 0056e4e8  55                   push ebp
// 0056e4e9  80f902               cmp cl, 2
// 0056e4ec  7507                 jne 0x56e4f5
// 0056e4ee  bd06000000           mov ebp, 6
// 0056e4f3  eb0a                 jmp 0x56e4ff
// 0056e4f5  80f906               cmp cl, 6
// 0056e4f8  756a                 jne 0x56e564
// 0056e4fa  bd08000000           mov ebp, 8
// 0056e4ff  85d2                 test edx, edx
// 0056e501  7661                 jbe 0x56e564
// 0056e503  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e507  53                   push ebx
// 0056e508  57                   push edi
// 0056e509  40                   inc eax
// 0056e50a  8bfa                 mov edi, edx
// 0056e50c  8d642400             lea esp, [esp]
// 0056e510  0fb67001             movzx esi, byte ptr [eax + 1]
// 0056e514  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0056e518  0fb610               movzx edx, byte ptr [eax]
// 0056e51b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0056e51f  c1e608               shl esi, 8
// 0056e522  0bf1                 or esi, ecx
// 0056e524  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0056e528  c1e108               shl ecx, 8
// 0056e52b  0bca                 or ecx, edx
// 0056e52d  0fb65003             movzx edx, byte ptr [eax + 3]
// 0056e531  c1e208               shl edx, 8
// 0056e534  0bd3                 or edx, ebx
// 0056e536  2bce                 sub ecx, esi
// 0056e538  81e1ffff0000         and ecx, 0xffff
// 0056e53e  2bd6                 sub edx, esi
// 0056e540  81e2ffff0000         and edx, 0xffff
// 0056e546  8bd9                 mov ebx, ecx
// 0056e548  8808                 mov byte ptr [eax], cl
// 0056e54a  8bca                 mov ecx, edx
// 0056e54c  c1eb08               shr ebx, 8
// 0056e54f  c1e908               shr ecx, 8
// 0056e552  8858ff               mov byte ptr [eax - 1], bl
// 0056e555  884803               mov byte ptr [eax + 3], cl
// 0056e558  885004               mov byte ptr [eax + 4], dl
// 0056e55b  03c5                 add eax, ebp
// 0056e55d  83ef01               sub edi, 1
// 0056e560  75ae                 jne 0x56e510
// 0056e562  5f                   pop edi
// 0056e563  5b                   pop ebx
// 0056e564  5d                   pop ebp
// 0056e565  5e                   pop esi
// 0056e566  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
