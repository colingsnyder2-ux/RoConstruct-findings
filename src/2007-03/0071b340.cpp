// roc 2007-03 0071b340  unit: seg_00710000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071b340
//
// 0071b340  83caff               or edx, 0xffffffff
// 0071b343  52                   push edx
// 0071b344  83c8ff               or eax, 0xffffffff
// 0071b347  50                   push eax
// 0071b348  6a00                 push 0
// 0071b34a  e871ffffff           call 0x71b2c0
// 0071b34f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
