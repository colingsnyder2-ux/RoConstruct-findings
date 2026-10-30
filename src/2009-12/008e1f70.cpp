// roc 2009-12 008e1f70  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1f70
//
// 008e1f70  56                   push esi
// 008e1f71  57                   push edi
// 008e1f72  8bf9                 mov edi, ecx
// 008e1f74  8db7b8000000         lea esi, [edi + 0xb8]
// 008e1f7a  85f6                 test esi, esi
// 008e1f7c  7426                 je 0x8e1fa4
// 008e1f7e  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e1f82  7420                 je 0x8e1fa4
// 008e1f84  e847f9ffff           call 0x8e18d0
// 008e1f89  84c0                 test al, al
// 008e1f8b  7517                 jne 0x8e1fa4
// 008e1f8d  a180d79800           mov eax, dword ptr [0x98d780]
// 008e1f92  6a13                 push 0x13
// 008e1f94  6a00                 push 0
// 008e1f96  6a00                 push 0
// 008e1f98  6a00                 push 0
// 008e1f9a  6a00                 push 0
// 008e1f9c  50                   push eax
// 008e1f9d  8bce                 mov ecx, esi
// 008e1f9f  e8881cf1ff           call 0x7f3c2c
// 008e1fa4  8bcf                 mov ecx, edi
// 008e1fa6  e8851ef1ff           call 0x7f3e30
// 008e1fab  5f                   pop edi
// 008e1fac  5e                   pop esi
// 008e1fad  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTColorSelectorCtrl@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp