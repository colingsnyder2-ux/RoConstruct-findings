// roc 2008-06 007993f0  unit: CXTPRibbonControlTab  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007993f0
//
// 007993f0  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 007993f6  8b01                 mov eax, dword ptr [ecx]
// 007993f8  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 007993fe  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?RedrawControl@CXTPRibbonControlTab@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
