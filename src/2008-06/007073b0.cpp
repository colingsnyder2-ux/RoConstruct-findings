// roc 2008-06 007073b0  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007073b0
//
// 007073b0  33c0                 xor eax, eax
// 007073b2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 007073b8  0f95c0               setne al
// 007073bb  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
