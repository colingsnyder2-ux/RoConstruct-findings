// roc 2009-06 0075d900  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d900
//
// 0075d900  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0075d906  83c044               add eax, 0x44
// 0075d909  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneStack@CXTPDockingPaneManager@@QBEAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
