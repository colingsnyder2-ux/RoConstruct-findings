// roc 2008-06 007992c0  unit: CXTPRibbonControlTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007992c0
//
// 007992c0  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 007992c6  e9a592f8ff           jmp 0x722570
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetPaintManager@CXTPRibbonControlTab@@UBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
