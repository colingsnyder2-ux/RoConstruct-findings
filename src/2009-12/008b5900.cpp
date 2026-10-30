// roc 2009-12 008b5900  unit: CXTPDockingPaneSplitterContainer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5900
//
// 008b5900  8b442404             mov eax, dword ptr [esp + 4]
// 008b5904  83f83e               cmp eax, 0x3e
// 008b5907  7707                 ja 0x8b5910
// 008b5909  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 008b5910  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
