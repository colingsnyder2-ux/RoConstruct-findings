// roc 2012-06 009e8c20  unit: CXTPStatusBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8c20
//
// 009e8c20  83c8ff               or eax, 0xffffffff
// 009e8c23  0bd0                 or edx, eax
// 009e8c25  52                   push edx
// 009e8c26  50                   push eax
// 009e8c27  6a00                 push 0
// 009e8c29  e8f2faffff           call 0x9e8720
// 009e8c2e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
