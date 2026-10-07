// roc 2008-06 006e50e0  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e50e0
//
// 006e50e0  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 006e50e6  85c9                 test ecx, ecx
// 006e50e8  7506                 jne 0x6e50f0
// 006e50ea  8d4102               lea eax, [ecx + 2]
// 006e50ed  c20400               ret 4
// 006e50f0  e9abf90600           jmp 0x754aa0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
