// from server: 100% by auto
// roc 2011-06 008bae90  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bae90
//
// 008bae90  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 008bae96  85c0                 test eax, eax
// 008bae98  7408                 je 0x8baea2
// 008bae9a  8d4854               lea ecx, [eax + 0x54]
// 008bae9d  e9be6e0000           jmp 0x8c1d60
// 008baea2  33c0                 xor eax, eax
// 008baea4  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetDockingPaneManager@CXTPDockingPaneAutoHideWnd@@ABEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
