// roc 2007-08 0068f280  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f280
//
// 0068f280  51                   push ecx
// 0068f281  83c120               add ecx, 0x20
// 0068f284  e8b7120500           call 0x6e0540
// 0068f289  8bc8                 mov ecx, eax
// 0068f28b  e880f8fdff           call 0x66eb10
// 0068f290  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?Close@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
