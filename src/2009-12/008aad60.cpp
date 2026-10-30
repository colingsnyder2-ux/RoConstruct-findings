// roc 2009-12 008aad60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aad60
//
// 008aad60  e8abeeffff           call 0x8a9c10
// 008aad65  8bc8                 mov ecx, eax
// 008aad67  83c154               add ecx, 0x54
// 008aad6a  e8e15a0000           call 0x8b0850
// 008aad6f  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008aad75  c3                   ret 
// copied from an identical function in another client (function ?GetPaintManager@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp