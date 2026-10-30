// roc 2009-06 007e0d50  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e0d50
//
// 007e0d50  56                   push esi
// 007e0d51  8bf1                 mov esi, ecx
// 007e0d53  e858feffff           call 0x7e0bb0
// 007e0d58  33c0                 xor eax, eax
// 007e0d5a  89864c020000         mov dword ptr [esi + 0x24c], eax
// 007e0d60  898650020000         mov dword ptr [esi + 0x250], eax
// 007e0d66  c706247b9000         mov dword ptr [esi], 0x907b24
// 007e0d6c  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 007e0d73  8bc6                 mov eax, esi
// 007e0d75  5e                   pop esi
// 007e0d76  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
