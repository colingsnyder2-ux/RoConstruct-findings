// roc 2010-06 008492b0  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008492b0
//
// 008492b0  e84bfbffff           call 0x848e00
// 008492b5  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 008492bb  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
