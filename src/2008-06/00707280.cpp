// roc 2008-06 00707280  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707280
//
// 00707280  51                   push ecx
// 00707281  83c120               add ecx, 0x20
// 00707284  e817620500           call 0x75d4a0
// 00707289  8bc8                 mov ecx, eax
// 0070728b  e850e7fdff           call 0x6e59e0
// 00707290  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Close@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
