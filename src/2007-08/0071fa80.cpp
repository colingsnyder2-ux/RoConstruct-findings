// from server: 100% by auto
// roc 2007-08 0071fa80  unit: CXTPDockingPaneAutoHidePanel  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fa80
//
// 0071fa80  83794400             cmp dword ptr [ecx + 0x44], 0
// 0071fa84  7503                 jne 0x71fa89
// 0071fa86  33c0                 xor eax, eax
// 0071fa88  c3                   ret 
// 0071fa89  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0071fa8c  8b4008               mov eax, dword ptr [eax + 8]
// 0071fa8f  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetLastPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
