// roc 2012-06 00a757e0  unit: CXTPRibbonControlTab  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a757e0
//
// 00a757e0  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 00a757e6  8b01                 mov eax, dword ptr [ecx]
// 00a757e8  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 00a757ee  ffe0                 jmp eax
// library xtp-15.2.1-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?RedrawControl@CXTPRibbonControlTab@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
