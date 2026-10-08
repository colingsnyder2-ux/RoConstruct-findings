// roc 2011-06 008c1d40  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1d40
//
// 008c1d40  83791000             cmp dword ptr [ecx + 0x10], 0
// 008c1d44  740a                 je 0x8c1d50
// 008c1d46  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008c1d49  8b01                 mov eax, dword ptr [ecx]
// 008c1d4b  8b4038               mov eax, dword ptr [eax + 0x38]
// 008c1d4e  ffe0                 jmp eax
// 008c1d50  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
