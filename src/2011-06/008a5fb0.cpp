// roc 2011-06 008a5fb0  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5fb0
//
// 008a5fb0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 008a5fb6  85c0                 test eax, eax
// 008a5fb8  7501                 jne 0x8a5fbb
// 008a5fba  c3                   ret 
// 008a5fbb  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 008a5fc1  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSelectedTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
