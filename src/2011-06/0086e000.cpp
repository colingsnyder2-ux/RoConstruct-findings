// from server: 100% by auto
// roc 2011-06 0086e000  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e000
//
// 0086e000  51                   push ecx
// 0086e001  83c120               add ecx, 0x20
// 0086e004  e8573d0500           call 0x8c1d60
// 0086e009  8bc8                 mov ecx, eax
// 0086e00b  e8600afeff           call 0x84ea70
// 0086e010  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Close@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
