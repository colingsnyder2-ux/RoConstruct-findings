// roc 2010-06 008648f0  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008648f0
//
// 008648f0  83791000             cmp dword ptr [ecx + 0x10], 0
// 008648f4  740a                 je 0x864900
// 008648f6  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008648f9  8b01                 mov eax, dword ptr [ecx]
// 008648fb  8b4038               mov eax, dword ptr [eax + 0x38]
// 008648fe  ffe0                 jmp eax
// 00864900  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
