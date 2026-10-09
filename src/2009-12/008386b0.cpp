// roc 2009-12 008386b0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008386b0
//
// 008386b0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008386b6  85c0                 test eax, eax
// 008386b8  740b                 je 0x8386c5
// 008386ba  8b4020               mov eax, dword ptr [eax + 0x20]
// 008386bd  85c0                 test eax, eax
// 008386bf  7404                 je 0x8386c5
// 008386c1  83c020               add eax, 0x20
// 008386c4  c3                   ret 
// 008386c5  33c0                 xor eax, eax
// 008386c7  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
