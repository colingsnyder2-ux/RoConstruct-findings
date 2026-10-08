// from server: 100% by auto
// roc 2008-06 0075d880  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d880
//
// 0075d880  83c1ac               add ecx, -0x54
// 0075d883  e828fcffff           call 0x75d4b0
// 0075d888  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 0075d88e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
