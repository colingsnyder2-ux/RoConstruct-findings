// roc 2009-06 00813130  unit: CXTPRibbonTabPopupToolBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813130
//
// 00813130  8b442408             mov eax, dword ptr [esp + 8]
// 00813134  56                   push esi
// 00813135  57                   push edi
// 00813136  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0081313a  57                   push edi
// 0081313b  8bf1                 mov esi, ecx
// 0081313d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00813141  50                   push eax
// 00813142  51                   push ecx
// 00813143  8bce                 mov ecx, esi
// 00813145  e8467df2ff           call 0x73ae90
// 0081314a  83f8ff               cmp eax, -1
// 0081314d  7507                 jne 0x813156
// 0081314f  5f                   pop edi
// 00813150  0bc0                 or eax, eax
// 00813152  5e                   pop esi
// 00813153  c20c00               ret 0xc
// 00813156  85ff                 test edi, edi
// 00813158  744b                 je 0x8131a5
// 0081315a  833f2c               cmp dword ptr [edi], 0x2c
// 0081315d  7546                 jne 0x8131a5
// 0081315f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00813165  85c9                 test ecx, ecx
// 00813167  743c                 je 0x8131a5
// 00813169  83792000             cmp dword ptr [ecx + 0x20], 0
// 0081316d  7436                 je 0x8131a5
// 0081316f  8b5728               mov edx, dword ptr [edi + 0x28]
// 00813172  85d2                 test edx, edx
// 00813174  742f                 je 0x8131a5
// 00813176  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00813179  85c9                 test ecx, ecx
// 0081317b  7428                 je 0x8131a5
// 0081317d  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 00813184  741f                 je 0x8131a5
// 00813186  8d8e7c020000         lea ecx, [esi + 0x27c]
// 0081318c  8b31                 mov esi, dword ptr [ecx]
// 0081318e  83c20c               add edx, 0xc
// 00813191  8932                 mov dword ptr [edx], esi
// 00813193  8b7104               mov esi, dword ptr [ecx + 4]
// 00813196  897204               mov dword ptr [edx + 4], esi
// 00813199  8b7108               mov esi, dword ptr [ecx + 8]
// 0081319c  897208               mov dword ptr [edx + 8], esi
// 0081319f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008131a2  894a0c               mov dword ptr [edx + 0xc], ecx
// 008131a5  5f                   pop edi
// 008131a6  5e                   pop esi
// 008131a7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnToolHitTest@CXTPRibbonTabPopupToolBar@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
