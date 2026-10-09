// roc 2007-03 006c9500  unit: seg_006c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9500
//
// 006c9500  83791000             cmp dword ptr [ecx + 0x10], 0
// 006c9504  740a                 je 0x6c9510
// 006c9506  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006c9509  8b01                 mov eax, dword ptr [ecx]
// 006c950b  8b4038               mov eax, dword ptr [eax + 0x38]
// 006c950e  ffe0                 jmp eax
// 006c9510  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
