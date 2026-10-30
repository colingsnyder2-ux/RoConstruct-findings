// roc 2012-06 009c65a0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c65a0
//
// 009c65a0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009c65a6  85c0                 test eax, eax
// 009c65a8  740b                 je 0x9c65b5
// 009c65aa  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c65ad  85c0                 test eax, eax
// 009c65af  7404                 je 0x9c65b5
// 009c65b1  83c020               add eax, 0x20
// 009c65b4  c3                   ret 
// 009c65b5  33c0                 xor eax, eax
// 009c65b7  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
