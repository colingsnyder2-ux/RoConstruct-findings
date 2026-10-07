// roc 2012-06 009afa60  unit: CXTPReportControl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afa60
//
// 009afa60  83c8ff               or eax, 0xffffffff
// 009afa63  0bd0                 or edx, eax
// 009afa65  52                   push edx
// 009afa66  50                   push eax
// 009afa67  6a00                 push 0
// 009afa69  e812ddffff           call 0x9ad780
// 009afa6e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
