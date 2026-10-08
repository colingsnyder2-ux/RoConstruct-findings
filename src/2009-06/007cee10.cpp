// roc 2009-06 007cee10  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cee10
//
// 007cee10  56                   push esi
// 007cee11  83c154               add ecx, 0x54
// 007cee14  e8f76e0000           call 0x7d5d10
// 007cee19  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 007cee1f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 007cee25  8b16                 mov edx, dword ptr [esi]
// 007cee27  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007cee2a  6a00                 push 0
// 007cee2c  8bce                 mov ecx, esi
// 007cee2e  ffd0                 call eax
// 007cee30  034610               add eax, dword ptr [esi + 0x10]
// 007cee33  034608               add eax, dword ptr [esi + 8]
// 007cee36  5e                   pop esi
// 007cee37  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
