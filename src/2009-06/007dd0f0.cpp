// roc 2009-06 007dd0f0  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dd0f0
//
// 007dd0f0  56                   push esi
// 007dd0f1  8bf1                 mov esi, ecx
// 007dd0f3  e8f8f9ffff           call 0x7dcaf0
// 007dd0f8  c7063c789000         mov dword ptr [esi], 0x90783c
// 007dd0fe  c7467001000000       mov dword ptr [esi + 0x70], 1
// 007dd105  8bc6                 mov eax, esi
// 007dd107  5e                   pop esi
// 007dd108  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
