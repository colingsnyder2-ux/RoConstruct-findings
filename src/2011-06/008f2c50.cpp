// from server: 100% by auto
// roc 2011-06 008f2c50  unit: CXTCaptionButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2c50
//
// 008f2c50  83c8ff               or eax, 0xffffffff
// 008f2c53  0bd0                 or edx, eax
// 008f2c55  52                   push edx
// 008f2c56  50                   push eax
// 008f2c57  6a00                 push 0
// 008f2c59  e802fcffff           call 0x8f2860
// 008f2c5e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
