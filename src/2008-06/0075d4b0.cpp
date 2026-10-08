// from server: 100% by auto
// roc 2008-06 0075d4b0  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d4b0
//
// 0075d4b0  e8ebffffff           call 0x75d4a0
// 0075d4b5  85c0                 test eax, eax
// 0075d4b7  7501                 jne 0x75d4ba
// 0075d4b9  c3                   ret 
// 0075d4ba  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 0075d4c0  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
