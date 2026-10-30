// roc 2011-06 008c91b0  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c91b0
//
// 008c91b0  56                   push esi
// 008c91b1  8bf1                 mov esi, ecx
// 008c91b3  e8d8f9ffff           call 0x8c8b90
// 008c91b8  c706a469ad00         mov dword ptr [esi], 0xad69a4
// 008c91be  c7467001000000       mov dword ptr [esi + 0x70], 1
// 008c91c5  8bc6                 mov eax, esi
// 008c91c7  5e                   pop esi
// 008c91c8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
