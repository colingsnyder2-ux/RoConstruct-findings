// roc 2011-06 0086e070  unit: CXTPDockingPane  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e070
//
// 0086e070  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0086e073  85c0                 test eax, eax
// 0086e075  7404                 je 0x86e07b
// 0086e077  8b4014               mov eax, dword ptr [eax + 0x14]
// 0086e07a  c3                   ret 
// 0086e07b  33c0                 xor eax, eax
// 0086e07d  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetDockingSite@CXTPDockingPane@@UBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
