// roc 2010-06 00567450  unit: seg_00560000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567450
//
// 00567450  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567454  8a4108               mov al, byte ptr [ecx + 8]
// 00567457  84c0                 test al, al
// 00567459  7518                 jne 0x567473
// 0056745b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056745e  8b442408             mov eax, dword ptr [esp + 8]
// 00567462  85c9                 test ecx, ecx
// 00567464  7672                 jbe 0x5674d8
// 00567466  8a10                 mov dl, byte ptr [eax]
// 00567468  f6d2                 not dl
// 0056746a  8810                 mov byte ptr [eax], dl
// 0056746c  40                   inc eax
// 0056746d  83e901               sub ecx, 1
// 00567470  75f4                 jne 0x567466
// 00567472  c3                   ret 
// 00567473  3c04                 cmp al, 4
// 00567475  7561                 jne 0x5674d8
// 00567477  80790908             cmp byte ptr [ecx + 9], 8
// 0056747b  7522                 jne 0x56749f
// 0056747d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00567480  8b442408             mov eax, dword ptr [esp + 8]
// 00567484  85c9                 test ecx, ecx
// 00567486  7650                 jbe 0x5674d8
// 00567488  49                   dec ecx
// 00567489  d1e9                 shr ecx, 1
// 0056748b  41                   inc ecx
// 0056748c  8d642400             lea esp, [esp]
// 00567490  8a10                 mov dl, byte ptr [eax]
// 00567492  f6d2                 not dl
// 00567494  8810                 mov byte ptr [eax], dl
// 00567496  83c002               add eax, 2
// 00567499  83e901               sub ecx, 1
// 0056749c  75f2                 jne 0x567490
// 0056749e  c3                   ret 
// 0056749f  3c04                 cmp al, 4
// 005674a1  7535                 jne 0x5674d8
// 005674a3  80790910             cmp byte ptr [ecx + 9], 0x10
// 005674a7  752f                 jne 0x5674d8
// 005674a9  8b4904               mov ecx, dword ptr [ecx + 4]
// 005674ac  85c9                 test ecx, ecx
// 005674ae  7628                 jbe 0x5674d8
// 005674b0  8b442408             mov eax, dword ptr [esp + 8]
// 005674b4  49                   dec ecx
// 005674b5  c1e902               shr ecx, 2
// 005674b8  40                   inc eax
// 005674b9  41                   inc ecx
// 005674ba  8d9b00000000         lea ebx, [ebx]
// 005674c0  0fb650ff             movzx edx, byte ptr [eax - 1]
// 005674c4  f6d2                 not dl
// 005674c6  8850ff               mov byte ptr [eax - 1], dl
// 005674c9  0fb610               movzx edx, byte ptr [eax]
// 005674cc  f6d2                 not dl
// 005674ce  8810                 mov byte ptr [eax], dl
// 005674d0  83c004               add eax, 4
// 005674d3  83e901               sub ecx, 1
// 005674d6  75e8                 jne 0x5674c0
// 005674d8  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
