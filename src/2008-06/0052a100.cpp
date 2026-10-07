// roc 2008-06 0052a100  unit: seg_00520000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a100
//
// 0052a100  8b442404             mov eax, dword ptr [esp + 4]
// 0052a104  8a4808               mov cl, byte ptr [eax + 8]
// 0052a107  f6c102               test cl, 2
// 0052a10a  0f84c6000000         je 0x52a1d6
// 0052a110  8b10                 mov edx, dword ptr [eax]
// 0052a112  8a4009               mov al, byte ptr [eax + 9]
// 0052a115  56                   push esi
// 0052a116  3c08                 cmp al, 8
// 0052a118  753a                 jne 0x52a154
// 0052a11a  80f902               cmp cl, 2
// 0052a11d  7507                 jne 0x52a126
// 0052a11f  be03000000           mov esi, 3
// 0052a124  eb0e                 jmp 0x52a134
// 0052a126  80f906               cmp cl, 6
// 0052a129  0f85a6000000         jne 0x52a1d5
// 0052a12f  be04000000           mov esi, 4
// 0052a134  85d2                 test edx, edx
// 0052a136  0f8699000000         jbe 0x52a1d5
// 0052a13c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a140  83c002               add eax, 2
// 0052a143  8a48ff               mov cl, byte ptr [eax - 1]
// 0052a146  2848fe               sub byte ptr [eax - 2], cl
// 0052a149  2808                 sub byte ptr [eax], cl
// 0052a14b  03c6                 add eax, esi
// 0052a14d  83ea01               sub edx, 1
// 0052a150  75f1                 jne 0x52a143
// 0052a152  5e                   pop esi
// 0052a153  c3                   ret 
// 0052a154  3c10                 cmp al, 0x10
// 0052a156  757d                 jne 0x52a1d5
// 0052a158  55                   push ebp
// 0052a159  80f902               cmp cl, 2
// 0052a15c  7507                 jne 0x52a165
// 0052a15e  bd06000000           mov ebp, 6
// 0052a163  eb0a                 jmp 0x52a16f
// 0052a165  80f906               cmp cl, 6
// 0052a168  756a                 jne 0x52a1d4
// 0052a16a  bd08000000           mov ebp, 8
// 0052a16f  85d2                 test edx, edx
// 0052a171  7661                 jbe 0x52a1d4
// 0052a173  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a177  53                   push ebx
// 0052a178  57                   push edi
// 0052a179  40                   inc eax
// 0052a17a  8bfa                 mov edi, edx
// 0052a17c  8d642400             lea esp, [esp]
// 0052a180  0fb67001             movzx esi, byte ptr [eax + 1]
// 0052a184  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0052a188  0fb610               movzx edx, byte ptr [eax]
// 0052a18b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0052a18f  c1e608               shl esi, 8
// 0052a192  0bf1                 or esi, ecx
// 0052a194  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0052a198  c1e108               shl ecx, 8
// 0052a19b  0bca                 or ecx, edx
// 0052a19d  0fb65003             movzx edx, byte ptr [eax + 3]
// 0052a1a1  c1e208               shl edx, 8
// 0052a1a4  0bd3                 or edx, ebx
// 0052a1a6  2bce                 sub ecx, esi
// 0052a1a8  81e1ffff0000         and ecx, 0xffff
// 0052a1ae  2bd6                 sub edx, esi
// 0052a1b0  81e2ffff0000         and edx, 0xffff
// 0052a1b6  8bd9                 mov ebx, ecx
// 0052a1b8  8808                 mov byte ptr [eax], cl
// 0052a1ba  8bca                 mov ecx, edx
// 0052a1bc  c1eb08               shr ebx, 8
// 0052a1bf  c1e908               shr ecx, 8
// 0052a1c2  8858ff               mov byte ptr [eax - 1], bl
// 0052a1c5  884803               mov byte ptr [eax + 3], cl
// 0052a1c8  885004               mov byte ptr [eax + 4], dl
// 0052a1cb  03c5                 add eax, ebp
// 0052a1cd  83ef01               sub edi, 1
// 0052a1d0  75ae                 jne 0x52a180
// 0052a1d2  5f                   pop edi
// 0052a1d3  5b                   pop ebx
// 0052a1d4  5d                   pop ebp
// 0052a1d5  5e                   pop esi
// 0052a1d6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
