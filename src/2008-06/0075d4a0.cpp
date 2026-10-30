// from server: 100% by auto
// roc 2008-06 0075d4a0  unit: CXTPDockingPane  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d4a0
//
// 0075d4a0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0075d4a3  85c0                 test eax, eax
// 0075d4a5  7501                 jne 0x75d4a8
// 0075d4a7  c3                   ret 
// 0075d4a8  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0075d4ae  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetDockingPaneManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
