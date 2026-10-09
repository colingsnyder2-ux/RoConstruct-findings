// roc 2009-12 008b0850  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0850
//
// 008b0850  e8ebffffff           call 0x8b0840
// 008b0855  85c0                 test eax, eax
// 008b0857  7501                 jne 0x8b085a
// 008b0859  c3                   ret 
// 008b085a  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008b0860  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaintManager@CXTPDockingPaneBase@@QBEPAVCXTPDockingPanePaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
