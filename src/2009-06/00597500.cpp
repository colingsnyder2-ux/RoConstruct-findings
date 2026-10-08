// from server: 100% by auto
// roc 2009-06 00597500  unit: seg_00590000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597500
//
// 00597500  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597503  8b10                 mov edx, dword ptr [eax]
// 00597505  8bcb                 mov ecx, ebx
// 00597507  c1f908               sar ecx, 8
// 0059750a  880a                 mov byte ptr [edx], cl
// 0059750c  ff00                 inc dword ptr [eax]
// 0059750e  834004ff             add dword ptr [eax + 4], -1
// 00597512  7520                 jne 0x597534
// 00597514  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597517  56                   push esi
// 00597518  ffd0                 call eax
// 0059751a  83c404               add esp, 4
// 0059751d  84c0                 test al, al
// 0059751f  7513                 jne 0x597534
// 00597521  8b0e                 mov ecx, dword ptr [esi]
// 00597523  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0059752a  8b16                 mov edx, dword ptr [esi]
// 0059752c  8b02                 mov eax, dword ptr [edx]
// 0059752e  56                   push esi
// 0059752f  ffd0                 call eax
// 00597531  83c404               add esp, 4
// 00597534  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597537  8b08                 mov ecx, dword ptr [eax]
// 00597539  8819                 mov byte ptr [ecx], bl
// 0059753b  ff00                 inc dword ptr [eax]
// 0059753d  834004ff             add dword ptr [eax + 4], -1
// 00597541  751e                 jne 0x597561
// 00597543  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597546  56                   push esi
// 00597547  ffd2                 call edx
// 00597549  83c404               add esp, 4
// 0059754c  84c0                 test al, al
// 0059754e  7511                 jne 0x597561
// 00597550  8b06                 mov eax, dword ptr [esi]
// 00597552  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00597559  8b0e                 mov ecx, dword ptr [esi]
// 0059755b  8b11                 mov edx, dword ptr [ecx]
// 0059755d  56                   push esi
// 0059755e  ffd2                 call edx
// 00597560  59                   pop ecx
// 00597561  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
