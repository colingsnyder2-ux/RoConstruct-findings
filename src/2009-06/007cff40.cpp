// roc 2009-06 007cff40  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cff40
//
// 007cff40  e8bbeeffff           call 0x7cee00
// 007cff45  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 007cff4b  83f803               cmp eax, 3
// 007cff4e  7719                 ja 0x7cff69
// 007cff50  ff24856cff7c00       jmp dword ptr [eax*4 + 0x7cff6c]
// 007cff57  b803000000           mov eax, 3
// 007cff5c  c3                   ret 
// 007cff5d  b801000000           mov eax, 1
// 007cff62  c3                   ret 
// 007cff63  b802000000           mov eax, 2
// 007cff68  c3                   ret 
// 007cff69  33c0                 xor eax, eax
// 007cff6b  c3                   ret 
// 007cff6c  57                   push edi
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp