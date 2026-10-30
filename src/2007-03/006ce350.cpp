// roc 2007-03 006ce350  unit: seg_006c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce350
//
// 006ce350  8b442404             mov eax, dword ptr [esp + 4]
// 006ce354  83f83e               cmp eax, 0x3e
// 006ce357  7707                 ja 0x6ce360
// 006ce359  8b8481a4000000       mov eax, dword ptr [ecx + eax*4 + 0xa4]
// 006ce360  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetXtremeColor@CXTPDockingPanePaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
