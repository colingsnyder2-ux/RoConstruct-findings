// roc 2009-12 00894ce0  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894ce0
//
// 00894ce0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00894ce6  85c0                 test eax, eax
// 00894ce8  7501                 jne 0x894ceb
// 00894cea  c3                   ret 
// 00894ceb  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 00894cf1  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
