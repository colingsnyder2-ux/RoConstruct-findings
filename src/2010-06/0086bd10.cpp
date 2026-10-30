// roc 2010-06 0086bd10  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086bd10
//
// 0086bd10  56                   push esi
// 0086bd11  8bf1                 mov esi, ecx
// 0086bd13  e8d8f9ffff           call 0x86b6f0
// 0086bd18  c70694bfa600         mov dword ptr [esi], 0xa6bf94
// 0086bd1e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 0086bd25  8bc6                 mov eax, esi
// 0086bd27  5e                   pop esi
// 0086bd28  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
