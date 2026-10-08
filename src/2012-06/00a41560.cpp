// roc 2012-06 00a41560  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a41560
//
// 00a41560  56                   push esi
// 00a41561  8bf1                 mov esi, ecx
// 00a41563  e8f8f9ffff           call 0xa40f60
// 00a41568  c7063c20c200         mov dword ptr [esi], 0xc2203c
// 00a4156e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 00a41575  8bc6                 mov eax, esi
// 00a41577  5e                   pop esi
// 00a41578  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
