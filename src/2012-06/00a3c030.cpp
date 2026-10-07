// roc 2012-06 00a3c030  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3c030
//
// 00a3c030  83c8ff               or eax, 0xffffffff
// 00a3c033  0bd0                 or edx, eax
// 00a3c035  52                   push edx
// 00a3c036  50                   push eax
// 00a3c037  6a00                 push 0
// 00a3c039  e872feffff           call 0xa3beb0
// 00a3c03e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
