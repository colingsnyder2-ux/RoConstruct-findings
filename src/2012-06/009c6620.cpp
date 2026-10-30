// roc 2012-06 009c6620  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6620
//
// 009c6620  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 009c6626  85c9                 test ecx, ecx
// 009c6628  7506                 jne 0x9c6630
// 009c662a  8d4102               lea eax, [ecx + 2]
// 009c662d  c20400               ret 4
// 009c6630  e97bb00600           jmp 0xa316b0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
