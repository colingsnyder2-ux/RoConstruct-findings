// roc 2008-06 007605f0  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007605f0
//
// 007605f0  837c240800           cmp dword ptr [esp + 8], 0
// 007605f5  8b442404             mov eax, dword ptr [esp + 4]
// 007605f9  7404                 je 0x7605ff
// 007605fb  83c020               add eax, 0x20
// 007605fe  c3                   ret 
// 007605ff  83c024               add eax, 0x24
// 00760602  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMaxSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
