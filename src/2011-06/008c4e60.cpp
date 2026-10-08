// from server: 100% by auto
// roc 2011-06 008c4e60  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c4e60
//
// 008c4e60  837c240800           cmp dword ptr [esp + 8], 0
// 008c4e65  8b442404             mov eax, dword ptr [esp + 4]
// 008c4e69  7404                 je 0x8c4e6f
// 008c4e6b  83c018               add eax, 0x18
// 008c4e6e  c3                   ret 
// 008c4e6f  83c01c               add eax, 0x1c
// 008c4e72  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
