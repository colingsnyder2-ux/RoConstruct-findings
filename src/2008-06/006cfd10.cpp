// roc 2008-06 006cfd10  unit: CXTPReportControl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cfd10
//
// 006cfd10  83c8ff               or eax, 0xffffffff
// 006cfd13  0bd0                 or edx, eax
// 006cfd15  52                   push edx
// 006cfd16  50                   push eax
// 006cfd17  6a00                 push 0
// 006cfd19  e812ddffff           call 0x6cda30
// 006cfd1e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
