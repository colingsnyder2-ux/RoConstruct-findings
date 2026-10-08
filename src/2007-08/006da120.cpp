// from server: 100% by auto
// roc 2007-08 006da120  unit: CXTPDockingPaneAutoHideWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006da120
//
// 006da120  83b9fc00000000       cmp dword ptr [ecx + 0xfc], 0
// 006da127  740a                 je 0x6da133
// 006da129  6a01                 push 1
// 006da12b  e850fdffff           call 0x6d9e80
// 006da130  c20c00               ret 0xc
// 006da133  e80661f5ff           call 0x63023e
// 006da138  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseMove@CXTPDockingPaneAutoHideWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
