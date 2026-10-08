// from server: 100% by auto
// roc 2010-06 00572030  unit: seg_00570000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572030
//
// 00572030  8b442404             mov eax, dword ptr [esp + 4]
// 00572034  8a4808               mov cl, byte ptr [eax + 8]
// 00572037  53                   push ebx
// 00572038  56                   push esi
// 00572039  80f906               cmp cl, 6
// 0057203c  0f85a5000000         jne 0x5720e7
// 00572042  80780908             cmp byte ptr [eax + 9], 8
// 00572046  753e                 jne 0x572086
// 00572048  8b10                 mov edx, dword ptr [eax]
// 0057204a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057204e  8bc8                 mov ecx, eax
// 00572050  85d2                 test edx, edx
// 00572052  0f86f4000000         jbe 0x57214c
// 00572058  8bf2                 mov esi, edx
// 0057205a  8d9b00000000         lea ebx, [ebx]
// 00572060  8a10                 mov dl, byte ptr [eax]
// 00572062  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00572066  40                   inc eax
// 00572067  8819                 mov byte ptr [ecx], bl
// 00572069  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057206d  40                   inc eax
// 0057206e  41                   inc ecx
// 0057206f  8819                 mov byte ptr [ecx], bl
// 00572071  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00572075  40                   inc eax
// 00572076  41                   inc ecx
// 00572077  8819                 mov byte ptr [ecx], bl
// 00572079  41                   inc ecx
// 0057207a  8811                 mov byte ptr [ecx], dl
// 0057207c  40                   inc eax
// 0057207d  41                   inc ecx
// 0057207e  83ee01               sub esi, 1
// 00572081  75dd                 jne 0x572060
// 00572083  5e                   pop esi
// 00572084  5b                   pop ebx
// 00572085  c3                   ret 
// 00572086  8b30                 mov esi, dword ptr [eax]
// 00572088  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057208c  8bc8                 mov ecx, eax
// 0057208e  85f6                 test esi, esi
// 00572090  0f86b6000000         jbe 0x57214c
// 00572096  8a10                 mov dl, byte ptr [eax]
// 00572098  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057209c  40                   inc eax
// 0057209d  40                   inc eax
// 0057209e  885c240d             mov byte ptr [esp + 0xd], bl
// 005720a2  0fb618               movzx ebx, byte ptr [eax]
// 005720a5  8819                 mov byte ptr [ecx], bl
// 005720a7  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005720ab  885901               mov byte ptr [ecx + 1], bl
// 005720ae  40                   inc eax
// 005720af  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005720b3  41                   inc ecx
// 005720b4  885901               mov byte ptr [ecx + 1], bl
// 005720b7  40                   inc eax
// 005720b8  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005720bc  41                   inc ecx
// 005720bd  40                   inc eax
// 005720be  885901               mov byte ptr [ecx + 1], bl
// 005720c1  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005720c5  41                   inc ecx
// 005720c6  40                   inc eax
// 005720c7  41                   inc ecx
// 005720c8  8819                 mov byte ptr [ecx], bl
// 005720ca  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005720ce  40                   inc eax
// 005720cf  41                   inc ecx
// 005720d0  8819                 mov byte ptr [ecx], bl
// 005720d2  41                   inc ecx
// 005720d3  8811                 mov byte ptr [ecx], dl
// 005720d5  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 005720da  41                   inc ecx
// 005720db  8811                 mov byte ptr [ecx], dl
// 005720dd  40                   inc eax
// 005720de  41                   inc ecx
// 005720df  83ee01               sub esi, 1
// 005720e2  75b2                 jne 0x572096
// 005720e4  5e                   pop esi
// 005720e5  5b                   pop ebx
// 005720e6  c3                   ret 
// 005720e7  80f904               cmp cl, 4
// 005720ea  7560                 jne 0x57214c
// 005720ec  80780908             cmp byte ptr [eax + 9], 8
// 005720f0  7523                 jne 0x572115
// 005720f2  8b10                 mov edx, dword ptr [eax]
// 005720f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005720f8  8bc8                 mov ecx, eax
// 005720fa  85d2                 test edx, edx
// 005720fc  764e                 jbe 0x57214c
// 005720fe  8bf2                 mov esi, edx
// 00572100  8a10                 mov dl, byte ptr [eax]
// 00572102  8a5801               mov bl, byte ptr [eax + 1]
// 00572105  40                   inc eax
// 00572106  8819                 mov byte ptr [ecx], bl
// 00572108  41                   inc ecx
// 00572109  8811                 mov byte ptr [ecx], dl
// 0057210b  40                   inc eax
// 0057210c  41                   inc ecx
// 0057210d  83ee01               sub esi, 1
// 00572110  75ee                 jne 0x572100
// 00572112  5e                   pop esi
// 00572113  5b                   pop ebx
// 00572114  c3                   ret 
// 00572115  8b30                 mov esi, dword ptr [eax]
// 00572117  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057211b  8bc8                 mov ecx, eax
// 0057211d  85f6                 test esi, esi
// 0057211f  762b                 jbe 0x57214c
// 00572121  8a10                 mov dl, byte ptr [eax]
// 00572123  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00572127  40                   inc eax
// 00572128  40                   inc eax
// 00572129  885c240d             mov byte ptr [esp + 0xd], bl
// 0057212d  0fb618               movzx ebx, byte ptr [eax]
// 00572130  8819                 mov byte ptr [ecx], bl
// 00572132  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00572136  40                   inc eax
// 00572137  41                   inc ecx
// 00572138  8819                 mov byte ptr [ecx], bl
// 0057213a  41                   inc ecx
// 0057213b  8811                 mov byte ptr [ecx], dl
// 0057213d  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00572142  41                   inc ecx
// 00572143  8811                 mov byte ptr [ecx], dl
// 00572145  40                   inc eax
// 00572146  41                   inc ecx
// 00572147  83ee01               sub esi, 1
// 0057214a  75d5                 jne 0x572121
// 0057214c  5e                   pop esi
// 0057214d  5b                   pop ebx
// 0057214e  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
