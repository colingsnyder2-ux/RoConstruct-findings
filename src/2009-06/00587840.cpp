// from server: 100% by auto
// roc 2009-06 00587840  unit: seg_00580000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00587840
//
// 00587840  8b442404             mov eax, dword ptr [esp + 4]
// 00587844  8a4808               mov cl, byte ptr [eax + 8]
// 00587847  f6c102               test cl, 2
// 0058784a  0f84c6000000         je 0x587916
// 00587850  8b10                 mov edx, dword ptr [eax]
// 00587852  8a4009               mov al, byte ptr [eax + 9]
// 00587855  56                   push esi
// 00587856  3c08                 cmp al, 8
// 00587858  753a                 jne 0x587894
// 0058785a  80f902               cmp cl, 2
// 0058785d  7507                 jne 0x587866
// 0058785f  be03000000           mov esi, 3
// 00587864  eb0e                 jmp 0x587874
// 00587866  80f906               cmp cl, 6
// 00587869  0f85a6000000         jne 0x587915
// 0058786f  be04000000           mov esi, 4
// 00587874  85d2                 test edx, edx
// 00587876  0f8699000000         jbe 0x587915
// 0058787c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00587880  83c002               add eax, 2
// 00587883  8a48ff               mov cl, byte ptr [eax - 1]
// 00587886  0048fe               add byte ptr [eax - 2], cl
// 00587889  0008                 add byte ptr [eax], cl
// 0058788b  03c6                 add eax, esi
// 0058788d  83ea01               sub edx, 1
// 00587890  75f1                 jne 0x587883
// 00587892  5e                   pop esi
// 00587893  c3                   ret 
// 00587894  3c10                 cmp al, 0x10
// 00587896  757d                 jne 0x587915
// 00587898  55                   push ebp
// 00587899  80f902               cmp cl, 2
// 0058789c  7507                 jne 0x5878a5
// 0058789e  bd06000000           mov ebp, 6
// 005878a3  eb0a                 jmp 0x5878af
// 005878a5  80f906               cmp cl, 6
// 005878a8  756a                 jne 0x587914
// 005878aa  bd08000000           mov ebp, 8
// 005878af  85d2                 test edx, edx
// 005878b1  7661                 jbe 0x587914
// 005878b3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005878b7  53                   push ebx
// 005878b8  57                   push edi
// 005878b9  40                   inc eax
// 005878ba  8bfa                 mov edi, edx
// 005878bc  8d642400             lea esp, [esp]
// 005878c0  0fb67001             movzx esi, byte ptr [eax + 1]
// 005878c4  0fb64802             movzx ecx, byte ptr [eax + 2]
// 005878c8  0fb610               movzx edx, byte ptr [eax]
// 005878cb  0fb65804             movzx ebx, byte ptr [eax + 4]
// 005878cf  c1e608               shl esi, 8
// 005878d2  0bf1                 or esi, ecx
// 005878d4  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 005878d8  c1e108               shl ecx, 8
// 005878db  0bca                 or ecx, edx
// 005878dd  0fb65003             movzx edx, byte ptr [eax + 3]
// 005878e1  c1e208               shl edx, 8
// 005878e4  0bd3                 or edx, ebx
// 005878e6  03ce                 add ecx, esi
// 005878e8  81e1ffff0000         and ecx, 0xffff
// 005878ee  03d6                 add edx, esi
// 005878f0  81e2ffff0000         and edx, 0xffff
// 005878f6  8bd9                 mov ebx, ecx
// 005878f8  8808                 mov byte ptr [eax], cl
// 005878fa  8bca                 mov ecx, edx
// 005878fc  c1eb08               shr ebx, 8
// 005878ff  c1e908               shr ecx, 8
// 00587902  8858ff               mov byte ptr [eax - 1], bl
// 00587905  884803               mov byte ptr [eax + 3], cl
// 00587908  885004               mov byte ptr [eax + 4], dl
// 0058790b  03c5                 add eax, ebp
// 0058790d  83ef01               sub edi, 1
// 00587910  75ae                 jne 0x5878c0
// 00587912  5f                   pop edi
// 00587913  5b                   pop ebx
// 00587914  5d                   pop ebp
// 00587915  5e                   pop esi
// 00587916  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
