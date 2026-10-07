// roc 2007-08 006e54b0  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e54b0
//
// 006e54b0  8b442404             mov eax, dword ptr [esp + 4]
// 006e54b4  83f83e               cmp eax, 0x3e
// 006e54b7  7707                 ja 0x6e54c0
// 006e54b9  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 006e54c0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
