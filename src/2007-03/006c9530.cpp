// roc 2007-03 006c9530  unit: seg_006c0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9530
//
// 006c9530  e8ebffffff           call 0x6c9520
// 006c9535  85c0                 test eax, eax
// 006c9537  7501                 jne 0x6c953a
// 006c9539  c3                   ret 
// 006c953a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006c9540  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
