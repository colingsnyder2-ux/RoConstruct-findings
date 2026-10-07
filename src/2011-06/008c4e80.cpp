// roc 2011-06 008c4e80  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c4e80
//
// 008c4e80  837c240800           cmp dword ptr [esp + 8], 0
// 008c4e85  8b442404             mov eax, dword ptr [esp + 4]
// 008c4e89  7404                 je 0x8c4e8f
// 008c4e8b  83c020               add eax, 0x20
// 008c4e8e  c3                   ret 
// 008c4e8f  83c024               add eax, 0x24
// 008c4e92  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMaxSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
