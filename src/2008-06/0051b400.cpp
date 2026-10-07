// roc 2008-06 0051b400  unit: G3D::_internal::DialogTemplate  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b400
//
// 0051b400  56                   push esi
// 0051b401  8b742408             mov esi, dword ptr [esp + 8]
// 0051b405  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0051b40c  7511                 jne 0x51b41f
// 0051b40e  56                   push esi
// 0051b40f  e8acfaffff           call 0x51aec0
// 0051b414  83c404               add esp, 4
// 0051b417  84c0                 test al, al
// 0051b419  7504                 jne 0x51b41f
// 0051b41b  32c0                 xor al, al
// 0051b41d  5e                   pop esi
// 0051b41e  c3                   ret 
// 0051b41f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051b425  8b4010               mov eax, dword ptr [eax + 0x10]
// 0051b428  8d88d0000000         lea ecx, [eax + 0xd0]
// 0051b42e  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 0051b434  7542                 jne 0x51b478
// 0051b436  8b16                 mov edx, dword ptr [esi]
// 0051b438  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 0051b43f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051b445  8b0e                 mov ecx, dword ptr [esi]
// 0051b447  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051b44a  895118               mov dword ptr [ecx + 0x18], edx
// 0051b44d  8b06                 mov eax, dword ptr [esi]
// 0051b44f  8b4804               mov ecx, dword ptr [eax + 4]
// 0051b452  6a03                 push 3
// 0051b454  56                   push esi
// 0051b455  ffd1                 call ecx
// 0051b457  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 0051b461  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 0051b467  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051b46a  83c408               add esp, 8
// 0051b46d  41                   inc ecx
// 0051b46e  83e107               and ecx, 7
// 0051b471  894e10               mov dword ptr [esi + 0x10], ecx
// 0051b474  b001                 mov al, 1
// 0051b476  5e                   pop esi
// 0051b477  c3                   ret 
// 0051b478  8b5618               mov edx, dword ptr [esi + 0x18]
// 0051b47b  50                   push eax
// 0051b47c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0051b47f  56                   push esi
// 0051b480  ffd0                 call eax
// 0051b482  83c408               add esp, 8
// 0051b485  84c0                 test al, al
// 0051b487  7492                 je 0x51b41b
// 0051b489  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 0051b48f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051b492  41                   inc ecx
// 0051b493  83e107               and ecx, 7
// 0051b496  894e10               mov dword ptr [esi + 0x10], ecx
// 0051b499  b001                 mov al, 1
// 0051b49b  5e                   pop esi
// 0051b49c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
