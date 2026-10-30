// roc 2012-06 00a3a550  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a550
//
// 00a3a550  83c1ac               add ecx, -0x54
// 00a3a553  e828fcffff           call 0xa3a180
// 00a3a558  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00a3a55e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
