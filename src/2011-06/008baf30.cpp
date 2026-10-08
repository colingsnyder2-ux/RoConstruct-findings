// roc 2011-06 008baf30  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008baf30
//
// 008baf30  56                   push esi
// 008baf31  83c154               add ecx, 0x54
// 008baf34  e8376e0000           call 0x8c1d70
// 008baf39  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008baf3f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 008baf45  8b16                 mov edx, dword ptr [esi]
// 008baf47  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008baf4a  6a00                 push 0
// 008baf4c  8bce                 mov ecx, esi
// 008baf4e  ffd0                 call eax
// 008baf50  034610               add eax, dword ptr [esi + 0x10]
// 008baf53  034608               add eax, dword ptr [esi + 8]
// 008baf56  5e                   pop esi
// 008baf57  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
