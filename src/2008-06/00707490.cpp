// from server: 100% by auto
// roc 2008-06 00707490  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707490
//
// 00707490  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00707493  85c0                 test eax, eax
// 00707495  7501                 jne 0x707498
// 00707497  c3                   ret 
// 00707498  33d2                 xor edx, edx
// 0070749a  398850010000         cmp dword ptr [eax + 0x150], ecx
// 007074a0  0f94c2               sete dl
// 007074a3  8bc2                 mov eax, edx
// 007074a5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsSelected@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
