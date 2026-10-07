// roc 2012-06 00993a80  unit: CXTPCommandBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993a80
//
// 00993a80  e86bf2ffff           call 0x992cf0
// 00993a85  85c0                 test eax, eax
// 00993a87  7407                 je 0x993a90
// 00993a89  8bc8                 mov ecx, eax
// 00993a8b  e990010100           jmp 0x9a3c20
// 00993a90  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSidePanel.cpp (function ?_RestoreFocus@CXTPDockingPaneSidePanel@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSidePanel.cpp
