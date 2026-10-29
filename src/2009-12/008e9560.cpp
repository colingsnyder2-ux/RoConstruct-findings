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
// 0