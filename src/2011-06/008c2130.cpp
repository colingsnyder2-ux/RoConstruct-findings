// roc 2011-06 008c2130  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2130
//
// 008c2130  83c1ac               add ecx, -0x54
// 008c2133  e838fcffff           call 0x8c1d70
// 008c2138  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008c213e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
