// roc 2011-06 0081b790  unit: CXTPCommandBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081b790
//
// 0081b790  e8fbf2ffff           call 0x81aa90
// 0081b795  85c0                 test eax, eax
// 0081b797  7407                 je 0x81b7a0
// 0081b799  8bc8                 mov ecx, eax
// 0081b79b  e9b0fe0000           jmp 0x82b650
// 0081b7a0  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSidePanel.cpp (function ?_RestoreFocus@CXTPDockingPaneSidePanel@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSidePanel.cpp
