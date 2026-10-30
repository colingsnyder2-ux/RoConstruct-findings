// roc 2007-03 006d0610  unit: seg_006d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d0610
//
// 006d0610  56                   push esi
// 006d0611  8bf1                 mov esi, ecx
// 006d0613  e828faffff           call 0x6d0040
// 006d0618  c70624727d00         mov dword ptr [esi], 0x7d7224
// 006d061e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 006d0625  8bc6                 mov eax, esi
// 006d0627  5e                   pop esi
// 006d0628  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
