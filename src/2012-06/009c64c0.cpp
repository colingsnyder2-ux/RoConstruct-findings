// roc 2012-06 009c64c0  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c64c0
//
// 009c64c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c64c4  85c9                 test ecx, ecx
// 009c64c6  740c                 je 0x9c64d4
// 009c64c8  e843da0100           call 0x9e3f10
// 009c64cd  85c0                 test eax, eax
// 009c64cf  7503                 jne 0x9c64d4
// 009c64d1  c20400               ret 4
// 009c64d4  b801000000           mov eax, 1
// 009c64d9  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneClosed@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
