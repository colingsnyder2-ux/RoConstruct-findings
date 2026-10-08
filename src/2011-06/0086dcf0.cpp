// from server: 100% by auto
// roc 2011-06 0086dcf0  unit: CXTPStatusBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086dcf0
//
// 0086dcf0  83c8ff               or eax, 0xffffffff
// 0086dcf3  0bd0                 or edx, eax
// 0086dcf5  52                   push edx
// 0086dcf6  50                   push eax
// 0086dcf7  6a00                 push 0
// 0086dcf9  e8f2faffff           call 0x86d7f0
// 0086dcfe  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
