// roc 2010-06 00567520  unit: seg_00560000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567520
//
// 00567520  8b442404             mov eax, dword ptr [esp + 4]
// 00567524  8a5009               mov dl, byte ptr [eax + 9]
// 00567527  80fa08               cmp dl, 8
// 0056752a  7342                 jae 0x56756e
// 0056752c  8b4804               mov ecx, dword ptr [eax + 4]
// 0056752f  8b442408             mov eax, dword ptr [esp + 8]
// 00567533  03c8                 add ecx, eax
// 00567535  56                   push esi
// 00567536  80fa01               cmp dl, 1
// 00567539  7507                 jne 0x567542
// 0056753b  be282ca200           mov esi, 0xa22c28
// 00567540  eb16                 jmp 0x567558
// 00567542  80fa02               cmp dl, 2
// 00567545  7507                 jne 0x56754e
// 00567547  be282da200           mov esi, 0xa22d28
// 0056754c  eb0a                 jmp 0x567558
// 0056754e  80fa04               cmp dl, 4
// 00567551  751a                 jne 0x56756d
// 00567553  be282ea200           mov esi, 0xa22e28
// 00567558  3bc1                 cmp eax, ecx
// 0056755a  7311                 jae 0x56756d
// 0056755c  8d642400             lea esp, [esp]
// 00567560  0fb610               movzx edx, byte ptr [eax]
// 00567563  8a1432               mov dl, byte ptr [edx + esi]
// 00567566  8810                 mov byte ptr [eax], dl
// 00567568  40                   inc eax
// 00567569  3bc1                 cmp eax, ecx
// 0056756b  72f3                 jb 0x567560
// 0056756d  5e                   pop esi
// 0056756e  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
