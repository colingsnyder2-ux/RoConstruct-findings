// roc 2007-08 0066e160  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e160
//
// 0066e160  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e166  83c028               add eax, 0x28
// 0066e169  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneList@CXTPDockingPaneManager@@QBEAAV?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
