// roc 2010-06 00864920  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864920
//
// 00864920  e8ebffffff           call 0x864910
// 00864925  85c0                 test eax, eax
// 00864927  7501                 jne 0x86492a
// 00864929  c3                   ret 
// 0086492a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00864930  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
