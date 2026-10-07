// roc 2007-08 006e5320  unit: CXTPDockingPaneSplitterContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5320
//
// 006e5320  8bc1                 mov eax, ecx
// 006e5322  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006e5325  8b11                 mov edx, dword ptr [ecx]
// 006e5327  50                   push eax
// 006e5328  8b4250               mov eax, dword ptr [edx + 0x50]
// 006e532b  ffd0                 call eax
// 006e532d  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
