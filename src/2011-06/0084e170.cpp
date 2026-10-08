// roc 2011-06 0084e170  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e170
//
// 0084e170  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 0084e176  85c9                 test ecx, ecx
// 0084e178  7506                 jne 0x84e180
// 0084e17a  8d4102               lea eax, [ecx + 2]
// 0084e17d  c20400               ret 4
// 0084e180  e93bb00600           jmp 0x8b91c0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
