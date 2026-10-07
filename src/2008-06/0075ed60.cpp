// roc 2008-06 0075ed60  unit: CXTPDockingPaneAutoHidePanel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ed60
//
// 0075ed60  8d41ac               lea eax, [ecx - 0x54]
// 0075ed63  85c0                 test eax, eax
// 0075ed65  7501                 jne 0x75ed68
// 0075ed67  c3                   ret 
// 0075ed68  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075ed6b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPaneHwnd@CXTPDockingPaneAutoHidePanel@@UBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
