// roc 2012-06 00a3f260  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f260
//
// 00a3f260  8b442404             mov eax, dword ptr [esp + 4]
// 00a3f264  83f83e               cmp eax, 0x3e
// 00a3f267  7707                 ja 0xa3f270
// 00a3f269  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 00a3f270  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
