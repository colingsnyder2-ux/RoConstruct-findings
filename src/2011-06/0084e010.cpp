// from server: 100% by auto
// roc 2011-06 0084e010  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e010
//
// 0084e010  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e014  85c9                 test ecx, ecx
// 0084e016  740c                 je 0x84e024
// 0084e018  e8c3010200           call 0x86e1e0
// 0084e01d  85c0                 test eax, eax
// 0084e01f  7503                 jne 0x84e024
// 0084e021  c20400               ret 4
// 0084e024  b801000000           mov eax, 1
// 0084e029  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneClosed@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
