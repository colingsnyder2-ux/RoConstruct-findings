// roc 2010-06 00848e60  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848e60
//
// 00848e60  33c0                 xor eax, eax
// 00848e62  398180020000         cmp dword ptr [ecx + 0x280], eax
// 00848e68  0f95c0               setne al
// 00848e6b  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsFrameThemeEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
