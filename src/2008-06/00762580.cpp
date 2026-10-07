// roc 2008-06 00762580  unit: CXTPDockingPaneSplitterContainer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762580
//
// 00762580  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00762583  8b01                 mov eax, dword ptr [ecx]
// 00762585  8b5004               mov edx, dword ptr [eax + 4]
// 00762588  ffe2                 jmp edx
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?InvalidateRect@CXTPDockingPaneCaptionButton@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
