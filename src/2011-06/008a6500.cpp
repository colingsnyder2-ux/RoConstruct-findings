// roc 2011-06 008a6500  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6500
//
// 008a6500  56                   push esi
// 008a6501  8bf1                 mov esi, ecx
// 008a6503  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008a6509  57                   push edi
// 008a650a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a650e  85c0                 test eax, eax
// 008a6510  7421                 je 0x8a6533
// 008a6512  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6516  57                   push edi
// 008a6517  52                   push edx
// 008a6518  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a651c  8d8884010000         lea ecx, [eax + 0x184]
// 008a6522  8b01                 mov eax, dword ptr [ecx]
// 008a6524  8b4050               mov eax, dword ptr [eax + 0x50]
// 008a6527  52                   push edx
// 008a6528  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a652b  52                   push edx
// 008a652c  ffd0                 call eax
// 008a652e  83f8ff               cmp eax, -1
// 008a6531  756d                 jne 0x8a65a0
// 008a6533  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a6537  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a653b  57                   push edi
// 008a653c  51                   push ecx
// 008a653d  52                   push edx
// 008a653e  8bce                 mov ecx, esi
// 008a6540  e82b16f8ff           call 0x827b70
// 008a6545  83f8ff               cmp eax, -1
// 008a6548  7507                 jne 0x8a6551
// 008a654a  5f                   pop edi
// 008a654b  0bc0                 or eax, eax
// 008a654d  5e                   pop esi
// 008a654e  c20c00               ret 0xc
// 008a6551  85ff                 test edi, edi
// 008a6553  744b                 je 0x8a65a0
// 008a6555  833f2c               cmp dword ptr [edi], 0x2c
// 008a6558  7546                 jne 0x8a65a0
// 008a655a  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008a6560  85c9                 test ecx, ecx
// 008a6562  743c                 je 0x8a65a0
// 008a6564  83792000             cmp dword ptr [ecx + 0x20], 0
// 008a6568  7436                 je 0x8a65a0
// 008a656a  8b7f28               mov edi, dword ptr [edi + 0x28]
// 008a656d  85ff                 test edi, edi
// 008a656f  742f                 je 0x8a65a0
// 008a6571  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008a6574  85c9                 test ecx, ecx
// 008a6576  7428                 je 0x8a65a0
// 008a6578  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 008a657f  741f                 je 0x8a65a0
// 008a6581  8d8eec010000         lea ecx, [esi + 0x1ec]
// 008a6587  8b31                 mov esi, dword ptr [ecx]
// 008a6589  8d570c               lea edx, [edi + 0xc]
// 008a658c  8932                 mov dword ptr [edx], esi
// 008a658e  8b7104               mov esi, dword ptr [ecx + 4]
// 008a6591  897204               mov dword ptr [edx + 4], esi
// 008a6594  8b7108               mov esi, dword ptr [ecx + 8]
// 008a6597  897208               mov dword ptr [edx + 8], esi
// 008a659a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008a659d  894a0c               mov dword ptr [edx + 0xc], ecx
// 008a65a0  5f                   pop edi
// 008a65a1  5e                   pop esi
// 008a65a2  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
