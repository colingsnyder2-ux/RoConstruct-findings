// roc 2012-06 009c6570  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6570
//
// 009c6570  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009c6576  83c028               add eax, 0x28
// 009c6579  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneList@CXTPDockingPaneManager@@QBEAAV?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
