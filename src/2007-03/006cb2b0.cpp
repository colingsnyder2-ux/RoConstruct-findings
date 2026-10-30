// roc 2007-03 006cb2b0  unit: seg_006c0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cb2b0
//
// 006cb2b0  83caff               or edx, 0xffffffff
// 006cb2b3  52                   push edx
// 006cb2b4  83c8ff               or eax, 0xffffffff
// 006cb2b7  50                   push eax
// 006cb2b8  6a00                 push 0
// 006cb2ba  e871feffff           call 0x6cb130
// 006cb2bf  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
