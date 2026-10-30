// roc 2011-06 008a63f0  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a63f0
//
// 008a63f0  e84bfbffff           call 0x8a5f40
// 008a63f5  8b8068060000         mov eax, dword ptr [eax + 0x668]
// 008a63fb  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabPaintManager@CXTPRibbonBar@@QBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
