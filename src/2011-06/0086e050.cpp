// roc 2011-06 0086e050  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e050
//
// 0086e050  6a01                 push 1
// 0086e052  51                   push ecx
// 0086e053  83c120               add ecx, 0x20
// 0086e056  e8053d0500           call 0x8c1d60
// 0086e05b  8bc8                 mov ecx, eax
// 0086e05d  e88e09feff           call 0x84e9f0
// 0086e062  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Select@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
