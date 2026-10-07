// roc 2008-06 007605d0  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007605d0
//
// 007605d0  837c240800           cmp dword ptr [esp + 8], 0
// 007605d5  8b442404             mov eax, dword ptr [esp + 4]
// 007605d9  7404                 je 0x7605df
// 007605db  83c018               add eax, 0x18
// 007605de  c3                   ret 
// 007605df  83c01c               add eax, 0x1c
// 007605e2  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
