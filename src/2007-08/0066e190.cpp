// roc 2007-08 0066e190  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e190
//
// 0066e190  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e196  85c0                 test eax, eax
// 0066e198  740b                 je 0x66e1a5
// 0066e19a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066e19d  85c0                 test eax, eax
// 0066e19f  7404                 je 0x66e1a5
// 0066e1a1  83c020               add eax, 0x20
// 0066e1a4  c3                   ret 
// 0066e1a5  33c0                 xor eax, eax
// 0066e1a7  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
