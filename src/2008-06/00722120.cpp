// roc 2008-06 00722120  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722120
//
// 00722120  33c0                 xor eax, eax
// 00722122  398180020000         cmp dword ptr [ecx + 0x280], eax
// 00722128  0f95c0               setne al
// 0072212b  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsFrameThemeEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
