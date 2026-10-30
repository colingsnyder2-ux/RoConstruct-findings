// roc 2012-06 00a1e8a0  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e8a0
//
// 00a1e8a0  e84bfbffff           call 0xa1e3f0
// 00a1e8a5  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 00a1e8ab  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
