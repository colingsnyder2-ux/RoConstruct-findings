// from server: 100% by auto
// roc 2008-06 0075d480  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d480
//
// 0075d480  83791000             cmp dword ptr [ecx + 0x10], 0
// 0075d484  740a                 je 0x75d490
// 0075d486  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0075d489  8b01                 mov eax, dword ptr [ecx]
// 0075d48b  8b4038               mov eax, dword ptr [eax + 0x38]
// 0075d48e  ffe0                 jmp eax
// 0075d490  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
