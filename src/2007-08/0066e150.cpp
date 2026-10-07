// roc 2007-08 0066e150  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e150
//
// 0066e150  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e156  83c044               add eax, 0x44
// 0066e159  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneStack@CXTPDockingPaneManager@@QBEAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
