// roc 2009-06 007d5d10  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5d10
//
// 007d5d10  e8ebffffff           call 0x7d5d00
// 007d5d15  85c0                 test eax, eax
// 007d5d17  7501                 jne 0x7d5d1a
// 007d5d19  c3                   ret 
// 007d5d1a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 007d5d20  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
