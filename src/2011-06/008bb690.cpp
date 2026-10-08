// from server: 100% by auto
// roc 2011-06 008bb690  unit: CXTPDockingPaneAutoHideWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bb690
//
// 008bb690  83b91001000000       cmp dword ptr [ecx + 0x110], 0
// 008bb697  740a                 je 0x8bb6a3
// 008bb699  6a01                 push 1
// 008bb69b  e860fdffff           call 0x8bb400
// 008bb6a0  c20c00               ret 0xc
// 008bb6a3  e886eff4ff           call 0x80a62e
// 008bb6a8  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseMove@CXTPDockingPaneAutoHideWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
