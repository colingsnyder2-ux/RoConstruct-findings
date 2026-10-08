// roc 2009-06 0075d9c0  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d9c0
//
// 0075d9c0  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 0075d9c6  85c9                 test ecx, ecx
// 0075d9c8  7506                 jne 0x75d9d0
// 0075d9ca  8d4102               lea eax, [ecx + 2]
// 0075d9cd  c20400               ret 4
// 0075d9d0  e9ebf60600           jmp 0x7cd0c0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
