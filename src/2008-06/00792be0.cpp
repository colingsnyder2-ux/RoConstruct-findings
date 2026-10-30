// from server: 100% by auto
// roc 2008-06 00792be0  unit: CXTCaptionButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792be0
//
// 00792be0  83c8ff               or eax, 0xffffffff
// 00792be3  0bd0                 or edx, eax
// 00792be5  52                   push edx
// 00792be6  50                   push eax
// 00792be7  6a00                 push 0
// 00792be9  e802fcffff           call 0x7927f0
// 00792bee  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
