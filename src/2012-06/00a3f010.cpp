// roc 2012-06 00a3f010  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f010
//
// 00a3f010  8bc1                 mov eax, ecx
// 00a3f012  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00a3f015  8b11                 mov edx, dword ptr [ecx]
// 00a3f017  50                   push eax
// 00a3f018  8b4250               mov eax, dword ptr [edx + 0x50]
// 00a3f01b  ffd0                 call eax
// 00a3f01d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
