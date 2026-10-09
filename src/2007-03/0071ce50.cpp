// roc 2007-03 0071ce50  unit: seg_00710000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071ce50
//
// 0071ce50  83caff               or edx, 0xffffffff
// 0071ce53  52                   push edx
// 0071ce54  83c8ff               or eax, 0xffffffff
// 0071ce57  50                   push eax
// 0071ce58  6a00                 push 0
// 0071ce5a  e871fbffff           call 0x71c9d0
// 0071ce5f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
