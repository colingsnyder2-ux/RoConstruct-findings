// roc 2008-06 00762380  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762380
//
// 00762380  8bc1                 mov eax, ecx
// 00762382  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00762385  8b11                 mov edx, dword ptr [ecx]
// 00762387  50                   push eax
// 00762388  8b4250               mov eax, dword ptr [edx + 0x50]
// 0076238b  ffd0                 call eax
// 0076238d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
