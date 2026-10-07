// roc 2012-06 00648e30  unit: seg_00640000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00648e30
//
// 00648e30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00648e34  8a4108               mov al, byte ptr [ecx + 8]
// 00648e37  84c0                 test al, al
// 00648e39  7518                 jne 0x648e53
// 00648e3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00648e3e  8b442408             mov eax, dword ptr [esp + 8]
// 00648e42  85c9                 test ecx, ecx
// 00648e44  7672                 jbe 0x648eb8
// 00648e46  8a10                 mov dl, byte ptr [eax]
// 00648e48  f6d2                 not dl
// 00648e4a  8810                 mov byte ptr [eax], dl
// 00648e4c  40                   inc eax
// 00648e4d  83e901               sub ecx, 1
// 00648e50  75f4                 jne 0x648e46
// 00648e52  c3                   ret 
// 00648e53  3c04                 cmp al, 4
// 00648e55  7561                 jne 0x648eb8
// 00648e57  80790908             cmp byte ptr [ecx + 9], 8
// 00648e5b  7522                 jne 0x648e7f
// 00648e5d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00648e60  8b442408             mov eax, dword ptr [esp + 8]
// 00648e64  85c9                 test ecx, ecx
// 00648e66  7650                 jbe 0x648eb8
// 00648e68  49                   dec ecx
// 00648e69  d1e9                 shr ecx, 1
// 00648e6b  41                   inc ecx
// 00648e6c  8d642400             lea esp, [esp]
// 00648e70  8a10                 mov dl, byte ptr [eax]
// 00648e72  f6d2                 not dl
// 00648e74  8810                 mov byte ptr [eax], dl
// 00648e76  83c002               add eax, 2
// 00648e79  83e901               sub ecx, 1
// 00648e7c  75f2                 jne 0x648e70
// 00648e7e  c3                   ret 
// 00648e7f  3c04                 cmp al, 4
// 00648e81  7535                 jne 0x648eb8
// 00648e83  80790910             cmp byte ptr [ecx + 9], 0x10
// 00648e87  752f                 jne 0x648eb8
// 00648e89  8b4904               mov ecx, dword ptr [ecx + 4]
// 00648e8c  85c9                 test ecx, ecx
// 00648e8e  7628                 jbe 0x648eb8
// 00648e90  8b442408             mov eax, dword ptr [esp + 8]
// 00648e94  49                   dec ecx
// 00648e95  c1e902               shr ecx, 2
// 00648e98  40                   inc eax
// 00648e99  41                   inc ecx
// 00648e9a  8d9b00000000         lea ebx, [ebx]
// 00648ea0  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00648ea4  f6d2                 not dl
// 00648ea6  8850ff               mov byte ptr [eax - 1], dl
// 00648ea9  0fb610               movzx edx, byte ptr [eax]
// 00648eac  f6d2                 not dl
// 00648eae  8810                 mov byte ptr [eax], dl
// 00648eb0  83c004               add eax, 4
// 00648eb3  83e901               sub ecx, 1
// 00648eb6  75e8                 jne 0x648ea0
// 00648eb8  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
