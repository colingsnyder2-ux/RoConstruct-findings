// roc 2011-06 008bc070  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc070
//
// 008bc070  e8abeeffff           call 0x8baf20
// 008bc075  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008bc07b  83f803               cmp eax, 3
// 008bc07e  7719                 ja 0x8bc099
// 008bc080  ff24859cc08b00       jmp dword ptr [eax*4 + 0x8bc09c]
// 008bc087  b803000000           mov eax, 3
// 008bc08c  c3                   ret 
// 008bc08d  b801000000           mov eax, 1
// 008bc092  c3                   ret 
// 008bc093  b802000000           mov eax, 2
// 008bc098  c3                   ret 
// 008bc099  33c0                 xor eax, eax
// 008bc09b  c3                   ret 
// 008bc09c  87c0                 xchg eax, eax
// 008bc09e  8b00                 mov eax, dword ptr [eax]
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp