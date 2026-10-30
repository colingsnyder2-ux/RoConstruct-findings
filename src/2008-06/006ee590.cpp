// from server: 100% by auto
// roc 2008-06 006ee590  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee590
//
// 006ee590  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 006ee596  85c0                 test eax, eax
// 006ee598  7407                 je 0x6ee5a1
// 006ee59a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006ee5a0  c3                   ret 
// 006ee5a1  33c0                 xor eax, eax
// 006ee5a3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
