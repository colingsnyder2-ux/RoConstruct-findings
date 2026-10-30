// roc 2007-03 00648ca0  unit: seg_00640000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00648ca0
//
// 00648ca0  83caff               or edx, 0xffffffff
// 00648ca3  52                   push edx
// 00648ca4  83c8ff               or eax, 0xffffffff
// 00648ca7  50                   push eax
// 00648ca8  6a00                 push 0
// 00648caa  e8b1d9ffff           call 0x646660
// 00648caf  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
