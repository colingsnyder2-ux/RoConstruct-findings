// roc 2009-06 007b7ed0  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7ed0
//
// 007b7ed0  e84bfbffff           call 0x7b7a20
// 007b7ed5  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 007b7edb  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
