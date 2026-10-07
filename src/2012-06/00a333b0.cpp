// roc 2012-06 00a333b0  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a333b0
//
// 00a333b0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00a333b6  85c0                 test eax, eax
// 00a333b8  7408                 je 0xa333c2
// 00a333ba  8d4854               lea ecx, [eax + 0x54]
// 00a333bd  e9ae6d0000           jmp 0xa3a170
// 00a333c2  33c0                 xor eax, eax
// 00a333c4  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetDockingPaneManager@CXTPDockingPaneAutoHideWnd@@ABEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
