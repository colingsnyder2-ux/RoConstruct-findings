// from server: 100% by auto
// roc 2007-08 006e5460  unit: CXTPDockingPaneSplitterContainer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5460
//
// 006e5460  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006e5463  8b01                 mov eax, dword ptr [ecx]
// 006e5465  8b5004               mov edx, dword ptr [eax + 4]
// 006e5468  ffe2                 jmp edx
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?InvalidateRect@CXTPDockingPaneCaptionButton@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
