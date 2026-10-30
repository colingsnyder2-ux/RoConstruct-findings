// roc 2009-12 008e1eb0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1eb0
//
// 008e1eb0  56                   push esi
// 008e1eb1  8bf1                 mov esi, ecx
// 008e1eb3  e818faffff           call 0x8e18d0
// 008e1eb8  84c0                 test al, al
// 008e1eba  7419                 je 0x8e1ed5
// 008e1ebc  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008e1ec2  e83b1df1ff           call 0x7f3c02
// 008e1ec7  8bc6                 mov eax, esi
// 008e1ec9  50                   push eax
// 008e1eca  8bce                 mov ecx, esi
// 008e1ecc  e8bd27f1ff           call 0x7f468e
// 008e1ed1  5e                   pop esi
// 008e1ed2  c20400               ret 4
// 008e1ed5  8b442408             mov eax, dword ptr [esp + 8]
// 008e1ed9  50                   push eax
// 008e1eda  8bce                 mov ecx, esi
// 008e1edc  e8ad27f1ff           call 0x7f468e
// 008e1ee1  5e                   pop esi
// 008e1ee2  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTColorSelectorCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp