// roc 2009-06 007819e0  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007819e0
//
// 007819e0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007819e3  85c0                 test eax, eax
// 007819e5  7501                 jne 0x7819e8
// 007819e7  c3                   ret 
// 007819e8  33d2                 xor edx, edx
// 007819ea  398850010000         cmp dword ptr [eax + 0x150], ecx
// 007819f0  0f94c2               sete dl
// 007819f3  8bc2                 mov eax, edx
// 007819f5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
