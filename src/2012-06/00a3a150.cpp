// roc 2012-06 00a3a150  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a150
//
// 00a3a150  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a3a154  740a                 je 0xa3a160
// 00a3a156  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a3a159  8b01                 mov eax, dword ptr [ecx]
// 00a3a15b  8b4038               mov eax, dword ptr [eax + 0x38]
// 00a3a15e  ffe0                 jmp eax
// 00a3a160  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
