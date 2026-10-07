// roc 2012-06 00648f00  unit: seg_00640000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00648f00
//
// 00648f00  8b442404             mov eax, dword ptr [esp + 4]
// 00648f04  8a5009               mov dl, byte ptr [eax + 9]
// 00648f07  80fa08               cmp dl, 8
// 00648f0a  7342                 jae 0x648f4e
// 00648f0c  8b4804               mov ecx, dword ptr [eax + 4]
// 00648f0f  8b442408             mov eax, dword ptr [esp + 8]
// 00648f13  03c8                 add ecx, eax
// 00648f15  56                   push esi
// 00648f16  80fa01               cmp dl, 1
// 00648f19  7507                 jne 0x648f22
// 00648f1b  be5066b800           mov esi, 0xb86650
// 00648f20  eb16                 jmp 0x648f38
// 00648f22  80fa02               cmp dl, 2
// 00648f25  7507                 jne 0x648f2e
// 00648f27  be5067b800           mov esi, 0xb86750
// 00648f2c  eb0a                 jmp 0x648f38
// 00648f2e  80fa04               cmp dl, 4
// 00648f31  751a                 jne 0x648f4d
// 00648f33  be5068b800           mov esi, 0xb86850
// 00648f38  3bc1                 cmp eax, ecx
// 00648f3a  7311                 jae 0x648f4d
// 00648f3c  8d642400             lea esp, [esp]
// 00648f40  0fb610               movzx edx, byte ptr [eax]
// 00648f43  8a1432               mov dl, byte ptr [edx + esi]
// 00648f46  8810                 mov byte ptr [eax], dl
// 00648f48  40                   inc eax
// 00648f49  3bc1                 cmp eax, ecx
// 00648f4b  72f3                 jb 0x648f40
// 00648f4d  5e                   pop esi
// 00648f4e  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
