// from server: 100% by auto
// roc 2011-06 008c1fb0  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1fb0
//
// 008c1fb0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008c1fb3  3b442404             cmp eax, dword ptr [esp + 4]
// 008c1fb7  750a                 jne 0x8c1fc3
// 008c1fb9  51                   push ecx
// 008c1fba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c1fbe  e8ade50200           call 0x8f0570
// 008c1fc3  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?FindPane@CXTPDockingPaneBase@@UBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
