// roc 2011-06 0086e130  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e130
//
// 0086e130  33c0                 xor eax, eax
// 0086e132  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0086e138  0f95c0               setne al
// 0086e13b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
