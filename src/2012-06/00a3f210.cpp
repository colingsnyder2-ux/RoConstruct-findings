// roc 2012-06 00a3f210  unit: CXTPDockingPaneSplitterContainer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f210
//
// 00a3f210  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a3f213  8b01                 mov eax, dword ptr [ecx]
// 00a3f215  8b5004               mov edx, dword ptr [eax + 4]
// 00a3f218  ffe2                 jmp edx
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?InvalidateRect@CXTPDockingPaneCaptionButton@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
