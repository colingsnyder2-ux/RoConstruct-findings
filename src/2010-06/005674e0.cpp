// roc 2010-06 005674e0  unit: seg_00560000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005674e0
//
// 005674e0  8b542404             mov edx, dword ptr [esp + 4]
// 005674e4  807a0910             cmp byte ptr [edx + 9], 0x10
// 005674e8  7529                 jne 0x567513
// 005674ea  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 005674ee  0faf0a               imul ecx, dword ptr [edx]
// 005674f1  8b442408             mov eax, dword ptr [esp + 8]
// 005674f5  85c9                 test ecx, ecx
// 005674f7  761a                 jbe 0x567513
// 005674f9  56                   push esi
// 005674fa  8bf1                 mov esi, ecx
// 005674fc  8d642400             lea esp, [esp]
// 00567500  8a08                 mov cl, byte ptr [eax]
// 00567502  8a5001               mov dl, byte ptr [eax + 1]
// 00567505  8810                 mov byte ptr [eax], dl
// 00567507  884801               mov byte ptr [eax + 1], cl
// 0056750a  83c002               add eax, 2
// 0056750d  83ee01               sub esi, 1
// 00567510  75ee                 jne 0x567500
// 00567512  5e                   pop esi
// 00567513  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
