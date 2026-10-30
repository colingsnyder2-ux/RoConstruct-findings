// from server: 100% by auto
// roc 2008-06 006e4f80  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4f80
//
// 006e4f80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e4f84  85c9                 test ecx, ecx
// 006e4f86  740c                 je 0x6e4f94
// 006e4f88  e8d3240200           call 0x707460
// 006e4f8d  85c0                 test eax, eax
// 006e4f8f  7503                 jne 0x6e4f94
// 006e4f91  c20400               ret 4
// 006e4f94  b801000000           mov eax, 1
// 006e4f99  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneClosed@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
