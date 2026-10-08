// from server: 100% by auto
// roc 2008-06 00756fa0  unit: CXTPDockingPaneAutoHideWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756fa0
//
// 00756fa0  83b91001000000       cmp dword ptr [ecx + 0x110], 0
// 00756fa7  740a                 je 0x756fb3
// 00756fa9  6a01                 push 1
// 00756fab  e860fdffff           call 0x756d10
// 00756fb0  c20c00               ret 0xc
// 00756fb3  e8b09cf4ff           call 0x6a0c68
// 00756fb8  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseMove@CXTPDockingPaneAutoHideWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
