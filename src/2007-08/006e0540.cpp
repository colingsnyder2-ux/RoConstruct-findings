// from server: 100% by auto
// roc 2007-08 006e0540  unit: CXTPDockingPane  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0540
//
// 006e0540  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006e0543  85c0                 test eax, eax
// 006e0545  7501                 jne 0x6e0548
// 006e0547  c3                   ret 
// 006e0548  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 006e054e  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetDockingPaneManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
