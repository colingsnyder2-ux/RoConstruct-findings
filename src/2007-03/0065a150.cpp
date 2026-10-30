// roc 2007-03 0065a150  unit: seg_00650000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a150
//
// 0065a150  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0065a156  85c0                 test eax, eax
// 0065a158  740b                 je 0x65a165
// 0065a15a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065a15d  85c0                 test eax, eax
// 0065a15f  7404                 je 0x65a165
// 0065a161  83c020               add eax, 0x20
// 0065a164  c3                   ret 
// 0065a165  33c0                 xor eax, eax
// 0065a167  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
