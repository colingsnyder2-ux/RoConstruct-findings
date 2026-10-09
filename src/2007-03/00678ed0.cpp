// roc 2007-03 00678ed0  unit: seg_00670000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678ed0
//
// 00678ed0  33c0                 xor eax, eax
// 00678ed2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 00678ed8  0f95c0               setne al
// 00678edb  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsValid@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
