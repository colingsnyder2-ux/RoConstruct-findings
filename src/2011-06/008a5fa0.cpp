// roc 2011-06 008a5fa0  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5fa0
//
// 008a5fa0  33c0                 xor eax, eax
// 008a5fa2  398180020000         cmp dword ptr [ecx + 0x280], eax
// 008a5fa8  0f95c0               setne al
// 008a5fab  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsFrameThemeEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
