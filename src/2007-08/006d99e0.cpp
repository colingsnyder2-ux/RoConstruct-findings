// from server: 100% by auto
// roc 2007-08 006d99e0  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d99e0
//
// 006d99e0  56                   push esi
// 006d99e1  83c154               add ecx, 0x54
// 006d99e4  e8676b0000           call 0x6e0550
// 006d99e9  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 006d99ef  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 006d99f5  8b16                 mov edx, dword ptr [esi]
// 006d99f7  8b421c               mov eax, dword ptr [edx + 0x1c]
// 006d99fa  6a00                 push 0
// 006d99fc  8bce                 mov ecx, esi
// 006d99fe  ffd0                 call eax
// 006d9a00  034610               add eax, dword ptr [esi + 0x10]
// 006d9a03  034608               add eax, dword ptr [esi + 8]
// 006d9a06  5e                   pop esi
// 006d9a07  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
