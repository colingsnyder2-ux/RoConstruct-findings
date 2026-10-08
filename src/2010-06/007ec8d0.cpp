// roc 2010-06 007ec8d0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec8d0
//
// 007ec8d0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007ec8d6  85c0                 test eax, eax
// 007ec8d8  740b                 je 0x7ec8e5
// 007ec8da  8b4020               mov eax, dword ptr [eax + 0x20]
// 007ec8dd  85c0                 test eax, eax
// 007ec8df  7404                 je 0x7ec8e5
// 007ec8e1  83c020               add eax, 0x20
// 007ec8e4  c3                   ret 
// 007ec8e5  33c0                 xor eax, eax
// 007ec8e7  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
