// from server: 100% by auto
// roc 2011-06 008c1d60  unit: CXTPDockingPane  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1d60
//
// 008c1d60  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008c1d63  85c0                 test eax, eax
// 008c1d65  7501                 jne 0x8c1d68
// 008c1d67  c3                   ret 
// 008c1d68  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008c1d6e  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetDockingPaneManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
