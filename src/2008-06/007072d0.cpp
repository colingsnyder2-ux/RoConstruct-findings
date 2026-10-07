// roc 2008-06 007072d0  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007072d0
//
// 007072d0  6a01                 push 1
// 007072d2  51                   push ecx
// 007072d3  83c120               add ecx, 0x20
// 007072d6  e8c5610500           call 0x75d4a0
// 007072db  8bc8                 mov ecx, eax
// 007072dd  e87ee6fdff           call 0x6e5960
// 007072e2  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Select@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
