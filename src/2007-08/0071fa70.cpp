// from server: 100% by auto
// roc 2007-08 0071fa70  unit: CXTPDockingPaneAutoHidePanel  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fa70
//
// 0071fa70  83794400             cmp dword ptr [ecx + 0x44], 0
// 0071fa74  7503                 jne 0x71fa79
// 0071fa76  33c0                 xor eax, eax
// 0071fa78  c3                   ret 
// 0071fa79  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0071fa7c  8b4008               mov eax, dword ptr [eax + 8]
// 0071fa7f  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetFirstPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
