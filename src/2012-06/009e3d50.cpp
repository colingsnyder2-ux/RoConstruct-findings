// from server: 100% by auto
// roc 2012-06 009e3d50  unit: CXTPDockingPane  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3d50
//
// 009e3d50  85c9                 test ecx, ecx
// 009e3d52  7414                 je 0x9e3d68
// 009e3d54  8d4120               lea eax, [ecx + 0x20]
// 009e3d57  50                   push eax
// 009e3d58  83c120               add ecx, 0x20
// 009e3d5b  e810640500           call 0xa3a170
// 009e3d60  8bc8                 mov ecx, eax
// 009e3d62  e8093dfeff           call 0x9c7a70
// 009e3d67  c3                   ret 
// 009e3d68  33c0                 xor eax, eax
// 009e3d6a  50                   push eax
// 009e3d6b  83c120               add ecx, 0x20
// 009e3d6e  e8fd630500           call 0xa3a170
// 009e3d73  8bc8                 mov ecx, eax
// 009e3d75  e8f63cfeff           call 0x9c7a70
// 009e3d7a  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?Hide@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
