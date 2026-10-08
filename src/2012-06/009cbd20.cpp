// from server: 100% by auto
// roc 2012-06 009cbd20  unit: CXTPControlComboBoxPopupBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbd20
//
// 009cbd20  56                   push esi
// 009cbd21  8bf1                 mov esi, ecx
// 009cbd23  8b4610               mov eax, dword ptr [esi + 0x10]
// 009cbd26  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 009cbd29  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009cbd2c  50                   push eax
// 009cbd2d  52                   push edx
// 009cbd2e  ff15083cb200         call dword ptr [0xb23c08]
// 009cbd34  c7461000000000       mov dword ptr [esi + 0x10], 0
// 009cbd3b  5e                   pop esi
// 009cbd3c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?KillTimer@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
