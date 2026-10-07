// roc 2008-06 0051fcd0  unit: seg_00510000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fcd0
//
// 0051fcd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051fcd4  8a4108               mov al, byte ptr [ecx + 8]
// 0051fcd7  84c0                 test al, al
// 0051fcd9  7518                 jne 0x51fcf3
// 0051fcdb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051fcde  8b442408             mov eax, dword ptr [esp + 8]
// 0051fce2  85c9                 test ecx, ecx
// 0051fce4  7672                 jbe 0x51fd58
// 0051fce6  8a10                 mov dl, byte ptr [eax]
// 0051fce8  f6d2                 not dl
// 0051fcea  8810                 mov byte ptr [eax], dl
// 0051fcec  40                   inc eax
// 0051fced  83e901               sub ecx, 1
// 0051fcf0  75f4                 jne 0x51fce6
// 0051fcf2  c3                   ret 
// 0051fcf3  3c04                 cmp al, 4
// 0051fcf5  7561                 jne 0x51fd58
// 0051fcf7  80790908             cmp byte ptr [ecx + 9], 8
// 0051fcfb  7522                 jne 0x51fd1f
// 0051fcfd  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051fd00  8b442408             mov eax, dword ptr [esp + 8]
// 0051fd04  85c9                 test ecx, ecx
// 0051fd06  7650                 jbe 0x51fd58
// 0051fd08  49                   dec ecx
// 0051fd09  d1e9                 shr ecx, 1
// 0051fd0b  41                   inc ecx
// 0051fd0c  8d642400             lea esp, [esp]
// 0051fd10  8a10                 mov dl, byte ptr [eax]
// 0051fd12  f6d2                 not dl
// 0051fd14  8810                 mov byte ptr [eax], dl
// 0051fd16  83c002               add eax, 2
// 0051fd19  83e901               sub ecx, 1
// 0051fd1c  75f2                 jne 0x51fd10
// 0051fd1e  c3                   ret 
// 0051fd1f  3c04                 cmp al, 4
// 0051fd21  7535                 jne 0x51fd58
// 0051fd23  80790910             cmp byte ptr [ecx + 9], 0x10
// 0051fd27  752f                 jne 0x51fd58
// 0051fd29  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051fd2c  85c9                 test ecx, ecx
// 0051fd2e  7628                 jbe 0x51fd58
// 0051fd30  8b442408             mov eax, dword ptr [esp + 8]
// 0051fd34  49                   dec ecx
// 0051fd35  c1e902               shr ecx, 2
// 0051fd38  40                   inc eax
// 0051fd39  41                   inc ecx
// 0051fd3a  8d9b00000000         lea ebx, [ebx]
// 0051fd40  0fb650ff             movzx edx, byte ptr [eax - 1]
// 0051fd44  f6d2                 not dl
// 0051fd46  8850ff               mov byte ptr [eax - 1], dl
// 0051fd49  0fb610               movzx edx, byte ptr [eax]
// 0051fd4c  f6d2                 not dl
// 0051fd4e  8810                 mov byte ptr [eax], dl
// 0051fd50  83c004               add eax, 4
// 0051fd53  83e901               sub ecx, 1
// 0051fd56  75e8                 jne 0x51fd40
// 0051fd58  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
