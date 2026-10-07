// roc 2011-06 00837450  unit: CXTPReportControl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837450
//
// 00837450  83c8ff               or eax, 0xffffffff
// 00837453  0bd0                 or edx, eax
// 00837455  52                   push edx
// 00837456  50                   push eax
// 00837457  6a00                 push 0
// 00837459  e812ddffff           call 0x835170
// 0083745e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
