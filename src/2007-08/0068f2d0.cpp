// from server: 100% by auto
// roc 2007-08 0068f2d0  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f2d0
//
// 0068f2d0  6a01                 push 1
// 0068f2d2  51                   push ecx
// 0068f2d3  83c120               add ecx, 0x20
// 0068f2d6  e865120500           call 0x6e0540
// 0068f2db  8bc8                 mov ecx, eax
// 0068f2dd  e87ef7fdff           call 0x66ea60
// 0068f2e2  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?Select@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
