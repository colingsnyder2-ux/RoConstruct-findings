// roc 2009-12 008b56b0  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b56b0
//
// 008b56b0  8bc1                 mov eax, ecx
// 008b56b2  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008b56b5  8b11                 mov edx, dword ptr [ecx]
// 008b56b7  50                   push eax
// 008b56b8  8b4250               mov eax, dword ptr [edx + 0x50]
// 008b56bb  ffd0                 call eax
// 008b56bd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
