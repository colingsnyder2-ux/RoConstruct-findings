// roc 2007-08 006e0550  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0550
//
// 006e0550  e8ebffffff           call 0x6e0540
// 006e0555  85c0                 test eax, eax
// 006e0557  7501                 jne 0x6e055a
// 006e0559  c3                   ret 
// 006e055a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006e0560  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
