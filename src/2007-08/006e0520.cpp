// roc 2007-08 006e0520  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0520
//
// 006e0520  83791000             cmp dword ptr [ecx + 0x10], 0
// 006e0524  740a                 je 0x6e0530
// 006e0526  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006e0529  8b01                 mov eax, dword ptr [ecx]
// 006e052b  8b4038               mov eax, dword ptr [eax + 0x38]
// 006e052e  ffe0                 jmp eax
// 006e0530  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
