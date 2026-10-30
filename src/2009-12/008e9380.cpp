// roc 2009-12 008e9380  unit: CXTPRibbonGroupControlPopup  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9380
//
// 008e9380  56                   push esi
// 008e9381  8bf1                 mov esi, ecx
// 008e9383  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008e9389  85c0                 test eax, eax
// 008e938b  0f8488000000         je 0x8e9419
// 008e9391  50                   push eax
// 008e9392  e8e9b5faff           call 0x894980
// 008e9397  50                   push eax
// 008e9398  e8a1a8f0ff           call 0x7f3c3e
// 008e939d  83c408               add esp, 8
// 008e93a0  85c0                 test eax, eax
// 008e93a2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008e93a8  7571                 jne 0x8e941b
// 008e93aa  50                   push eax
// 008e93ab  e860590000           call 0x8eed10
// 008e93b0  50                   push eax
// 008e93b1  e888a8f0ff           call 0x7f3c3e
// 008e93b6  83c408               add esp, 8
// 008e93b9  85c0                 test eax, eax
// 008e93bb  740e                 je 0x8e93cb
// 008e93bd  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008e93c3  8b8178020000         mov eax, dword ptr [ecx + 0x278]
// 008e93c9  5e                   pop esi
// 008e93ca  c3                   ret 
// 008e93cb  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 008e93d1  52                   push edx
// 008e93d2  e829590000           call 0x8eed00
// 008e93d7  50                   push eax
// 008e93d8  e861a8f0ff           call 0x7f3c3e
// 008e93dd  83c408               add esp, 8
// 008e93e0  85c0                 test eax, eax
// 008e93e2  740e                 je 0x8e93f2
// 008e93e4  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008e93ea  8b8078020000         mov eax, dword ptr [eax + 0x278]
// 008e93f0  5e                   pop esi
// 008e93f1  c3                   ret 
// 008e93f2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008e93f8  51                   push ecx
// 008e93f9  e8b2550000           call 0x8ee9b0
// 008e93fe  50                   push eax
// 008e93ff  e83aa8f0ff           call 0x7f3c3e
// 008e9404  83c408               add esp, 8
// 008e9407  85c0                 test eax, eax
// 008e9409  740e                 je 0x8e9419
// 008e940b  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 008e9411  8b825c020000         mov eax, dword ptr [edx + 0x25c]
// 008e9417  5e                   pop esi
// 008e9418  c3                   ret 
// 008e9419  33c0                 xor eax, eax
// 008e941b  5e                   pop esi
// 008e941c  c3                   ret 
// copied from an identical function in another client (function ?GetRibbonBar@CXTPRibbonGroupControlPopup@@QBEPAVCXTPRibbonBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp