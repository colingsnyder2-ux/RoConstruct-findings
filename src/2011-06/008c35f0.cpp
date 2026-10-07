// roc 2011-06 008c35f0  unit: CXTPDockingPaneAutoHidePanel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c35f0
//
// 008c35f0  8d41ac               lea eax, [ecx - 0x54]
// 008c35f3  85c0                 test eax, eax
// 008c35f5  7501                 jne 0x8c35f8
// 008c35f7  c3                   ret 
// 008c35f8  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c35fb  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPaneHwnd@CXTPDockingPaneAutoHidePanel@@UBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
