// roc 2009-06 0075d940  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d940
//
// 0075d940  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0075d946  85c0                 test eax, eax
// 0075d948  740b                 je 0x75d955
// 0075d94a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075d94d  85c0                 test eax, eax
// 0075d94f  7404                 je 0x75d955
// 0075d951  83c020               add eax, 0x20
// 0075d954  c3                   ret 
// 0075d955  33c0                 xor eax, eax
// 0075d957  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
