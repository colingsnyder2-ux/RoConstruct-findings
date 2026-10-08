// roc 2009-12 00605ba0  unit: seg_00600000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00605ba0
//
// 00605ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00605ba4  8a5009               mov dl, byte ptr [eax + 9]
// 00605ba7  80fa08               cmp dl, 8
// 00605baa  7342                 jae 0x605bee
// 00605bac  8b4804               mov ecx, dword ptr [eax + 4]
// 00605baf  8b442408             mov eax, dword ptr [esp + 8]
// 00605bb3  03c8                 add ecx, eax
// 00605bb5  56                   push esi
// 00605bb6  80fa01               cmp dl, 1
// 00605bb9  7507                 jne 0x605bc2
// 00605bbb  bec84e9c00           mov esi, 0x9c4ec8
// 00605bc0  eb16                 jmp 0x605bd8
// 00605bc2  80fa02               cmp dl, 2
// 00605bc5  7507                 jne 0x605bce
// 00605bc7  bec84f9c00           mov esi, 0x9c4fc8
// 00605bcc  eb0a                 jmp 0x605bd8
// 00605bce  80fa04               cmp dl, 4
// 00605bd1  751a                 jne 0x605bed
// 00605bd3  bec8509c00           mov esi, 0x9c50c8
// 00605bd8  3bc1                 cmp eax, ecx
// 00605bda  7311                 jae 0x605bed
// 00605bdc  8d642400             lea esp, [esp]
// 00605be0  0fb610               movzx edx, byte ptr [eax]
// 00605be3  8a1432               mov dl, byte ptr [edx + esi]
// 00605be6  8810                 mov byte ptr [eax], dl
// 00605be8  40                   inc eax
// 00605be9  3bc1                 cmp eax, ecx
// 00605beb  72f3                 jb 0x605be0
// 00605bed  5e                   pop esi
// 00605bee  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
