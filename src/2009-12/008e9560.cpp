// roc 2009-12 008e9560  unit: CXTPRibbonGroupControlPopup  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9560
//
// 008e9560  56                   push esi
// 008e9561  8bf1                 mov esi, ecx
// 008e9563  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9566  3b4e58               cmp ecx, dword ptr [esi + 0x58]
// 008e9569  7405                 je 0x8e9570
// 008e956b  8b4678               mov eax, dword ptr [esi + 0x78]
// 008e956e  5e                   pop esi
// 008e956f  c3                   ret 
// 008e9570  e86bb7faff           call 0x894ce0
// 008e9575  8bce                 mov ecx, esi
// 008e9577  8bd0                 mov edx, eax
// 008e9579  e882ffffff           call 0x8e9500
// 008e957e  3bd0                 cmp edx, eax
// 008e9580  750d                 jne 0x8e958f
// 008e9582  837e7800             cmp dword ptr [esi + 0x78], 0
// 008e9586  7407                 je 0x8e958f
// 008e9588  b801000000           mov eax, 1
// 008e958d  5e                   pop esi
// 008e958e  c3                   ret 
// 008e958f  33c0                 xor eax, eax
// 008e9591  5e                   pop esi
// 008e9592  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp