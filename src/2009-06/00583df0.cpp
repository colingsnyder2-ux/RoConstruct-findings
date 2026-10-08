// from server: 100% by auto
// roc 2009-06 00583df0  unit: seg_00580000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00583df0
//
// 00583df0  8b442404             mov eax, dword ptr [esp + 4]
// 00583df4  8a5009               mov dl, byte ptr [eax + 9]
// 00583df7  80fa08               cmp dl, 8
// 00583dfa  7342                 jae 0x583e3e
// 00583dfc  8b4804               mov ecx, dword ptr [eax + 4]
// 00583dff  8b442408             mov eax, dword ptr [esp + 8]
// 00583e03  03c8                 add ecx, eax
// 00583e05  56                   push esi
// 00583e06  80fa01               cmp dl, 1
// 00583e09  7507                 jne 0x583e12
// 00583e0b  be28e08c00           mov esi, 0x8ce028
// 00583e10  eb16                 jmp 0x583e28
// 00583e12  80fa02               cmp dl, 2
// 00583e15  7507                 jne 0x583e1e
// 00583e17  be28e18c00           mov esi, 0x8ce128
// 00583e1c  eb0a                 jmp 0x583e28
// 00583e1e  80fa04               cmp dl, 4
// 00583e21  751a                 jne 0x583e3d
// 00583e23  be28e28c00           mov esi, 0x8ce228
// 00583e28  3bc1                 cmp eax, ecx
// 00583e2a  7311                 jae 0x583e3d
// 00583e2c  8d642400             lea esp, [esp]
// 00583e30  0fb610               movzx edx, byte ptr [eax]
// 00583e33  8a1432               mov dl, byte ptr [edx + esi]
// 00583e36  8810                 mov byte ptr [eax], dl
// 00583e38  40                   inc eax
// 00583e39  3bc1                 cmp eax, ecx
// 00583e3b  72f3                 jb 0x583e30
// 00583e3d  5e                   pop esi
// 00583e3e  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
