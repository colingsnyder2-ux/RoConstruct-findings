// roc 2010-06 007ec950  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec950
//
// 007ec950  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 007ec956  85c9                 test ecx, ecx
// 007ec958  7506                 jne 0x7ec960
// 007ec95a  8d4102               lea eax, [ecx + 2]
// 007ec95d  c20400               ret 4
// 007ec960  e99bf60600           jmp 0x85c000
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
