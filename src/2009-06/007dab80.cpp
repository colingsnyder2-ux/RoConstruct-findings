// roc 2009-06 007dab80  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dab80
//
// 007dab80  8bc1                 mov eax, ecx
// 007dab82  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007dab85  8b11                 mov edx, dword ptr [ecx]
// 007dab87  50                   push eax
// 007dab88  8b4250               mov eax, dword ptr [edx + 0x50]
// 007dab8b  ffd0                 call eax
// 007dab8d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
