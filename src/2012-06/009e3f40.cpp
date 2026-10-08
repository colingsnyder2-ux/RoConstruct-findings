// roc 2012-06 009e3f40  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3f40
//
// 009e3f40  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009e3f43  85c0                 test eax, eax
// 009e3f45  7501                 jne 0x9e3f48
// 009e3f47  c3                   ret 
// 009e3f48  33d2                 xor edx, edx
// 009e3f4a  398850010000         cmp dword ptr [eax + 0x150], ecx
// 009e3f50  0f94c2               sete dl
// 009e3f53  8bc2                 mov eax, edx
// 009e3f55  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
