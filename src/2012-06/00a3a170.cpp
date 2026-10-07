// roc 2012-06 00a3a170  unit: CXTPDockingPane  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a170
//
// 00a3a170  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a3a173  85c0                 test eax, eax
// 00a3a175  7501                 jne 0xa3a178
// 00a3a177  c3                   ret 
// 00a3a178  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00a3a17e  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetDockingPaneManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
