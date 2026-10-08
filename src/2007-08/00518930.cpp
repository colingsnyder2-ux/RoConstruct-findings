// from server: 100% by auto
// roc 2007-08 00518930  unit: seg_00510000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518930
//
// 00518930  8b542404             mov edx, dword ptr [esp + 4]
// 00518934  807a0910             cmp byte ptr [edx + 9], 0x10
// 00518938  7529                 jne 0x518963
// 0051893a  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 0051893e  0faf0a               imul ecx, dword ptr [edx]
// 00518941  85c9                 test ecx, ecx
// 00518943  8b442408             mov eax, dword ptr [esp + 8]
// 00518947  761a                 jbe 0x518963
// 00518949  56                   push esi
// 0051894a  8bf1                 mov esi, ecx
// 0051894c  8d642400             lea esp, [esp]
// 00518950  8a08                 mov cl, byte ptr [eax]
// 00518952  8a5001               mov dl, byte ptr [eax + 1]
// 00518955  8810                 mov byte ptr [eax], dl
// 00518957  884801               mov byte ptr [eax + 1], cl
// 0051895a  83c002               add eax, 2
// 0051895d  83ee01               sub esi, 1
// 00518960  75ee                 jne 0x518950
// 00518962  5e                   pop esi
// 00518963  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
