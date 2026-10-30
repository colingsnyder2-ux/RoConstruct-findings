// roc 2010-06 008697a0  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008697a0
//
// 008697a0  8bc1                 mov eax, ecx
// 008697a2  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008697a5  8b11                 mov edx, dword ptr [ecx]
// 008697a7  50                   push eax
// 008697a8  8b4250               mov eax, dword ptr [edx + 0x50]
// 008697ab  ffd0                 call eax
// 008697ad  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
