// roc 2009-06 007f37c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f37c0
//
// 007f37c0  8b01                 mov eax, dword ptr [ecx]
// 007f37c2  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f37c5  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
