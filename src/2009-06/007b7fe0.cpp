// roc 2009-06 007b7fe0  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7fe0
//
// 007b7fe0  56                   push esi
// 007b7fe1  8bf1                 mov esi, ecx
// 007b7fe3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007b7fe9  57                   push edi
// 007b7fea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007b7fee  85c0                 test eax, eax
// 007b7ff0  7421                 je 0x7b8013
// 007b7ff2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7ff6  57                   push edi
// 007b7ff7  52                   push edx
// 007b7ff8  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b7ffc  8d8884010000         lea ecx, [eax + 0x184]
// 007b8002  8b01                 mov eax, dword ptr [ecx]
// 007b8004  8b4050               mov eax, dword ptr [eax + 0x50]
// 007b8007  52                   push edx
// 007b8008  8b5620               mov edx, dword ptr [esi + 0x20]
// 007b800b  52                   push edx
// 007b800c  ffd0                 call eax
// 007b800e  83f8ff               cmp eax, -1
// 007b8011  756d                 jne 0x7b8080
// 007b8013  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b8017  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007b801b  57                   push edi
// 007b801c  51                   push ecx
// 007b801d  52                   push edx
// 007b801e  8bce                 mov ecx, esi
// 007b8020  e86b2ef8ff           call 0x73ae90
// 007b8025  83f8ff               cmp eax, -1
// 007b8028  7507                 jne 0x7b8031
// 007b802a  5f                   pop edi
// 007b802b  0bc0                 or eax, eax
// 007b802d  5e                   pop esi
// 007b802e  c20c00               ret 0xc
// 007b8031  85ff                 test edi, edi
// 007b8033  744b                 je 0x7b8080
// 007b8035  833f2c               cmp dword ptr [edi], 0x2c
// 007b8038  7546                 jne 0x7b8080
// 007b803a  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007b8040  85c9                 test ecx, ecx
// 007b8042  743c                 je 0x7b8080
// 007b8044  83792000             cmp dword ptr [ecx + 0x20], 0
// 007b8048  7436                 je 0x7b8080
// 007b804a  8b7f28               mov edi, dword ptr [edi + 0x28]
// 007b804d  85ff                 test edi, edi
// 007b804f  742f                 je 0x7b8080
// 007b8051  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007b8054  85c9                 test ecx, ecx
// 007b8056  7428                 je 0x7b8080
// 007b8058  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 007b805f  741f                 je 0x7b8080
// 007b8061  8d8eec010000         lea ecx, [esi + 0x1ec]
// 007b8067  8b31                 mov esi, dword ptr [ecx]
// 007b8069  8d570c               lea edx, [edi + 0xc]
// 007b806c  8932                 mov dword ptr [edx], esi
// 007b806e  8b7104               mov esi, dword ptr [ecx + 4]
// 007b8071  897204               mov dword ptr [edx + 4], esi
// 007b8074  8b7108               mov esi, dword ptr [ecx + 8]
// 007b8077  897208               mov dword ptr [edx + 8], esi
// 007b807a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007b807d  894a0c               mov dword ptr [edx + 0xc], ecx
// 007b8080  5f                   pop edi
// 007b8081  5e                   pop esi
// 007b8082  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
