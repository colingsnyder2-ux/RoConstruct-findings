// from server: 100% by auto
// roc 2008-06 00523780  unit: seg_00520000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00523780
//
// 00523780  8b442404             mov eax, dword ptr [esp + 4]
// 00523784  8a4808               mov cl, byte ptr [eax + 8]
// 00523787  f6c102               test cl, 2
// 0052378a  0f84c6000000         je 0x523856
// 00523790  8b10                 mov edx, dword ptr [eax]
// 00523792  8a4009               mov al, byte ptr [eax + 9]
// 00523795  56                   push esi
// 00523796  3c08                 cmp al, 8
// 00523798  753a                 jne 0x5237d4
// 0052379a  80f902               cmp cl, 2
// 0052379d  7507                 jne 0x5237a6
// 0052379f  be03000000           mov esi, 3
// 005237a4  eb0e                 jmp 0x5237b4
// 005237a6  80f906               cmp cl, 6
// 005237a9  0f85a6000000         jne 0x523855
// 005237af  be04000000           mov esi, 4
// 005237b4  85d2                 test edx, edx
// 005237b6  0f8699000000         jbe 0x523855
// 005237bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005237c0  83c002               add eax, 2
// 005237c3  8a48ff               mov cl, byte ptr [eax - 1]
// 005237c6  0048fe               add byte ptr [eax - 2], cl
// 005237c9  0008                 add byte ptr [eax], cl
// 005237cb  03c6                 add eax, esi
// 005237cd  83ea01               sub edx, 1
// 005237d0  75f1                 jne 0x5237c3
// 005237d2  5e                   pop esi
// 005237d3  c3                   ret 
// 005237d4  3c10                 cmp al, 0x10
// 005237d6  757d                 jne 0x523855
// 005237d8  55                   push ebp
// 005237d9  80f902               cmp cl, 2
// 005237dc  7507                 jne 0x5237e5
// 005237de  bd06000000           mov ebp, 6
// 005237e3  eb0a                 jmp 0x5237ef
// 005237e5  80f906               cmp cl, 6
// 005237e8  756a                 jne 0x523854
// 005237ea  bd08000000           mov ebp, 8
// 005237ef  85d2                 test edx, edx
// 005237f1  7661                 jbe 0x523854
// 005237f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005237f7  53                   push ebx
// 005237f8  57                   push edi
// 005237f9  40                   inc eax
// 005237fa  8bfa                 mov edi, edx
// 005237fc  8d642400             lea esp, [esp]
// 00523800  0fb67001             movzx esi, byte ptr [eax + 1]
// 00523804  0fb64802             movzx ecx, byte ptr [eax + 2]
// 00523808  0fb610               movzx edx, byte ptr [eax]
// 0052380b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0052380f  c1e608               shl esi, 8
// 00523812  0bf1                 or esi, ecx
// 00523814  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00523818  c1e108               shl ecx, 8
// 0052381b  0bca                 or ecx, edx
// 0052381d  0fb65003             movzx edx, byte ptr [eax + 3]
// 00523821  c1e208               shl edx, 8
// 00523824  0bd3                 or edx, ebx
// 00523826  03ce                 add ecx, esi
// 00523828  81e1ffff0000         and ecx, 0xffff
// 0052382e  03d6                 add edx, esi
// 00523830  81e2ffff0000         and edx, 0xffff
// 00523836  8bd9                 mov ebx, ecx
// 00523838  8808                 mov byte ptr [eax], cl
// 0052383a  8bca                 mov ecx, edx
// 0052383c  c1eb08               shr ebx, 8
// 0052383f  c1e908               shr ecx, 8
// 00523842  8858ff               mov byte ptr [eax - 1], bl
// 00523845  884803               mov byte ptr [eax + 3], cl
// 00523848  885004               mov byte ptr [eax + 4], dl
// 0052384b  03c5                 add eax, ebp
// 0052384d  83ef01               sub edi, 1
// 00523850  75ae                 jne 0x523800
// 00523852  5f                   pop edi
// 00523853  5b                   pop ebx
// 00523854  5d                   pop ebp
// 00523855  5e                   pop esi
// 00523856  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
