// from server: 100% by auto
// roc 2008-06 00764900  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00764900
//
// 00764900  56                   push esi
// 00764901  8bf1                 mov esi, ecx
// 00764903  e8f8f9ffff           call 0x764300
// 00764908  c70604688600         mov dword ptr [esi], 0x866804
// 0076490e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 00764915  8bc6                 mov eax, esi
// 00764917  5e                   pop esi
// 00764918  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
