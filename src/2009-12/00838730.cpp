// roc 2009-12 00838730  unit: CXTPControls  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838730
//
// 00838730  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 00838736  85c9                 test ecx, ecx
// 00838738  7506                 jne 0x838740
// 0083873a  8d4102               lea eax, [ecx + 2]
// 0083873d  c20400               ret 4
// 00838740  e96bf70600           jmp 0x8a7eb0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetPaneDirection@CXTPDockingPaneManager@@QBE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
