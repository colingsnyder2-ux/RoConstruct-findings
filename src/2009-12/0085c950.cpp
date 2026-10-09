// roc 2009-12 0085c950  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c950
//
// 0085c950  33c0                 xor eax, eax
// 0085c952  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0085c958  0f95c0               setne al
// 0085c95b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
