// roc 2012-06 009e3d80  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3d80
//
// 009e3d80  6a01                 push 1
// 009e3d82  51                   push ecx
// 009e3d83  83c120               add ecx, 0x20
// 009e3d86  e8e5630500           call 0xa3a170
// 009e3d8b  8bc8                 mov ecx, eax
// 009e3d8d  e82e31feff           call 0x9c6ec0
// 009e3d92  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Select@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
