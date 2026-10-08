// from server: 100% by auto
// roc 2012-06 00648ec0  unit: seg_00640000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00648ec0
//
// 00648ec0  8b542404             mov edx, dword ptr [esp + 4]
// 00648ec4  807a0910             cmp byte ptr [edx + 9], 0x10
// 00648ec8  7529                 jne 0x648ef3
// 00648eca  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 00648ece  0faf0a               imul ecx, dword ptr [edx]
// 00648ed1  8b442408             mov eax, dword ptr [esp + 8]
// 00648ed5  85c9                 test ecx, ecx
// 00648ed7  761a                 jbe 0x648ef3
// 00648ed9  56                   push esi
// 00648eda  8bf1                 mov esi, ecx
// 00648edc  8d642400             lea esp, [esp]
// 00648ee0  8a08                 mov cl, byte ptr [eax]
// 00648ee2  8a5001               mov dl, byte ptr [eax + 1]
// 00648ee5  8810                 mov byte ptr [eax], dl
// 00648ee7  884801               mov byte ptr [eax + 1], cl
// 00648eea  83c002               add eax, 2
// 00648eed  83ee01               sub esi, 1
// 00648ef0  75ee                 jne 0x648ee0
// 00648ef2  5e                   pop esi
// 00648ef3  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
