// roc 2012-06 009c6560  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6560
//
// 009c6560  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009c6566  83c044               add eax, 0x44
// 009c6569  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneStack@CXTPDockingPaneManager@@QBEAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
