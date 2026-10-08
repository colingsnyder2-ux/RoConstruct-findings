// roc 2012-06 00a3b430  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b430
//
// 00a3b430  c781a801000000000000 mov dword ptr [ecx + 0x1a8], 0
// 00a3b43a  e89f72f4ff           call 0x9826de
// 00a3b43f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptureChanged@CXTPDockingPaneTabbedContainer@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
