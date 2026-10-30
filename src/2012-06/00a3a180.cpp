// roc 2012-06 00a3a180  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a180
//
// 00a3a180  e8ebffffff           call 0xa3a170
// 00a3a185  85c0                 test eax, eax
// 00a3a187  7501                 jne 0xa3a18a
// 00a3a189  c3                   ret 
// 00a3a18a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00a3a190  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
