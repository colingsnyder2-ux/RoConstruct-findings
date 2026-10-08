// from server: 100% by auto
// roc 2012-06 00a756b0  unit: CXTPRibbonControlTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a756b0
//
// 00a756b0  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 00a756b6  e9e591faff           jmp 0xa1e8a0
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetPaintManager@CXTPRibbonControlTab@@UBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
