// from server: 100% by auto
// roc 2010-06 00572200  unit: seg_00570000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572200
//
// 00572200  8b442404             mov eax, dword ptr [esp + 4]
// 00572204  8a4808               mov cl, byte ptr [eax + 8]
// 00572207  f6c102               test cl, 2
// 0057220a  0f84c6000000         je 0x5722d6
// 00572210  8b10                 mov edx, dword ptr [eax]
// 00572212  8a4009               mov al, byte ptr [eax + 9]
// 00572215  56                   push esi
// 00572216  3c08                 cmp al, 8
// 00572218  753a                 jne 0x572254
// 0057221a  80f902               cmp cl, 2
// 0057221d  7507                 jne 0x572226
// 0057221f  be03000000           mov esi, 3
// 00572224  eb0e                 jmp 0x572234
// 00572226  80f906               cmp cl, 6
// 00572229  0f85a6000000         jne 0x5722d5
// 0057222f  be04000000           mov esi, 4
// 00572234  85d2                 test edx, edx
// 00572236  0f8699000000         jbe 0x5722d5
// 0057223c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00572240  83c002               add eax, 2
// 00572243  8a48ff               mov cl, byte ptr [eax - 1]
// 00572246  2848fe               sub byte ptr [eax - 2], cl
// 00572249  2808                 sub byte ptr [eax], cl
// 0057224b  03c6                 add eax, esi
// 0057224d  83ea01               sub edx, 1
// 00572250  75f1                 jne 0x572243
// 00572252  5e                   pop esi
// 00572253  c3                   ret 
// 00572254  3c10                 cmp al, 0x10
// 00572256  757d                 jne 0x5722d5
// 00572258  55                   push ebp
// 00572259  80f902               cmp cl, 2
// 0057225c  7507                 jne 0x572265
// 0057225e  bd06000000           mov ebp, 6
// 00572263  eb0a                 jmp 0x57226f
// 00572265  80f906               cmp cl, 6
// 00572268  756a                 jne 0x5722d4
// 0057226a  bd08000000           mov ebp, 8
// 0057226f  85d2                 test edx, edx
// 00572271  7661                 jbe 0x5722d4
// 00572273  8b442410             mov eax, dword ptr [esp + 0x10]
// 00572277  53                   push ebx
// 00572278  57                   push edi
// 00572279  40                   inc eax
// 0057227a  8bfa                 mov edi, edx
// 0057227c  8d642400             lea esp, [esp]
// 00572280  0fb67001             movzx esi, byte ptr [eax + 1]
// 00572284  0fb64802             movzx ecx, byte ptr [eax + 2]
// 00572288  0fb610               movzx edx, byte ptr [eax]
// 0057228b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0057228f  c1e608               shl esi, 8
// 00572292  0bf1                 or esi, ecx
// 00572294  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00572298  c1e108               shl ecx, 8
// 0057229b  0bca                 or ecx, edx
// 0057229d  0fb65003             movzx edx, byte ptr [eax + 3]
// 005722a1  c1e208               shl edx, 8
// 005722a4  0bd3                 or edx, ebx
// 005722a6  2bce                 sub ecx, esi
// 005722a8  81e1ffff0000         and ecx, 0xffff
// 005722ae  2bd6                 sub edx, esi
// 005722b0  81e2ffff0000         and edx, 0xffff
// 005722b6  8bd9                 mov ebx, ecx
// 005722b8  8808                 mov byte ptr [eax], cl
// 005722ba  8bca                 mov ecx, edx
// 005722bc  c1eb08               shr ebx, 8
// 005722bf  c1e908               shr ecx, 8
// 005722c2  8858ff               mov byte ptr [eax - 1], bl
// 005722c5  884803               mov byte ptr [eax + 3], cl
// 005722c8  885004               mov byte ptr [eax + 4], dl
// 005722cb  03c5                 add eax, ebp
// 005722cd  83ef01               sub edi, 1
// 005722d0  75ae                 jne 0x572280
// 005722d2  5f                   pop edi
// 005722d3  5b                   pop ebx
// 005722d4  5d                   pop ebp
// 005722d5  5e                   pop esi
// 005722d6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
