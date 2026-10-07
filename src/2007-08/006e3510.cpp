// roc 2007-08 006e3510  unit: CXTPDockingPaneTabbedContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3510
//
// 006e3510  837c240800           cmp dword ptr [esp + 8], 0
// 006e3515  8b442404             mov eax, dword ptr [esp + 4]
// 006e3519  7404                 je 0x6e351f
// 006e351b  83c020               add eax, 0x20
// 006e351e  c3                   ret 
// 006e351f  83c024               add eax, 0x24
// 006e3522  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMaxSize@CXTPDockingPaneSplitterContainer@@CAAAJPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
