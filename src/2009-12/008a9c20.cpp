// roc 2009-12 008a9c20  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9c20
//
// 008a9c20  56                   push esi
// 008a9c21  83c154               add ecx, 0x54
// 008a9c24  e8276c0000           call 0x8b0850
// 008a9c29  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008a9c2f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 008a9c35  8b16                 mov edx, dword ptr [esi]
// 008a9c37  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008a9c3a  6a00                 push 0
// 008a9c3c  8bce                 mov ecx, esi
// 008a9c3e  ffd0                 call eax
// 008a9c40  034610               add eax, dword ptr [esi + 0x10]
// 008a9c43  034608               add eax, dword ptr [esi + 8]
// 008a9c46  5e                   pop esi
// 008a9c47  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
