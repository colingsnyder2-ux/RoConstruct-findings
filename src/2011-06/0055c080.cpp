// roc 2011-06 0055c080  unit: seg_00550000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055c080
//
// 0055c080  8b442404             mov eax, dword ptr [esp + 4]
// 0055c084  8a5009               mov dl, byte ptr [eax + 9]
// 0055c087  80fa08               cmp dl, 8
// 0055c08a  7342                 jae 0x55c0ce
// 0055c08c  8b4804               mov ecx, dword ptr [eax + 4]
// 0055c08f  8b442408             mov eax, dword ptr [esp + 8]
// 0055c093  03c8                 add ecx, eax
// 0055c095  56                   push esi
// 0055c096  80fa01               cmp dl, 1
// 0055c099  7507                 jne 0x55c0a2
// 0055c09b  bea027a800           mov esi, 0xa827a0
// 0055c0a0  eb16                 jmp 0x55c0b8
// 0055c0a2  80fa02               cmp dl, 2
// 0055c0a5  7507                 jne 0x55c0ae
// 0055c0a7  bea028a800           mov esi, 0xa828a0
// 0055c0ac  eb0a                 jmp 0x55c0b8
// 0055c0ae  80fa04               cmp dl, 4
// 0055c0b1  751a                 jne 0x55c0cd
// 0055c0b3  bea029a800           mov esi, 0xa829a0
// 0055c0b8  3bc1                 cmp eax, ecx
// 0055c0ba  7311                 jae 0x55c0cd
// 0055c0bc  8d642400             lea esp, [esp]
// 0055c0c0  0fb610               movzx edx, byte ptr [eax]
// 0055c0c3  8a1432               mov dl, byte ptr [edx + esi]
// 0055c0c6  8810                 mov byte ptr [eax], dl
// 0055c0c8  40                   inc eax
// 0055c0c9  3bc1                 cmp eax, ecx
// 0055c0cb  72f3                 jb 0x55c0c0
// 0055c0cd  5e                   pop esi
// 0055c0ce  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
