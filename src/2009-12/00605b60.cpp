// roc 2009-12 00605b60  unit: seg_00600000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00605b60
//
// 00605b60  8b542404             mov edx, dword ptr [esp + 4]
// 00605b64  807a0910             cmp byte ptr [edx + 9], 0x10
// 00605b68  7529                 jne 0x605b93
// 00605b6a  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 00605b6e  0faf0a               imul ecx, dword ptr [edx]
// 00605b71  8b442408             mov eax, dword ptr [esp + 8]
// 00605b75  85c9                 test ecx, ecx
// 00605b77  761a                 jbe 0x605b93
// 00605b79  56                   push esi
// 00605b7a  8bf1                 mov esi, ecx
// 00605b7c  8d642400             lea esp, [esp]
// 00605b80  8a08                 mov cl, byte ptr [eax]
// 00605b82  8a5001               mov dl, byte ptr [eax + 1]
// 00605b85  8810                 mov byte ptr [eax], dl
// 00605b87  884801               mov byte ptr [eax + 1], cl
// 00605b8a  83c002               add eax, 2
// 00605b8d  83ee01               sub esi, 1
// 00605b90  75ee                 jne 0x605b80
// 00605b92  5e                   pop esi
// 00605b93  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
