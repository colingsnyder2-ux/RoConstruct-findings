// roc 2009-06 007dadd0  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dadd0
//
// 007dadd0  8b442404             mov eax, dword ptr [esp + 4]
// 007dadd4  83f83e               cmp eax, 0x3e
// 007dadd7  7707                 ja 0x7dade0
// 007dadd9  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 007dade0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
