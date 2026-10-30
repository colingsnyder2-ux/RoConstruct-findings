// from server: 100% by auto
// roc 2008-06 0070fe00  unit: CXTPStatusBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070fe00
//
// 0070fe00  83c8ff               or eax, 0xffffffff
// 0070fe03  0bd0                 or edx, eax
// 0070fe05  52                   push edx
// 0070fe06  50                   push eax
// 0070fe07  6a00                 push 0
// 0070fe09  e8f2faffff           call 0x70f900
// 0070fe0e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
