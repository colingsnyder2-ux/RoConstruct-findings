// roc 2009-06 007b7a90  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7a90
//
// 007b7a90  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 007b7a96  85c0                 test eax, eax
// 007b7a98  7501                 jne 0x7b7a9b
// 007b7a9a  c3                   ret 
// 007b7a9b  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 007b7aa1  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
