// from server: 100% by auto
// roc 2008-06 00722570  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722570
//
// 00722570  e84bfbffff           call 0x7220c0
// 00722575  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 0072257b  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
