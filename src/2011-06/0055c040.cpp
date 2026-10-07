// roc 2011-06 0055c040  unit: seg_00550000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055c040
//
// 0055c040  8b542404             mov edx, dword ptr [esp + 4]
// 0055c044  807a0910             cmp byte ptr [edx + 9], 0x10
// 0055c048  7529                 jne 0x55c073
// 0055c04a  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 0055c04e  0faf0a               imul ecx, dword ptr [edx]
// 0055c051  8b442408             mov eax, dword ptr [esp + 8]
// 0055c055  85c9                 test ecx, ecx
// 0055c057  761a                 jbe 0x55c073
// 0055c059  56                   push esi
// 0055c05a  8bf1                 mov esi, ecx
// 0055c05c  8d642400             lea esp, [esp]
// 0055c060  8a08                 mov cl, byte ptr [eax]
// 0055c062  8a5001               mov dl, byte ptr [eax + 1]
// 0055c065  8810                 mov byte ptr [eax], dl
// 0055c067  884801               mov byte ptr [eax + 1], cl
// 0055c06a  83c002               add eax, 2
// 0055c06d  83ee01               sub esi, 1
// 0055c070  75ee                 jne 0x55c060
// 0055c072  5e                   pop esi
// 0055c073  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
