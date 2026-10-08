// roc 2011-06 0086e210  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e210
//
// 0086e210  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0086e213  85c0                 test eax, eax
// 0086e215  7501                 jne 0x86e218
// 0086e217  c3                   ret 
// 0086e218  33d2                 xor edx, edx
// 0086e21a  398850010000         cmp dword ptr [eax + 0x150], ecx
// 0086e220  0f94c2               sete dl
// 0086e223  8bc2                 mov eax, edx
// 0086e225  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
