// from server: 100% by auto
// roc 2011-06 0055bfb0  unit: seg_00550000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055bfb0
//
// 0055bfb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055bfb4  8a4108               mov al, byte ptr [ecx + 8]
// 0055bfb7  84c0                 test al, al
// 0055bfb9  7518                 jne 0x55bfd3
// 0055bfbb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055bfbe  8b442408             mov eax, dword ptr [esp + 8]
// 0055bfc2  85c9                 test ecx, ecx
// 0055bfc4  7672                 jbe 0x55c038
// 0055bfc6  8a10                 mov dl, byte ptr [eax]
// 0055bfc8  f6d2                 not dl
// 0055bfca  8810                 mov byte ptr [eax], dl
// 0055bfcc  40                   inc eax
// 0055bfcd  83e901               sub ecx, 1
// 0055bfd0  75f4                 jne 0x55bfc6
// 0055bfd2  c3                   ret 
// 0055bfd3  3c04                 cmp al, 4
// 0055bfd5  7561                 jne 0x55c038
// 0055bfd7  80790908             cmp byte ptr [ecx + 9], 8
// 0055bfdb  7522                 jne 0x55bfff
// 0055bfdd  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055bfe0  8b442408             mov eax, dword ptr [esp + 8]
// 0055bfe4  85c9                 test ecx, ecx
// 0055bfe6  7650                 jbe 0x55c038
// 0055bfe8  49                   dec ecx
// 0055bfe9  d1e9                 shr ecx, 1
// 0055bfeb  41                   inc ecx
// 0055bfec  8d642400             lea esp, [esp]
// 0055bff0  8a10                 mov dl, byte ptr [eax]
// 0055bff2  f6d2                 not dl
// 0055bff4  8810                 mov byte ptr [eax], dl
// 0055bff6  83c002               add eax, 2
// 0055bff9  83e901               sub ecx, 1
// 0055bffc  75f2                 jne 0x55bff0
// 0055bffe  c3                   ret 
// 0055bfff  3c04                 cmp al, 4
// 0055c001  7535                 jne 0x55c038
// 0055c003  80790910             cmp byte ptr [ecx + 9], 0x10
// 0055c007  752f                 jne 0x55c038
// 0055c009  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055c00c  85c9                 test ecx, ecx
// 0055c00e  7628                 jbe 0x55c038
// 0055c010  8b442408             mov eax, dword ptr [esp + 8]
// 0055c014  49                   dec ecx
// 0055c015  c1e902               shr ecx, 2
// 0055c018  40                   inc eax
// 0055c019  41                   inc ecx
// 0055c01a  8d9b00000000         lea ebx, [ebx]
// 0055c020  0fb650ff             movzx edx, byte ptr [eax - 1]
// 0055c024  f6d2                 not dl
// 0055c026  8850ff               mov byte ptr [eax - 1], dl
// 0055c029  0fb610               movzx edx, byte ptr [eax]
// 0055c02c  f6d2                 not dl
// 0055c02e  8810                 mov byte ptr [eax], dl
// 0055c030  83c004               add eax, 4
// 0055c033  83e901               sub ecx, 1
// 0055c036  75e8                 jne 0x55c020
// 0055c038  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
