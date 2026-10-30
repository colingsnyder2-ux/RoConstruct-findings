// roc 2009-12 008aad30  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aad30
//
// 008aad30  e8dbeeffff           call 0x8a9c10
// 008aad35  83782000             cmp dword ptr [eax + 0x20], 0
// 008aad39  7416                 je 0x8aad51
// 008aad3b  8b442404             mov eax, dword ptr [esp + 4]
// 008aad3f  6a00                 push 0
// 008aad41  50                   push eax
// 008aad42  e8c9eeffff           call 0x8a9c10
// 008aad47  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008aad4a  51                   push ecx
// 008aad4b  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008aad51  c20800               ret 8
// copied from an identical function in another client (function ?RedrawControl@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp