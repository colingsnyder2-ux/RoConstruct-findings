// from server: 100% by auto
// roc 2008-06 007567a0  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007567a0
//
// 007567a0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007567a6  85c0                 test eax, eax
// 007567a8  7408                 je 0x7567b2
// 007567aa  8d4854               lea ecx, [eax + 0x54]
// 007567ad  e9ee6c0000           jmp 0x75d4a0
// 007567b2  33c0                 xor eax, eax
// 007567b4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetDockingPaneManager@CXTPDockingPaneAutoHideWnd@@ABEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
