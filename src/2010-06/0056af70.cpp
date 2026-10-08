// from server: 100% by auto
// roc 2010-06 0056af70  unit: seg_00560000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056af70
//
// 0056af70  8b442404             mov eax, dword ptr [esp + 4]
// 0056af74  8a4808               mov cl, byte ptr [eax + 8]
// 0056af77  f6c102               test cl, 2
// 0056af7a  0f84c6000000         je 0x56b046
// 0056af80  8b10                 mov edx, dword ptr [eax]
// 0056af82  8a4009               mov al, byte ptr [eax + 9]
// 0056af85  56                   push esi
// 0056af86  3c08                 cmp al, 8
// 0056af88  753a                 jne 0x56afc4
// 0056af8a  80f902               cmp cl, 2
// 0056af8d  7507                 jne 0x56af96
// 0056af8f  be03000000           mov esi, 3
// 0056af94  eb0e                 jmp 0x56afa4
// 0056af96  80f906               cmp cl, 6
// 0056af99  0f85a6000000         jne 0x56b045
// 0056af9f  be04000000           mov esi, 4
// 0056afa4  85d2                 test edx, edx
// 0056afa6  0f8699000000         jbe 0x56b045
// 0056afac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056afb0  83c002               add eax, 2
// 0056afb3  8a48ff               mov cl, byte ptr [eax - 1]
// 0056afb6  0048fe               add byte ptr [eax - 2], cl
// 0056afb9  0008                 add byte ptr [eax], cl
// 0056afbb  03c6                 add eax, esi
// 0056afbd  83ea01               sub edx, 1
// 0056afc0  75f1                 jne 0x56afb3
// 0056afc2  5e                   pop esi
// 0056afc3  c3                   ret 
// 0056afc4  3c10                 cmp al, 0x10
// 0056afc6  757d                 jne 0x56b045
// 0056afc8  55                   push ebp
// 0056afc9  80f902               cmp cl, 2
// 0056afcc  7507                 jne 0x56afd5
// 0056afce  bd06000000           mov ebp, 6
// 0056afd3  eb0a                 jmp 0x56afdf
// 0056afd5  80f906               cmp cl, 6
// 0056afd8  756a                 jne 0x56b044
// 0056afda  bd08000000           mov ebp, 8
// 0056afdf  85d2                 test edx, edx
// 0056afe1  7661                 jbe 0x56b044
// 0056afe3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056afe7  53                   push ebx
// 0056afe8  57                   push edi
// 0056afe9  40                   inc eax
// 0056afea  8bfa                 mov edi, edx
// 0056afec  8d642400             lea esp, [esp]
// 0056aff0  0fb67001             movzx esi, byte ptr [eax + 1]
// 0056aff4  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0056aff8  0fb610               movzx edx, byte ptr [eax]
// 0056affb  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0056afff  c1e608               shl esi, 8
// 0056b002  0bf1                 or esi, ecx
// 0056b004  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0056b008  c1e108               shl ecx, 8
// 0056b00b  0bca                 or ecx, edx
// 0056b00d  0fb65003             movzx edx, byte ptr [eax + 3]
// 0056b011  c1e208               shl edx, 8
// 0056b014  0bd3                 or edx, ebx
// 0056b016  03ce                 add ecx, esi
// 0056b018  81e1ffff0000         and ecx, 0xffff
// 0056b01e  03d6                 add edx, esi
// 0056b020  81e2ffff0000         and edx, 0xffff
// 0056b026  8bd9                 mov ebx, ecx
// 0056b028  8808                 mov byte ptr [eax], cl
// 0056b02a  8bca                 mov ecx, edx
// 0056b02c  c1eb08               shr ebx, 8
// 0056b02f  c1e908               shr ecx, 8
// 0056b032  8858ff               mov byte ptr [eax - 1], bl
// 0056b035  884803               mov byte ptr [eax + 3], cl
// 0056b038  885004               mov byte ptr [eax + 4], dl
// 0056b03b  03c5                 add eax, ebp
// 0056b03d  83ef01               sub edi, 1
// 0056b040  75ae                 jne 0x56aff0
// 0056b042  5f                   pop edi
// 0056b043  5b                   pop ebx
// 0056b044  5d                   pop ebp
// 0056b045  5e                   pop esi
// 0056b046  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
