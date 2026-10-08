// from server: 100% by auto
// roc 2007-08 0066e0b0  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e0b0
//
// 0066e0b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066e0b4  85c9                 test ecx, ecx
// 0066e0b6  740c                 je 0x66e0c4
// 0066e0b8  e8a3130200           call 0x68f460
// 0066e0bd  85c0                 test eax, eax
// 0066e0bf  7503                 jne 0x66e0c4
// 0066e0c1  c20400               ret 4
// 0066e0c4  b801000000           mov eax, 1
// 0066e0c9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneClosed@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
