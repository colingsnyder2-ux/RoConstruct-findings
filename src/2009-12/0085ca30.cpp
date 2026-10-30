// roc 2009-12 0085ca30  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ca30
//
// 0085ca30  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0085ca33  85c0                 test eax, eax
// 0085ca35  7501                 jne 0x85ca38
// 0085ca37  c3                   ret 
// 0085ca38  33d2                 xor edx, edx
// 0085ca3a  398850010000         cmp dword ptr [eax + 0x150], ecx
// 0085ca40  0f94c2               sete dl
// 0085ca43  8bc2                 mov eax, edx
// 0085ca45  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
