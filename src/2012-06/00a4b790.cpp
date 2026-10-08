// from server: 100% by auto
// roc 2012-06 00a4b790  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b790
//
// 00a4b790  8b01                 mov eax, dword ptr [ecx]
// 00a4b792  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a4b795  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
