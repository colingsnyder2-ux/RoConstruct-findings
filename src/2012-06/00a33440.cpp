// roc 2012-06 00a33440  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a33440
//
// 00a33440  56                   push esi
// 00a33441  83c154               add ecx, 0x54
// 00a33444  e8376d0000           call 0xa3a180
// 00a33449  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00a3344f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 00a33455  8b16                 mov edx, dword ptr [esi]
// 00a33457  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a3345a  6a00                 push 0
// 00a3345c  8bce                 mov ecx, esi
// 00a3345e  ffd0                 call eax
// 00a33460  034610               add eax, dword ptr [esi + 0x10]
// 00a33463  034608               add eax, dword ptr [esi + 8]
// 00a33466  5e                   pop esi
// 00a33467  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
