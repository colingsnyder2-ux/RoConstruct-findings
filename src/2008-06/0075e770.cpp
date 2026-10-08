// from server: 100% by auto
// roc 2008-06 0075e770  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e770
//
// 0075e770  c781a801000000000000 mov dword ptr [ecx + 0x1a8], 0
// 0075e77a  e8e924f4ff           call 0x6a0c68
// 0075e77f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptureChanged@CXTPDockingPaneTabbedContainer@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
