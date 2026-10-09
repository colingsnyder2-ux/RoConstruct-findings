// roc 2007-03 006e7b30  unit: seg_006e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7b30
//
// 006e7b30  837c240400           cmp dword ptr [esp + 4], 0
// 006e7b35  8d811c010000         lea eax, [ecx + 0x11c]
// 006e7b3b  7506                 jne 0x6e7b43
// 006e7b3d  8d810c010000         lea eax, [ecx + 0x10c]
// 006e7b43  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
