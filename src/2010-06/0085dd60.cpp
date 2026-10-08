// roc 2010-06 0085dd60  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085dd60
//
// 0085dd60  56                   push esi
// 0085dd61  83c154               add ecx, 0x54
// 0085dd64  e8b76b0000           call 0x864920
// 0085dd69  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 0085dd6f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 0085dd75  8b16                 mov edx, dword ptr [esi]
// 0085dd77  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0085dd7a  6a00                 push 0
// 0085dd7c  8bce                 mov ecx, esi
// 0085dd7e  ffd0                 call eax
// 0085dd80  034610               add eax, dword ptr [esi + 0x10]
// 0085dd83  034608               add eax, dword ptr [esi + 8]
// 0085dd86  5e                   pop esi
// 0085dd87  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
