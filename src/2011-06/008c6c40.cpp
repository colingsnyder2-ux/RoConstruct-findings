// roc 2011-06 008c6c40  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6c40
//
// 008c6c40  8bc1                 mov eax, ecx
// 008c6c42  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008c6c45  8b11                 mov edx, dword ptr [ecx]
// 008c6c47  50                   push eax
// 008c6c48  8b4250               mov eax, dword ptr [edx + 0x50]
// 008c6c4b  ffd0                 call eax
// 008c6c4d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
