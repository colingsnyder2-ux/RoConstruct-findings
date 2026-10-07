// roc 2008-06 0075f370  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f370
//
// 0075f370  83c8ff               or eax, 0xffffffff
// 0075f373  0bd0                 or edx, eax
// 0075f375  52                   push edx
// 0075f376  50                   push eax
// 0075f377  6a00                 push 0
// 0075f379  e872feffff           call 0x75f1f0
// 0075f37e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
