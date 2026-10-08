// from server: 100% by auto
// roc 2008-06 0051fda0  unit: seg_00510000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fda0
//
// 0051fda0  8b442404             mov eax, dword ptr [esp + 4]
// 0051fda4  8a5009               mov dl, byte ptr [eax + 9]
// 0051fda7  80fa08               cmp dl, 8
// 0051fdaa  7342                 jae 0x51fdee
// 0051fdac  8b4804               mov ecx, dword ptr [eax + 4]
// 0051fdaf  8b442408             mov eax, dword ptr [esp + 8]
// 0051fdb3  03c8                 add ecx, eax
// 0051fdb5  56                   push esi
// 0051fdb6  80fa01               cmp dl, 1
// 0051fdb9  7507                 jne 0x51fdc2
// 0051fdbb  be582a9400           mov esi, 0x942a58
// 0051fdc0  eb16                 jmp 0x51fdd8
// 0051fdc2  80fa02               cmp dl, 2
// 0051fdc5  7507                 jne 0x51fdce
// 0051fdc7  be582b9400           mov esi, 0x942b58
// 0051fdcc  eb0a                 jmp 0x51fdd8
// 0051fdce  80fa04               cmp dl, 4
// 0051fdd1  751a                 jne 0x51fded
// 0051fdd3  be582c9400           mov esi, 0x942c58
// 0051fdd8  3bc1                 cmp eax, ecx
// 0051fdda  7311                 jae 0x51fded
// 0051fddc  8d642400             lea esp, [esp]
// 0051fde0  0fb610               movzx edx, byte ptr [eax]
// 0051fde3  8a1432               mov dl, byte ptr [edx + esi]
// 0051fde6  8810                 mov byte ptr [eax], dl
// 0051fde8  40                   inc eax
// 0051fde9  3bc1                 cmp eax, ecx
// 0051fdeb  72f3                 jb 0x51fde0
// 0051fded  5e                   pop esi
// 0051fdee  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
