// roc 2012-06 00a1e460  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e460
//
// 00a1e460  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00a1e466  85c0                 test eax, eax
// 00a1e468  7501                 jne 0xa1e46b
// 00a1e46a  c3                   ret 
// 00a1e46b  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 00a1e471  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
