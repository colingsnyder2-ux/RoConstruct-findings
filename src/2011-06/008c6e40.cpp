// roc 2011-06 008c6e40  unit: CXTPDockingPaneSplitterContainer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6e40
//
// 008c6e40  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008c6e43  8b01                 mov eax, dword ptr [ecx]
// 008c6e45  8b5004               mov edx, dword ptr [eax + 4]
// 008c6e48  ffe2                 jmp edx
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?InvalidateRect@CXTPDockingPaneCaptionButton@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
