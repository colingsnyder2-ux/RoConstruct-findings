// roc 2007-08 006e0910  unit: CXTPDockingPaneTabbedContainer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0910
//
// 006e0910  83c1ac               add ecx, -0x54
// 006e0913  e838fcffff           call 0x6e0550
// 006e0918  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 006e091e  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPaintManager@CXTPDockingPaneTabbedContainer@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
