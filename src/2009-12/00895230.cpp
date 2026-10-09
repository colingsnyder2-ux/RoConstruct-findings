// roc 2009-12 00895230  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895230
//
// 00895230  56                   push esi
// 00895231  8bf1                 mov esi, ecx
// 00895233  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00895239  57                   push edi
// 0089523a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089523e  85c0                 test eax, eax
// 00895240  7421                 je 0x895263
// 00895242  8b542410             mov edx, dword ptr [esp + 0x10]
// 00895246  57                   push edi
// 00895247  52                   push edx
// 00895248  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089524c  8d8884010000         lea ecx, [eax + 0x184]
// 00895252  8b01                 mov eax, dword ptr [ecx]
// 00895254  8b4050               mov eax, dword ptr [eax + 0x50]
// 00895257  52                   push edx
// 00895258  8b5620               mov edx, dword ptr [esi + 0x20]
// 0089525b  52                   push edx
// 0089525c  ffd0                 call eax
// 0089525e  83f8ff               cmp eax, -1
// 00895261  756d                 jne 0x8952d0
// 00895263  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00895267  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0089526b  57                   push edi
// 0089526c  51                   push ecx
// 0089526d  52                   push edx
// 0089526e  8bce                 mov ecx, esi
// 00895270  e80bcdf7ff           call 0x811f80
// 00895275  83f8ff               cmp eax, -1
// 00895278  7507                 jne 0x895281
// 0089527a  5f                   pop edi
// 0089527b  0bc0                 or eax, eax
// 0089527d  5e                   pop esi
// 0089527e  c20c00               ret 0xc
// 00895281  85ff                 test edi, edi
// 00895283  744b                 je 0x8952d0
// 00895285  833f2c               cmp dword ptr [edi], 0x2c
// 00895288  7546                 jne 0x8952d0
// 0089528a  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00895290  85c9                 test ecx, ecx
// 00895292  743c                 je 0x8952d0
// 00895294  83792000             cmp dword ptr [ecx + 0x20], 0
// 00895298  7436                 je 0x8952d0
// 0089529a  8b7f28               mov edi, dword ptr [edi + 0x28]
// 0089529d  85ff                 test edi, edi
// 0089529f  742f                 je 0x8952d0
// 008952a1  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008952a4  85c9                 test ecx, ecx
// 008952a6  7428                 je 0x8952d0
// 008952a8  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 008952af  741f                 je 0x8952d0
// 008952b1  8d8eec010000         lea ecx, [esi + 0x1ec]
// 008952b7  8b31                 mov esi, dword ptr [ecx]
// 008952b9  8d570c               lea edx, [edi + 0xc]
// 008952bc  8932                 mov dword ptr [edx], esi
// 008952be  8b7104               mov esi, dword ptr [ecx + 4]
// 008952c1  897204               mov dword ptr [edx + 4], esi
// 008952c4  8b7108               mov esi, dword ptr [ecx + 8]
// 008952c7  897208               mov dword ptr [edx + 8], esi
// 008952ca  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008952cd  894a0c               mov dword ptr [edx + 0xc], ecx
// 008952d0  5f                   pop edi
// 008952d1  5e                   pop esi
// 008952d2  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
