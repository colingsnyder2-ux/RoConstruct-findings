// roc 2009-12 008b7c00  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b7c00
//
// 008b7c00  56                   push esi
// 008b7c01  8bf1                 mov esi, ecx
// 008b7c03  e8f8f9ffff           call 0x8b7600
// 008b7c08  c706ac7ca000         mov dword ptr [esi], 0xa07cac
// 008b7c0e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 008b7c15  8bc6                 mov eax, esi
// 008b7c17  5e                   pop esi
// 008b7c18  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
