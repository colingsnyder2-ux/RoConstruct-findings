// roc 2008-06 007072f0  unit: CXTPDockingPane  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007072f0
//
// 007072f0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 007072f3  85c0                 test eax, eax
// 007072f5  7404                 je 0x7072fb
// 007072f7  8b4014               mov eax, dword ptr [eax + 0x14]
// 007072fa  c3                   ret 
// 007072fb  33c0                 xor eax, eax
// 007072fd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetDockingSite@CXTPDockingPane@@UBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
