// roc 2009-06 007b7a80  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7a80
//
// 007b7a80  33c0                 xor eax, eax
// 007b7a82  398180020000         cmp dword ptr [ecx + 0x280], eax
// 007b7a88  0f95c0               setne al
// 007b7a8b  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsFrameThemeEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
