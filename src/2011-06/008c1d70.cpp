// roc 2011-06 008c1d70  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1d70
//
// 008c1d70  e8ebffffff           call 0x8c1d60
// 008c1d75  85c0                 test eax, eax
// 008c1d77  7501                 jne 0x8c1d7a
// 008c1d79  c3                   ret 
// 008c1d7a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008c1d80  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
