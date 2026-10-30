// roc 2009-12 008e1c50  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1c50
//
// 008e1c50  56                   push esi
// 008e1c51  8bf1                 mov esi, ecx
// 008e1c53  e878fcffff           call 0x8e18d0
// 008e1c58  84c0                 test al, al
// 008e1c5a  753d                 jne 0x8e1c99
// 008e1c5c  8bce                 mov ecx, esi
// 008e1c5e  e8cd21f1ff           call 0x7f3e30
// 008e1c63  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e1c66  394674               cmp dword ptr [esi + 0x74], eax
// 008e1c69  7512                 jne 0x8e1c7d
// 008e1c6b  83f8ff               cmp eax, -1
// 008e1c6e  740d                 je 0x8e1c7d
// 008e1c70  8b16                 mov edx, dword ptr [esi]
// 008e1c72  50                   push eax
// 008e1c73  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008e1c79  8bce                 mov ecx, esi
// 008e1c7b  ffd0                 call eax
// 008e1c7d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e1c80  6a00                 push 0
// 008e1c82  6a00                 push 0
// 008e1c84  51                   push ecx
// 008e1c85  c74674ffffffff       mov dword ptr [esi + 0x74], 0xffffffff
// 008e1c8c  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 008e1c93  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e1c99  5e                   pop esi
// 008e1c9a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTColorSelectorCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp