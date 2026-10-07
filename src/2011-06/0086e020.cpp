// roc 2011-06 0086e020  unit: CXTPDockingPane  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e020
//
// 0086e020  85c9                 test ecx, ecx
// 0086e022  7414                 je 0x86e038
// 0086e024  8d4120               lea eax, [ecx + 0x20]
// 0086e027  50                   push eax
// 0086e028  83c120               add ecx, 0x20
// 0086e02b  e8303d0500           call 0x8c1d60
// 0086e030  8bc8                 mov ecx, eax
// 0086e032  e86915feff           call 0x84f5a0
// 0086e037  c3                   ret 
// 0086e038  33c0                 xor eax, eax
// 0086e03a  50                   push eax
// 0086e03b  83c120               add ecx, 0x20
// 0086e03e  e81d3d0500           call 0x8c1d60
// 0086e043  8bc8                 mov ecx, eax
// 0086e045  e85615feff           call 0x84f5a0
// 0086e04a  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Hide@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
