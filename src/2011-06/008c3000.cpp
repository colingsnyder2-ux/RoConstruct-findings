// roc 2011-06 008c3000  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3000
//
// 008c3000  c781a801000000000000 mov dword ptr [ecx + 0x1a8], 0
// 008c300a  e81f76f4ff           call 0x80a62e
// 008c300f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptureChanged@CXTPDockingPaneTabbedContainer@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
