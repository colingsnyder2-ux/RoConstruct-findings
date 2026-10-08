// roc 2011-06 008fb9e0  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fb9e0
//
// 008fb9e0  8b442408             mov eax, dword ptr [esp + 8]
// 008fb9e4  56                   push esi
// 008fb9e5  57                   push edi
// 008fb9e6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008fb9ea  57                   push edi
// 008fb9eb  8bf1                 mov esi, ecx
// 008fb9ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fb9f1  50                   push eax
// 008fb9f2  51                   push ecx
// 008fb9f3  8bce                 mov ecx, esi
// 008fb9f5  e876c1f2ff           call 0x827b70
// 008fb9fa  83f8ff               cmp eax, -1
// 008fb9fd  7507                 jne 0x8fba06
// 008fb9ff  5f                   pop edi
// 008fba00  0bc0                 or eax, eax
// 008fba02  5e                   pop esi
// 008fba03  c20c00               ret 0xc
// 008fba06  85ff                 test edi, edi
// 008fba08  744b                 je 0x8fba55
// 008fba0a  833f2c               cmp dword ptr [edi], 0x2c
// 008fba0d  7546                 jne 0x8fba55
// 008fba0f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008fba15  85c9                 test ecx, ecx
// 008fba17  743c                 je 0x8fba55
// 008fba19  83792000             cmp dword ptr [ecx + 0x20], 0
// 008fba1d  7436                 je 0x8fba55
// 008fba1f  8b5728               mov edx, dword ptr [edi + 0x28]
// 008fba22  85d2                 test edx, edx
// 008fba24  742f                 je 0x8fba55
// 008fba26  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008fba29  85c9                 test ecx, ecx
// 008fba2b  7428                 je 0x8fba55
// 008fba2d  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 008fba34  741f                 je 0x8fba55
// 008fba36  8d8e7c020000         lea ecx, [esi + 0x27c]
// 008fba3c  8b31                 mov esi, dword ptr [ecx]
// 008fba3e  83c20c               add edx, 0xc
// 008fba41  8932                 mov dword ptr [edx], esi
// 008fba43  8b7104               mov esi, dword ptr [ecx + 4]
// 008fba46  897204               mov dword ptr [edx + 4], esi
// 008fba49  8b7108               mov esi, dword ptr [ecx + 8]
// 008fba4c  897208               mov dword ptr [edx + 8], esi
// 008fba4f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008fba52  894a0c               mov dword ptr [edx + 0xc], ecx
// 008fba55  5f                   pop edi
// 008fba56  5e                   pop esi
// 008fba57  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
