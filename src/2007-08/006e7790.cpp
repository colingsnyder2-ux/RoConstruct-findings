// roc 2007-08 006e7790  unit: CXTPDockingPanePaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e7790
//
// 006e7790  56                   push esi
// 006e7791  8bf1                 mov esi, ecx
// 006e7793  e828faffff           call 0x6e71c0
// 006e7798  c70624a57d00         mov dword ptr [esi], 0x7da524
// 006e779e  c7467001000000       mov dword ptr [esi + 0x70], 1
// 006e77a5  8bc6                 mov eax, esi
// 006e77a7  5e                   pop esi
// 006e77a8  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneGripperedTheme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
