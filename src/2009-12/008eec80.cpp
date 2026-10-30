// roc 2009-12 008eec80  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eec80
//
// 008eec80  8b442408             mov eax, dword ptr [esp + 8]
// 008eec84  56                   push esi
// 008eec85  57                   push edi
// 008eec86  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008eec8a  57                   push edi
// 008eec8b  8bf1                 mov esi, ecx
// 008eec8d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008eec91  50                   push eax
// 008eec92  51                   push ecx
// 008eec93  8bce                 mov ecx, esi
// 008eec95  e8e632f2ff           call 0x811f80
// 008eec9a  83f8ff               cmp eax, -1
// 008eec9d  7507                 jne 0x8eeca6
// 008eec9f  5f                   pop edi
// 008eeca0  0bc0                 or eax, eax
// 008eeca2  5e                   pop esi
// 008eeca3  c20c00               ret 0xc
// 008eeca6  85ff                 test edi, edi
// 008eeca8  744b                 je 0x8eecf5
// 008eecaa  833f2c               cmp dword ptr [edi], 0x2c
// 008eecad  7546                 jne 0x8eecf5
// 008eecaf  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008eecb5  85c9                 test ecx, ecx
// 008eecb7  743c                 je 0x8eecf5
// 008eecb9  83792000             cmp dword ptr [ecx + 0x20], 0
// 008eecbd  7436                 je 0x8eecf5
// 008eecbf  8b5728               mov edx, dword ptr [edi + 0x28]
// 008eecc2  85d2                 test edx, edx
// 008eecc4  742f                 je 0x8eecf5
// 008eecc6  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008eecc9  85c9                 test ecx, ecx
// 008eeccb  7428                 je 0x8eecf5
// 008eeccd  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 008eecd4  741f                 je 0x8eecf5
// 008eecd6  8d8e7c020000         lea ecx, [esi + 0x27c]
// 008eecdc  8b31                 mov esi, dword ptr [ecx]
// 008eecde  83c20c               add edx, 0xc
// 008eece1  8932                 mov dword ptr [edx], esi
// 008eece3  8b7104               mov esi, dword ptr [ecx + 4]
// 008eece6  897204               mov dword ptr [edx + 4], esi
// 008eece9  8b7108               mov esi, dword ptr [ecx + 8]
// 008eecec  897208               mov dword ptr [edx + 8], esi
// 008eecef  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008eecf2  894a0c               mov dword ptr [edx + 0xc], ecx
// 008eecf5  5f                   pop edi
// 008eecf6  5e                   pop esi
// 008eecf7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
