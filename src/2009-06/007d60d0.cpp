// roc 2009-06 007d60d0  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d60d0
//
// 007d60d0  83c1ac               add ecx, -0x54
// 007d60d3  e838fcffff           call 0x7d5d10
// 007d60d8  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 007d60de  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
