// roc 2012-06 009e3e60  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3e60
//
// 009e3e60  33c0                 xor eax, eax
// 009e3e62  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 009e3e68  0f95c0               setne al
// 009e3e6b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
