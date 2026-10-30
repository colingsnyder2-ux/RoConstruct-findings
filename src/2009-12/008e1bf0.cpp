// roc 2009-12 008e1bf0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1bf0
//
// 008e1bf0  83ec10               sub esp, 0x10
// 008e1bf3  56                   push esi
// 008e1bf4  8bf1                 mov esi, ecx
// 008e1bf6  e8d5fcffff           call 0x8e18d0
// 008e1bfb  84c0                 test al, al
// 008e1bfd  7543                 jne 0x8e1c42
// 008e1bff  8bce                 mov ecx, esi
// 008e1c01  e82a22f1ff           call 0x7f3e30
// 008e1c06  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e1c09  8d442404             lea eax, [esp + 4]
// 008e1c0d  50                   push eax
// 008e1c0e  51                   push ecx
// 008e1c0f  ff1550cc9800         call dword ptr [0x98cc50]
// 008e1c15  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e1c19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e1c1d  52                   push edx
// 008e1c1e  50                   push eax
// 008e1c1f  8d4c240c             lea ecx, [esp + 0xc]
// 008e1c23  51                   push ecx
// 008e1c24  ff155cca9800         call dword ptr [0x98ca5c]
// 008e1c2a  85c0                 test eax, eax
// 008e1c2c  7414                 je 0x8e1c42
// 008e1c2e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e1c31  8b5670               mov edx, dword ptr [esi + 0x70]
// 008e1c34  6a00                 push 0
// 008e1c36  6a00                 push 0
// 008e1c38  50                   push eax
// 008e1c39  895674               mov dword ptr [esi + 0x74], edx
// 008e1c3c  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e1c42  5e                   pop esi
// 008e1c43  83c410               add esp, 0x10
// 008e1c46  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTColorSelectorCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp