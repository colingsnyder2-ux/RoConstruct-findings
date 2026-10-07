// roc 2012-06 00a3ba20  unit: CXTPDockingPaneAutoHidePanel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3ba20
//
// 00a3ba20  8d41ac               lea eax, [ecx - 0x54]
// 00a3ba23  85c0                 test eax, eax
// 00a3ba25  7501                 jne 0xa3ba28
// 00a3ba27  c3                   ret 
// 00a3ba28  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a3ba2b  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPaneHwnd@CXTPDockingPaneAutoHidePanel@@UBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
