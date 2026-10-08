// roc 2009-12 00605ad0  unit: seg_00600000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00605ad0
//
// 00605ad0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00605ad4  8a4108               mov al, byte ptr [ecx + 8]
// 00605ad7  84c0                 test al, al
// 00605ad9  7518                 jne 0x605af3
// 00605adb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00605ade  8b442408             mov eax, dword ptr [esp + 8]
// 00605ae2  85c9                 test ecx, ecx
// 00605ae4  7672                 jbe 0x605b58
// 00605ae6  8a10                 mov dl, byte ptr [eax]
// 00605ae8  f6d2                 not dl
// 00605aea  8810                 mov byte ptr [eax], dl
// 00605aec  40                   inc eax
// 00605aed  83e901               sub ecx, 1
// 00605af0  75f4                 jne 0x605ae6
// 00605af2  c3                   ret 
// 00605af3  3c04                 cmp al, 4
// 00605af5  7561                 jne 0x605b58
// 00605af7  80790908             cmp byte ptr [ecx + 9], 8
// 00605afb  7522                 jne 0x605b1f
// 00605afd  8b4904               mov ecx, dword ptr [ecx + 4]
// 00605b00  8b442408             mov eax, dword ptr [esp + 8]
// 00605b04  85c9                 test ecx, ecx
// 00605b06  7650                 jbe 0x605b58
// 00605b08  49                   dec ecx
// 00605b09  d1e9                 shr ecx, 1
// 00605b0b  41                   inc ecx
// 00605b0c  8d642400             lea esp, [esp]
// 00605b10  8a10                 mov dl, byte ptr [eax]
// 00605b12  f6d2                 not dl
// 00605b14  8810                 mov byte ptr [eax], dl
// 00605b16  83c002               add eax, 2
// 00605b19  83e901               sub ecx, 1
// 00605b1c  75f2                 jne 0x605b10
// 00605b1e  c3                   ret 
// 00605b1f  3c04                 cmp al, 4
// 00605b21  7535                 jne 0x605b58
// 00605b23  80790910             cmp byte ptr [ecx + 9], 0x10
// 00605b27  752f                 jne 0x605b58
// 00605b29  8b4904               mov ecx, dword ptr [ecx + 4]
// 00605b2c  85c9                 test ecx, ecx
// 00605b2e  7628                 jbe 0x605b58
// 00605b30  8b442408             mov eax, dword ptr [esp + 8]
// 00605b34  49                   dec ecx
// 00605b35  c1e902               shr ecx, 2
// 00605b38  40                   inc eax
// 00605b39  41                   inc ecx
// 00605b3a  8d9b00000000         lea ebx, [ebx]
// 00605b40  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00605b44  f6d2                 not dl
// 00605b46  8850ff               mov byte ptr [eax - 1], dl
// 00605b49  0fb610               movzx edx, byte ptr [eax]
// 00605b4c  f6d2                 not dl
// 00605b4e  8810                 mov byte ptr [eax], dl
// 00605b50  83c004               add eax, 4
// 00605b53  83e901               sub ecx, 1
// 00605b56  75e8                 jne 0x605b40
// 00605b58  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
