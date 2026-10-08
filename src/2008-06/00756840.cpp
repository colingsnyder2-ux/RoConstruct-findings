// from server: 100% by auto
// roc 2008-06 00756840  unit: CXTPDockingPaneAutoHideWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756840
//
// 00756840  56                   push esi
// 00756841  83c154               add ecx, 0x54
// 00756844  e8676c0000           call 0x75d4b0
// 00756849  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 0075684f  8bb0e0000000         mov esi, dword ptr [eax + 0xe0]
// 00756855  8b16                 mov edx, dword ptr [esi]
// 00756857  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0075685a  6a00                 push 0
// 0075685c  8bce                 mov ecx, esi
// 0075685e  ffd0                 call eax
// 00756860  034610               add eax, dword ptr [esi + 0x10]
// 00756863  034608               add eax, dword ptr [esi + 8]
// 00756866  5e                   pop esi
// 00756867  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPanelHeight@CXTPDockingPaneAutoHidePanel@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
