// roc 2010-06 008699f0  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008699f0
//
// 008699f0  8b442404             mov eax, dword ptr [esp + 4]
// 008699f4  83f83e               cmp eax, 0x3e
// 008699f7  7707                 ja 0x869a00
// 008699f9  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 00869a00  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
