// roc 2011-06 0055c320  unit: seg_00550000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055c320
//
// 0055c320  8b442404             mov eax, dword ptr [esp + 4]
// 0055c324  8a5008               mov dl, byte ptr [eax + 8]
// 0055c327  f6c202               test dl, 2
// 0055c32a  0f84c3000000         je 0x55c3f3
// 0055c330  8b08                 mov ecx, dword ptr [eax]
// 0055c332  8a4009               mov al, byte ptr [eax + 9]
// 0055c335  56                   push esi
// 0055c336  3c08                 cmp al, 8
// 0055c338  7551                 jne 0x55c38b
// 0055c33a  80fa02               cmp dl, 2
// 0055c33d  7525                 jne 0x55c364
// 0055c33f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055c343  85c9                 test ecx, ecx
// 0055c345  0f86a7000000         jbe 0x55c3f2
// 0055c34b  8bf1                 mov esi, ecx
// 0055c34d  8d4900               lea ecx, [ecx]
// 0055c350  8a08                 mov cl, byte ptr [eax]
// 0055c352  8a5002               mov dl, byte ptr [eax + 2]
// 0055c355  8810                 mov byte ptr [eax], dl
// 0055c357  884802               mov byte ptr [eax + 2], cl
// 0055c35a  83c003               add eax, 3
// 0055c35d  83ee01               sub esi, 1
// 0055c360  75ee                 jne 0x55c350
// 0055c362  5e                   pop esi
// 0055c363  c3                   ret 
// 0055c364  80fa06               cmp dl, 6
// 0055c367  0f8585000000         jne 0x55c3f2
// 0055c36d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055c371  85c9                 test ecx, ecx
// 0055c373  767d                 jbe 0x55c3f2
// 0055c375  8bf1                 mov esi, ecx
// 0055c377  8a08                 mov cl, byte ptr [eax]
// 0055c379  8a5002               mov dl, byte ptr [eax + 2]
// 0055c37c  8810                 mov byte ptr [eax], dl
// 0055c37e  884802               mov byte ptr [eax + 2], cl
// 0055c381  83c004               add eax, 4
// 0055c384  83ee01               sub esi, 1
// 0055c387  75ee                 jne 0x55c377
// 0055c389  5e                   pop esi
// 0055c38a  c3                   ret 
// 0055c38b  3c10                 cmp al, 0x10
// 0055c38d  7563                 jne 0x55c3f2
// 0055c38f  80fa02               cmp dl, 2
// 0055c392  752e                 jne 0x55c3c2
// 0055c394  85c9                 test ecx, ecx
// 0055c396  765a                 jbe 0x55c3f2
// 0055c398  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055c39c  40                   inc eax
// 0055c39d  8bf1                 mov esi, ecx
// 0055c39f  90                   nop 
// 0055c3a0  0fb65003             movzx edx, byte ptr [eax + 3]
// 0055c3a4  8a48ff               mov cl, byte ptr [eax - 1]
// 0055c3a7  8850ff               mov byte ptr [eax - 1], dl
// 0055c3aa  0fb65004             movzx edx, byte ptr [eax + 4]
// 0055c3ae  884803               mov byte ptr [eax + 3], cl
// 0055c3b1  8a08                 mov cl, byte ptr [eax]
// 0055c3b3  8810                 mov byte ptr [eax], dl
// 0055c3b5  884804               mov byte ptr [eax + 4], cl
// 0055c3b8  83c006               add eax, 6
// 0055c3bb  83ee01               sub esi, 1
// 0055c3be  75e0                 jne 0x55c3a0
// 0055c3c0  5e                   pop esi
// 0055c3c1  c3                   ret 
// 0055c3c2  80fa06               cmp dl, 6
// 0055c3c5  752b                 jne 0x55c3f2
// 0055c3c7  85c9                 test ecx, ecx
// 0055c3c9  7627                 jbe 0x55c3f2
// 0055c3cb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055c3cf  40                   inc eax
// 0055c3d0  8bf1                 mov esi, ecx
// 0055c3d2  0fb65003             movzx edx, byte ptr [eax + 3]
// 0055c3d6  8a48ff               mov cl, byte ptr [eax - 1]
// 0055c3d9  8850ff               mov byte ptr [eax - 1], dl
// 0055c3dc  0fb65004             movzx edx, byte ptr [eax + 4]
// 0055c3e0  884803               mov byte ptr [eax + 3], cl
// 0055c3e3  8a08                 mov cl, byte ptr [eax]
// 0055c3e5  8810                 mov byte ptr [eax], dl
// 0055c3e7  884804               mov byte ptr [eax + 4], cl
// 0055c3ea  83c008               add eax, 8
// 0055c3ed  83ee01               sub esi, 1
// 0055c3f0  75e0                 jne 0x55c3d2
// 0055c3f2  5e                   pop esi
// 0055c3f3  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
