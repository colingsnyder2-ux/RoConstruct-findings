// from server: 100% by auto
// roc 2007-08 0068f3b0  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f3b0
//
// 0068f3b0  33c0                 xor eax, eax
// 0068f3b2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0068f3b8  0f95c0               setne al
// 0068f3bb  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
