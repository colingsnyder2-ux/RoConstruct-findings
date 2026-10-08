// roc 2011-06 0084e0f0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e0f0
//
// 0084e0f0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0084e0f6  85c0                 test eax, eax
// 0084e0f8  740b                 je 0x84e105
// 0084e0fa  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084e0fd  85c0                 test eax, eax
// 0084e0ff  7404                 je 0x84e105
// 0084e101  83c020               add eax, 0x20
// 0084e104  c3                   ret 
// 0084e105  33c0                 xor eax, eax
// 0084e107  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
