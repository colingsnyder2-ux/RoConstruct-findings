// from server: 100% by auto
// roc 2008-06 007967d0  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007967d0
//
// 007967d0  8b442408             mov eax, dword ptr [esp + 8]
// 007967d4  56                   push esi
// 007967d5  57                   push edi
// 007967d6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007967da  57                   push edi
// 007967db  8bf1                 mov esi, ecx
// 007967dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007967e1  50                   push eax
// 007967e2  51                   push ecx
// 007967e3  8bce                 mov ecx, esi
// 007967e5  e896c1f2ff           call 0x6c2980
// 007967ea  83f8ff               cmp eax, -1
// 007967ed  7507                 jne 0x7967f6
// 007967ef  5f                   pop edi
// 007967f0  0bc0                 or eax, eax
// 007967f2  5e                   pop esi
// 007967f3  c20c00               ret 0xc
// 007967f6  85ff                 test edi, edi
// 007967f8  744b                 je 0x796845
// 007967fa  833f2c               cmp dword ptr [edi], 0x2c
// 007967fd  7546                 jne 0x796845
// 007967ff  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00796805  85c9                 test ecx, ecx
// 00796807  743c                 je 0x796845
// 00796809  83792000             cmp dword ptr [ecx + 0x20], 0
// 0079680d  7436                 je 0x796845
// 0079680f  8b5728               mov edx, dword ptr [edi + 0x28]
// 00796812  85d2                 test edx, edx
// 00796814  742f                 je 0x796845
// 00796816  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00796819  85c9                 test ecx, ecx
// 0079681b  7428                 je 0x796845
// 0079681d  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 00796824  741f                 je 0x796845
// 00796826  8d8e7c020000         lea ecx, [esi + 0x27c]
// 0079682c  8b31                 mov esi, dword ptr [ecx]
// 0079682e  83c20c               add edx, 0xc
// 00796831  8932                 mov dword ptr [edx], esi
// 00796833  8b7104               mov esi, dword ptr [ecx + 4]
// 00796836  897204               mov dword ptr [edx + 4], esi
// 00796839  8b7108               mov esi, dword ptr [ecx + 8]
// 0079683c  897208               mov dword ptr [edx + 8], esi
// 0079683f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00796842  894a0c               mov dword ptr [edx + 0xc], ecx
// 00796845  5f                   pop edi
// 00796846  5e                   pop esi
// 00796847  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
