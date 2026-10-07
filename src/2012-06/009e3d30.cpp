// roc 2012-06 009e3d30  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3d30
//
// 009e3d30  51                   push ecx
// 009e3d31  83c120               add ecx, 0x20
// 009e3d34  e837640500           call 0xa3a170
// 009e3d39  8bc8                 mov ecx, eax
// 009e3d3b  e80032feff           call 0x9c6f40
// 009e3d40  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Close@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
