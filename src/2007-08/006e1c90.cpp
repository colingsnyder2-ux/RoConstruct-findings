// from server: 100% by auto
// roc 2007-08 006e1c90  unit: CXTPDockingPaneAutoHidePanel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1c90
//
// 006e1c90  8d41ac               lea eax, [ecx - 0x54]
// 006e1c93  85c0                 test eax, eax
// 006e1c95  7501                 jne 0x6e1c98
// 006e1c97  c3                   ret 
// 006e1c98  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e1c9b  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPaneHwnd@CXTPDockingPaneAutoHidePanel@@UBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
