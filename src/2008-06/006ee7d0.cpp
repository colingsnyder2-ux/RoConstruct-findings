// roc 2008-06 006ee7d0  unit: CXTPPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee7d0
//
// 006ee7d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006ee7d3  85c0                 test eax, eax
// 006ee7d5  7411                 je 0x6ee7e8
// 006ee7d7  50                   push eax
// 006ee7d8  ff153c2d8000         call dword ptr [0x802d3c]
// 006ee7de  85c0                 test eax, eax
// 006ee7e0  7406                 je 0x6ee7e8
// 006ee7e2  b801000000           mov eax, 1
// 006ee7e7  c3                   ret 
// 006ee7e8  33c0                 xor eax, eax
// 006ee7ea  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?IsVisible@CXTPPopupBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
