// roc 2011-06 00557500  unit: seg_00550000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557500
//
// 00557500  56                   push esi
// 00557501  8b742408             mov esi, dword ptr [esp + 8]
// 00557505  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0055750c  741b                 je 0x557529
// 0055750e  8b06                 mov eax, dword ptr [esi]
// 00557510  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00557517  8b0e                 mov ecx, dword ptr [esi]
// 00557519  8b5614               mov edx, dword ptr [esi + 0x14]
// 0055751c  895118               mov dword ptr [ecx + 0x18], edx
// 0055751f  8b06                 mov eax, dword ptr [esi]
// 00557521  8b08                 mov ecx, dword ptr [eax]
// 00557523  56                   push esi
// 00557524  ffd1                 call ecx
// 00557526  83c404               add esp, 4
// 00557529  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0055752c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0055752f  721a                 jb 0x55754b
// 00557531  8b16                 mov edx, dword ptr [esi]
// 00557533  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 0055753a  8b06                 mov eax, dword ptr [esi]
// 0055753c  8b4804               mov ecx, dword ptr [eax + 4]
// 0055753f  6aff                 push -1
// 00557541  56                   push esi
// 00557542  ffd1                 call ecx
// 00557544  83c408               add esp, 8
// 00557547  33c0                 xor eax, eax
// 00557549  5e                   pop esi
// 0055754a  c3                   ret 
// 0055754b  8b4608               mov eax, dword ptr [esi + 8]
// 0055754e  85c0                 test eax, eax
// 00557550  7417                 je 0x557569
// 00557552  894804               mov dword ptr [eax + 4], ecx
// 00557555  8b5608               mov edx, dword ptr [esi + 8]
// 00557558  8b4660               mov eax, dword ptr [esi + 0x60]
// 0055755b  894208               mov dword ptr [edx + 8], eax
// 0055755e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00557561  8b11                 mov edx, dword ptr [ecx]
// 00557563  56                   push esi
// 00557564  ffd2                 call edx
// 00557566  83c404               add esp, 4
// 00557569  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055756d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00557573  51                   push ecx
// 00557574  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00557578  8d54240c             lea edx, [esp + 0xc]
// 0055757c  52                   push edx
// 0055757d  51                   push ecx
// 0055757e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00557586  8b5004               mov edx, dword ptr [eax + 4]
// 00557589  56                   push esi
// 0055758a  ffd2                 call edx
// 0055758c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00557590  014678               add dword ptr [esi + 0x78], eax
// 00557593  83c410               add esp, 0x10
// 00557596  5e                   pop esi
// 00557597  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
