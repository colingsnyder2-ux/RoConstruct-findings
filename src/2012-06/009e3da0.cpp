// roc 2012-06 009e3da0  unit: CXTPDockingPane  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3da0
//
// 009e3da0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 009e3da3  85c0                 test eax, eax
// 009e3da5  7404                 je 0x9e3dab
// 009e3da7  8b4014               mov eax, dword ptr [eax + 0x14]
// 009e3daa  c3                   ret 
// 009e3dab  33c0                 xor eax, eax
// 009e3dad  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetDockingSite@CXTPDockingPane@@UBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
