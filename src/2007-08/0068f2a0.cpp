// from server: 100% by auto
// roc 2007-08 0068f2a0  unit: CXTPDockingPane  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f2a0
//
// 0068f2a0  85c9                 test ecx, ecx
// 0068f2a2  7414                 je 0x68f2b8
// 0068f2a4  8d4120               lea eax, [ecx + 0x20]
// 0068f2a7  50                   push eax
// 0068f2a8  83c120               add ecx, 0x20
// 0068f2ab  e890120500           call 0x6e0540
// 0068f2b0  8bc8                 mov ecx, eax
// 0068f2b2  e8a903feff           call 0x66f660
// 0068f2b7  c3                   ret 
// 0068f2b8  33c0                 xor eax, eax
// 0068f2ba  50                   push eax
// 0068f2bb  83c120               add ecx, 0x20
// 0068f2be  e87d120500           call 0x6e0540
// 0068f2c3  8bc8                 mov ecx, eax
// 0068f2c5  e89603feff           call 0x66f660
// 0068f2ca  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?Hide@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
