// from server: 100% by auto
// roc 2008-06 007072a0  unit: CXTPDockingPane  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007072a0
//
// 007072a0  85c9                 test ecx, ecx
// 007072a2  7414                 je 0x7072b8
// 007072a4  8d4120               lea eax, [ecx + 0x20]
// 007072a7  50                   push eax
// 007072a8  83c120               add ecx, 0x20
// 007072ab  e8f0610500           call 0x75d4a0
// 007072b0  8bc8                 mov ecx, eax
// 007072b2  e859f2fdff           call 0x6e6510
// 007072b7  c3                   ret 
// 007072b8  33c0                 xor eax, eax
// 007072ba  50                   push eax
// 007072bb  83c120               add ecx, 0x20
// 007072be  e8dd610500           call 0x75d4a0
// 007072c3  8bc8                 mov ecx, eax
// 007072c5  e846f2fdff           call 0x6e6510
// 007072ca  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Hide@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
