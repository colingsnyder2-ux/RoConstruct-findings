// from server: 100% by auto
// roc 2007-08 006e34f0  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e34f0
//
// 006e34f0  837c240800           cmp dword ptr [esp + 8], 0
// 006e34f5  8b442404             mov eax, dword ptr [esp + 4]
// 006e34f9  7404                 je 0x6e34ff
// 006e34fb  83c018               add eax, 0x18
// 006e34fe  c3                   ret 
// 006e34ff  83c01c               add eax, 0x1c
// 006e3502  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
