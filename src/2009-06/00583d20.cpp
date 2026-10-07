// roc 2009-06 00583d20  unit: seg_00580000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00583d20
//
// 00583d20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00583d24  8a4108               mov al, byte ptr [ecx + 8]
// 00583d27  84c0                 test al, al
// 00583d29  7518                 jne 0x583d43
// 00583d2b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00583d2e  8b442408             mov eax, dword ptr [esp + 8]
// 00583d32  85c9                 test ecx, ecx
// 00583d34  7672                 jbe 0x583da8
// 00583d36  8a10                 mov dl, byte ptr [eax]
// 00583d38  f6d2                 not dl
// 00583d3a  8810                 mov byte ptr [eax], dl
// 00583d3c  40                   inc eax
// 00583d3d  83e901               sub ecx, 1
// 00583d40  75f4                 jne 0x583d36
// 00583d42  c3                   ret 
// 00583d43  3c04                 cmp al, 4
// 00583d45  7561                 jne 0x583da8
// 00583d47  80790908             cmp byte ptr [ecx + 9], 8
// 00583d4b  7522                 jne 0x583d6f
// 00583d4d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00583d50  8b442408             mov eax, dword ptr [esp + 8]
// 00583d54  85c9                 test ecx, ecx
// 00583d56  7650                 jbe 0x583da8
// 00583d58  49                   dec ecx
// 00583d59  d1e9                 shr ecx, 1
// 00583d5b  41                   inc ecx
// 00583d5c  8d642400             lea esp, [esp]
// 00583d60  8a10                 mov dl, byte ptr [eax]
// 00583d62  f6d2                 not dl
// 00583d64  8810                 mov byte ptr [eax], dl
// 00583d66  83c002               add eax, 2
// 00583d69  83e901               sub ecx, 1
// 00583d6c  75f2                 jne 0x583d60
// 00583d6e  c3                   ret 
// 00583d6f  3c04                 cmp al, 4
// 00583d71  7535                 jne 0x583da8
// 00583d73  80790910             cmp byte ptr [ecx + 9], 0x10
// 00583d77  752f                 jne 0x583da8
// 00583d79  8b4904               mov ecx, dword ptr [ecx + 4]
// 00583d7c  85c9                 test ecx, ecx
// 00583d7e  7628                 jbe 0x583da8
// 00583d80  8b442408             mov eax, dword ptr [esp + 8]
// 00583d84  49                   dec ecx
// 00583d85  c1e902               shr ecx, 2
// 00583d88  40                   inc eax
// 00583d89  41                   inc ecx
// 00583d8a  8d9b00000000         lea ebx, [ebx]
// 00583d90  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00583d94  f6d2                 not dl
// 00583d96  8850ff               mov byte ptr [eax - 1], dl
// 00583d99  0fb610               movzx edx, byte ptr [eax]
// 00583d9c  f6d2                 not dl
// 00583d9e  8810                 mov byte ptr [eax], dl
// 00583da0  83c004               add eax, 4
// 00583da3  83e901               sub ecx, 1
// 00583da6  75e8                 jne 0x583d90
// 00583da8  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
