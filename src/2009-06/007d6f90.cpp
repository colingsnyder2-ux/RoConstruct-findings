// roc 2009-06 007d6f90  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6f90
//
// 007d6f90  c781a801000000000000 mov dword ptr [ecx + 0x1a8], 0
// 007d6f9a  e86920f4ff           call 0x719008
// 007d6f9f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptureChanged@CXTPDockingPaneTabbedContainer@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
