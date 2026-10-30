// roc 2012-06 00a34550  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34550
//
// 00a34550  e8dbeeffff           call 0xa33430
// 00a34555  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00a3455b  83f803               cmp eax, 3
// 00a3455e  7719                 ja 0xa34579
// 00a34560  ff24857c45a300       jmp dword ptr [eax*4 + 0xa3457c]
// 00a34567  b803000000           mov eax, 3
// 00a3456c  c3                   ret 
// 00a3456d  b801000000           mov eax, 1
// 00a34572  c3                   ret 
// 00a34573  b802000000           mov eax, 2
// 00a34578  c3                   ret 
// 00a34579  33c0                 xor eax, eax
// 00a3457b  c3                   ret 
// 00a3457c  6745                 inc ebp
// 00a3457e  a3006d45a3           mov dword ptr [0xa3456d00], eax
// 00a34583  007345               add byte ptr [ebx + 0x45], dh
// 00a34586  a3007945a3           mov dword ptr [0xa3457900], eax
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp