// roc 2008-06 007625d0  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007625d0
//
// 007625d0  8b442404             mov eax, dword ptr [esp + 4]
// 007625d4  83f83e               cmp eax, 0x3e
// 007625d7  7707                 ja 0x7625e0
// 007625d9  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 007625e0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
