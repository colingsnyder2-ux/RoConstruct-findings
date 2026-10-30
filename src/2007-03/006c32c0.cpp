// roc 2007-03 006c32c0  unit: seg_006c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c32c0
//
// 006c32c0  83b9fc00000000       cmp dword ptr [ecx + 0xfc], 0
// 006c32c7  740a                 je 0x6c32d3
// 006c32c9  6a01                 push 1
// 006c32cb  e850fdffff           call 0x6c3020
// 006c32d0  c20c00               ret 0xc
// 006c32d3  e8fab3f5ff           call 0x61e6d2
// 006c32d8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseMove@CXTPDockingPaneAutoHideWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
