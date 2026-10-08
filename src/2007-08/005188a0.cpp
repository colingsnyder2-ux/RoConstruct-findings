// from server: 100% by auto
// roc 2007-08 005188a0  unit: seg_00510000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005188a0
//
// 005188a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005188a4  8a4108               mov al, byte ptr [ecx + 8]
// 005188a7  84c0                 test al, al
// 005188a9  751a                 jne 0x5188c5
// 005188ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 005188ae  85c9                 test ecx, ecx
// 005188b0  8b442408             mov eax, dword ptr [esp + 8]
// 005188b4  7674                 jbe 0x51892a
// 005188b6  8a10                 mov dl, byte ptr [eax]
// 005188b8  f6d2                 not dl
// 005188ba  8810                 mov byte ptr [eax], dl
// 005188bc  83c001               add eax, 1
// 005188bf  83e901               sub ecx, 1
// 005188c2  75f2                 jne 0x5188b6
// 005188c4  c3                   ret 
// 005188c5  3c04                 cmp al, 4
// 005188c7  7561                 jne 0x51892a
// 005188c9  80790908             cmp byte ptr [ecx + 9], 8
// 005188cd  7522                 jne 0x5188f1
// 005188cf  8b4904               mov ecx, dword ptr [ecx + 4]
// 005188d2  85c9                 test ecx, ecx
// 005188d4  8b442408             mov eax, dword ptr [esp + 8]
// 005188d8  7650                 jbe 0x51892a
// 005188da  83c1ff               add ecx, -1
// 005188dd  d1e9                 shr ecx, 1
// 005188df  83c101               add ecx, 1
// 005188e2  8a10                 mov dl, byte ptr [eax]
// 005188e4  f6d2                 not dl
// 005188e6  8810                 mov byte ptr [eax], dl
// 005188e8  83c002               add eax, 2
// 005188eb  83e901               sub ecx, 1
// 005188ee  75f2                 jne 0x5188e2
// 005188f0  c3                   ret 
// 005188f1  3c04                 cmp al, 4
// 005188f3  7535                 jne 0x51892a
// 005188f5  80790910             cmp byte ptr [ecx + 9], 0x10
// 005188f9  752f                 jne 0x51892a
// 005188fb  8b4904               mov ecx, dword ptr [ecx + 4]
// 005188fe  85c9                 test ecx, ecx
// 00518900  7628                 jbe 0x51892a
// 00518902  8b442408             mov eax, dword ptr [esp + 8]
// 00518906  83c1ff               add ecx, -1
// 00518909  c1e902               shr ecx, 2
// 0051890c  83c001               add eax, 1
// 0051890f  83c101               add ecx, 1
// 00518912  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00518916  f6d2                 not dl
// 00518918  8850ff               mov byte ptr [eax - 1], dl
// 0051891b  0fb610               movzx edx, byte ptr [eax]
// 0051891e  f6d2                 not dl
// 00518920  8810                 mov byte ptr [eax], dl
// 00518922  83c004               add eax, 4
// 00518925  83e901               sub ecx, 1
// 00518928  75e8                 jne 0x518912
// 0051892a  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_invert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
