// from server: 100% by auto
// roc 2011-06 008fd360  unit: CXTPRibbonControlTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd360
//
// 008fd360  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 008fd366  e98590faff           jmp 0x8a63f0
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetPaintManager@CXTPRibbonControlTab@@UBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
