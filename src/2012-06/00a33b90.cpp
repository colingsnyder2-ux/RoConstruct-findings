// roc 2012-06 00a33b90  unit: CXTPDockingPaneAutoHideWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a33b90
//
// 00a33b90  83b91001000000       cmp dword ptr [ecx + 0x110], 0
// 00a33b97  740a                 je 0xa33ba3
// 00a33b99  6a01                 push 1
// 00a33b9b  e860fdffff           call 0xa33900
// 00a33ba0  c20c00               ret 0xc
// 00a33ba3  e836ebf4ff           call 0x9826de
// 00a33ba8  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseMove@CXTPDockingPaneAutoHideWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
