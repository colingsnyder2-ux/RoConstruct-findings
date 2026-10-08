// roc 2010-06 00848e70  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848e70
//
// 00848e70  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00848e76  85c0                 test eax, eax
// 00848e78  7501                 jne 0x848e7b
// 00848e7a  c3                   ret 
// 00848e7b  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 00848e81  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
