// from server: 100% by auto
// roc 2009-06 00583db0  unit: seg_00580000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00583db0
//
// 00583db0  8b542404             mov edx, dword ptr [esp + 4]
// 00583db4  807a0910             cmp byte ptr [edx + 9], 0x10
// 00583db8  7529                 jne 0x583de3
// 00583dba  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 00583dbe  0faf0a               imul ecx, dword ptr [edx]
// 00583dc1  8b442408             mov eax, dword ptr [esp + 8]
// 00583dc5  85c9                 test ecx, ecx
// 00583dc7  761a                 jbe 0x583de3
// 00583dc9  56                   push esi
// 00583dca  8bf1                 mov esi, ecx
// 00583dcc  8d642400             lea esp, [esp]
// 00583dd0  8a08                 mov cl, byte ptr [eax]
// 00583dd2  8a5001               mov dl, byte ptr [eax + 1]
// 00583dd5  8810                 mov byte ptr [eax], dl
// 00583dd7  884801               mov byte ptr [eax + 1], cl
// 00583dda  83c002               add eax, 2
// 00583ddd  83ee01               sub esi, 1
// 00583de0  75ee                 jne 0x583dd0
// 00583de2  5e                   pop esi
// 00583de3  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
