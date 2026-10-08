// from server: 100% by auto
// roc 2008-06 0051fd60  unit: seg_00510000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fd60
//
// 0051fd60  8b542404             mov edx, dword ptr [esp + 4]
// 0051fd64  807a0910             cmp byte ptr [edx + 9], 0x10
// 0051fd68  7529                 jne 0x51fd93
// 0051fd6a  0fb64a0a             movzx ecx, byte ptr [edx + 0xa]
// 0051fd6e  0faf0a               imul ecx, dword ptr [edx]
// 0051fd71  8b442408             mov eax, dword ptr [esp + 8]
// 0051fd75  85c9                 test ecx, ecx
// 0051fd77  761a                 jbe 0x51fd93
// 0051fd79  56                   push esi
// 0051fd7a  8bf1                 mov esi, ecx
// 0051fd7c  8d642400             lea esp, [esp]
// 0051fd80  8a08                 mov cl, byte ptr [eax]
// 0051fd82  8a5001               mov dl, byte ptr [eax + 1]
// 0051fd85  8810                 mov byte ptr [eax], dl
// 0051fd87  884801               mov byte ptr [eax + 1], cl
// 0051fd8a  83c002               add eax, 2
// 0051fd8d  83ee01               sub esi, 1
// 0051fd90  75ee                 jne 0x51fd80
// 0051fd92  5e                   pop esi
// 0051fd93  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
