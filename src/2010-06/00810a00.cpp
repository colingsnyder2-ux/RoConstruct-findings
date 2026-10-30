// roc 2010-06 00810a00  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810a00
//
// 00810a00  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00810a03  85c0                 test eax, eax
// 00810a05  7501                 jne 0x810a08
// 00810a07  c3                   ret 
// 00810a08  33d2                 xor edx, edx
// 00810a0a  398850010000         cmp dword ptr [eax + 0x150], ecx
// 00810a10  0f94c2               sete dl
// 00810a13  8bc2                 mov eax, edx
// 00810a15  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
