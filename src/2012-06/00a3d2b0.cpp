// from server: 100% by auto
// roc 2012-06 00a3d2b0  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d2b0
//
// 00a3d2b0  837c240800           cmp dword ptr [esp + 8], 0
// 00a3d2b5  8b442404             mov eax, dword ptr [esp + 4]
// 00a3d2b9  7404                 je 0xa3d2bf
// 00a3d2bb  83c020               add eax, 0x20
// 00a3d2be  c3                   ret 
// 00a3d2bf  83c024               add eax, 0x24
// 00a3d2c2  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMaxSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
