// roc 2009-12 008f0700  unit: CXTPRibbonControlTab  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0700
//
// 008f0700  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 008f0706  8b01                 mov eax, dword ptr [ecx]
// 008f0708  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 008f070e  ffe0                 jmp eax
// copied from an identical function in another client (function ?RedrawControl@CXTPRibbonControlTab@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp