// roc 2011-06 008c6e90  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6e90
//
// 008c6e90  8b442404             mov eax, dword ptr [esp + 4]
// 008c6e94  83f83e               cmp eax, 0x3e
// 008c6e97  7707                 ja 0x8c6ea0
// 008c6e99  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 008c6ea0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
