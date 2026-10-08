// from server: 100% by auto
// roc 2007-08 0068f2f0  unit: CXTPDockingPane  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f2f0
//
// 0068f2f0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0068f2f3  85c0                 test eax, eax
// 0068f2f5  7404                 je 0x68f2fb
// 0068f2f7  8b4014               mov eax, dword ptr [eax + 0x14]
// 0068f2fa  c3                   ret 
// 0068f2fb  33c0                 xor eax, eax
// 0068f2fd  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetDockingSite@CXTPDockingPane@@UBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
