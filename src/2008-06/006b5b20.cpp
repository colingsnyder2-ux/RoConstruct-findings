// roc 2008-06 006b5b20  unit: CXTPCommandBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5b20
//
// 006b5b20  e8ebf2ffff           call 0x6b4e10
// 006b5b25  85c0                 test eax, eax
// 006b5b27  7407                 je 0x6b5b30
// 006b5b29  8bc8                 mov ecx, eax
// 006b5b2b  e910eafeff           jmp 0x6a4540
// 006b5b30  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSidePanel.cpp (function ?_RestoreFocus@CXTPDockingPaneSidePanel@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSidePanel.cpp
