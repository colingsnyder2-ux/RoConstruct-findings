// roc 2012-06 00a73d20  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73d20
//
// 00a73d20  8b442408             mov eax, dword ptr [esp + 8]
// 00a73d24  56                   push esi
// 00a73d25  57                   push edi
// 00a73d26  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a73d2a  57                   push edi
// 00a73d2b  8bf1                 mov esi, ecx
// 00a73d2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a73d31  50                   push eax
// 00a73d32  51                   push ecx
// 00a73d33  8bce                 mov ecx, esi
// 00a73d35  e856c4f2ff           call 0x9a0190
// 00a73d3a  83f8ff               cmp eax, -1
// 00a73d3d  7507                 jne 0xa73d46
// 00a73d3f  5f                   pop edi
// 00a73d40  0bc0                 or eax, eax
// 00a73d42  5e                   pop esi
// 00a73d43  c20c00               ret 0xc
// 00a73d46  85ff                 test edi, edi
// 00a73d48  744b                 je 0xa73d95
// 00a73d4a  833f2c               cmp dword ptr [edi], 0x2c
// 00a73d4d  7546                 jne 0xa73d95
// 00a73d4f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00a73d55  85c9                 test ecx, ecx
// 00a73d57  743c                 je 0xa73d95
// 00a73d59  83792000             cmp dword ptr [ecx + 0x20], 0
// 00a73d5d  7436                 je 0xa73d95
// 00a73d5f  8b5728               mov edx, dword ptr [edi + 0x28]
// 00a73d62  85d2                 test edx, edx
// 00a73d64  742f                 je 0xa73d95
// 00a73d66  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00a73d69  85c9                 test ecx, ecx
// 00a73d6b  7428                 je 0xa73d95
// 00a73d6d  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 00a73d74  741f                 je 0xa73d95
// 00a73d76  8d8e7c020000         lea ecx, [esi + 0x27c]
// 00a73d7c  8b31                 mov esi, dword ptr [ecx]
// 00a73d7e  83c20c               add edx, 0xc
// 00a73d81  8932                 mov dword ptr [edx], esi
// 00a73d83  8b7104               mov esi, dword ptr [ecx + 4]
// 00a73d86  897204               mov dword ptr [edx + 4], esi
// 00a73d89  8b7108               mov esi, dword ptr [ecx + 8]
// 00a73d8c  897208               mov dword ptr [edx + 8], esi
// 00a73d8f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a73d92  894a0c               mov dword ptr [edx + 0xc], ecx
// 00a73d95  5f                   pop edi
// 00a73d96  5e                   pop esi
// 00a73d97  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
