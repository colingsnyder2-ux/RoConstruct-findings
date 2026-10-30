// from server: 100% by auto
// roc 2008-06 006e5060  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5060
//
// 006e5060  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006e5066  85c0                 test eax, eax
// 006e5068  740b                 je 0x6e5075
// 006e506a  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e506d  85c0                 test eax, eax
// 006e506f  7404                 je 0x6e5075
// 006e5071  83c020               add eax, 0x20
// 006e5074  c3                   ret 
// 006e5075  33c0                 xor eax, eax
// 006e5077  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetTopPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
