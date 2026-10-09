// roc 2009-12 008b0c10  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0c10
//
// 008b0c10  83c1ac               add ecx, -0x54
// 008b0c13  e838fcffff           call 0x8b0850
// 008b0c18  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008b0c1e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
