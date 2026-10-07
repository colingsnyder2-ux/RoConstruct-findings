// roc 2012-06 00a3d290  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d290
//
// 00a3d290  837c240800           cmp dword ptr [esp + 8], 0
// 00a3d295  8b442404             mov eax, dword ptr [esp + 4]
// 00a3d299  7404                 je 0xa3d29f
// 00a3d29b  83c018               add eax, 0x18
// 00a3d29e  c3                   ret 
// 00a3d29f  83c01c               add eax, 0x1c
// 00a3d2a2  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
