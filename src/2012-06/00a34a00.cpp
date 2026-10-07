// roc 2012-06 00a34a00  unit: CRobloxWnd::PartDropTarget  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34a00
//
// 00a34a00  83c8ff               or eax, 0xffffffff
// 00a34a03  0bd0                 or edx, eax
// 00a34a05  52                   push edx
// 00a34a06  50                   push eax
// 00a34a07  6a00                 push 0
// 00a34a09  e852ffffff           call 0xa34960
// 00a34a0e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
