// roc 2007-03 006c98e0  unit: seg_006c0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c98e0
//
// 006c98e0  83c1ac               add ecx, -0x54
// 006c98e3  e848fcffff           call 0x6c9530
// 006c98e8  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 006c98ee  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
