// from server: 100% by auto
// roc 2008-06 00722130  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722130
//
// 00722130  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00722136  85c0                 test eax, eax
// 00722138  7501                 jne 0x72213b
// 0072213a  c3                   ret 
// 0072213b  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 00722141  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
