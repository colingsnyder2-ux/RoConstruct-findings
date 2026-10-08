// roc 2009-06 007d5ce0  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5ce0
//
// 007d5ce0  83791000             cmp dword ptr [ecx + 0x10], 0
// 007d5ce4  740a                 je 0x7d5cf0
// 007d5ce6  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007d5ce9  8b01                 mov eax, dword ptr [ecx]
// 007d5ceb  8b4038               mov eax, dword ptr [eax + 0x38]
// 007d5cee  ffe0                 jmp eax
// 007d5cf0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
