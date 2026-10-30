// from server: 100% by auto
// roc 2012-06 00a6afb0  unit: CXTCaptionButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6afb0
//
// 00a6afb0  83c8ff               or eax, 0xffffffff
// 00a6afb3  0bd0                 or edx, eax
// 00a6afb5  52                   push edx
// 00a6afb6  50                   push eax
// 00a6afb7  6a00                 push 0
// 00a6afb9  e802fcffff           call 0xa6abc0
// 00a6afbe  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
