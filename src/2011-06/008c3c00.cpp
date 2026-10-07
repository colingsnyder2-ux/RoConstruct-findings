// roc 2011-06 008c3c00  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3c00
//
// 008c3c00  83c8ff               or eax, 0xffffffff
// 008c3c03  0bd0                 or edx, eax
// 008c3c05  52                   push edx
// 008c3c06  50                   push eax
// 008c3c07  6a00                 push 0
// 008c3c09  e872feffff           call 0x8c3a80
// 008c3c0e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
