// roc 2009-12 008cef00  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cef00
//
// 008cef00  c70144a7a000         mov dword ptr [ecx], 0xa0a744
// 008cef06  8b4904               mov ecx, dword ptr [ecx + 4]
// 008cef09  85c9                 test ecx, ecx
// 008cef0b  7407                 je 0x8cef14
// 008cef0d  51                   push ecx
// 008cef0e  e8f34bf2ff           call 0x7f3b06
// 008cef13  59                   pop ecx
// 008cef14  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
