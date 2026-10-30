// roc 2009-12 00895120  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895120
//
// 00895120  e84bfbffff           call 0x894c70
// 00895125  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 0089512b  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
