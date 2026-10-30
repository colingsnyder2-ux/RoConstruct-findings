// roc 2010-06 00865bb0  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865bb0
//
// 00865bb0  c781a801000000000000 mov dword ptr [ecx + 0x1a8], 0
// 00865bba  e8b123f4ff           call 0x7a7f70
// 00865bbf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptureChanged@CXTPDockingPaneTabbedContainer@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
