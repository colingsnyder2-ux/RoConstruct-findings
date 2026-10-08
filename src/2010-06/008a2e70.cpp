// roc 2010-06 008a2e70  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2e70
//
// 008a2e70  8b442408             mov eax, dword ptr [esp + 8]
// 008a2e74  56                   push esi
// 008a2e75  57                   push edi
// 008a2e76  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a2e7a  57                   push edi
// 008a2e7b  8bf1                 mov esi, ecx
// 008a2e7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a2e81  50                   push eax
// 008a2e82  51                   push ecx
// 008a2e83  8bce                 mov ecx, esi
// 008a2e85  e8b631f2ff           call 0x7c6040
// 008a2e8a  83f8ff               cmp eax, -1
// 008a2e8d  7507                 jne 0x8a2e96
// 008a2e8f  5f                   pop edi
// 008a2e90  0bc0                 or eax, eax
// 008a2e92  5e                   pop esi
// 008a2e93  c20c00               ret 0xc
// 008a2e96  85ff                 test edi, edi
// 008a2e98  744b                 je 0x8a2ee5
// 008a2e9a  833f2c               cmp dword ptr [edi], 0x2c
// 008a2e9d  7546                 jne 0x8a2ee5
// 008a2e9f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008a2ea5  85c9                 test ecx, ecx
// 008a2ea7  743c                 je 0x8a2ee5
// 008a2ea9  83792000             cmp dword ptr [ecx + 0x20], 0
// 008a2ead  7436                 je 0x8a2ee5
// 008a2eaf  8b5728               mov edx, dword ptr [edi + 0x28]
// 008a2eb2  85d2                 test edx, edx
// 008a2eb4  742f                 je 0x8a2ee5
// 008a2eb6  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008a2eb9  85c9                 test ecx, ecx
// 008a2ebb  7428                 je 0x8a2ee5
// 008a2ebd  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 008a2ec4  741f                 je 0x8a2ee5
// 008a2ec6  8d8e7c020000         lea ecx, [esi + 0x27c]
// 008a2ecc  8b31                 mov esi, dword ptr [ecx]
// 008a2ece  83c20c               add edx, 0xc
// 008a2ed1  8932                 mov dword ptr [edx], esi
// 008a2ed3  8b7104               mov esi, dword ptr [ecx + 4]
// 008a2ed6  897204               mov dword ptr [edx + 4], esi
// 008a2ed9  8b7108               mov esi, dword ptr [ecx + 8]
// 008a2edc  897208               mov dword ptr [edx + 8], esi
// 008a2edf  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008a2ee2  894a0c               mov dword ptr [edx + 0xc], ecx
// 008a2ee5  5f                   pop edi
// 008a2ee6  5e                   pop esi
// 008a2ee7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
