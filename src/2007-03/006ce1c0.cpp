// roc 2007-03 006ce1c0  unit: seg_006c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce1c0
//
// 006ce1c0  8bc1                 mov eax, ecx
// 006ce1c2  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006ce1c5  8b11                 mov edx, dword ptr [ecx]
// 006ce1c7  50                   push eax
// 006ce1c8  8b4250               mov eax, dword ptr [edx + 0x50]
// 006ce1cb  ffd0                 call eax
// 006ce1cd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsVisible@CXTPDockingPaneCaptionButton@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
