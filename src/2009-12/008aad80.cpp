// roc 2009-12 008aad80  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aad80
//
// 008aad80  e88beeffff           call 0x8a9c10
// 008aad85  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008aad8b  83f803               cmp eax, 3
// 008aad8e  7719                 ja 0x8aada9
// 008aad90  ff2485acad8a00       jmp dword ptr [eax*4 + 0x8aadac]
// 008aad97  b803000000           mov eax, 3
// 008aad9c  c3                   ret 
// 008aad9d  b801000000           mov eax, 1
// 008aada2  c3                   ret 
// 008aada3  b802000000           mov eax, 2
// 008aada8  c3                   ret 
// 008aada9  33c0                 xor eax, eax
// 008aadab  c3                   ret 
// 008aadac  97                   xchg edi, eax
// 008aadad  ad                   lodsd eax, dword ptr [esi]
// 008aadae  8a00                 mov al, byte ptr [eax]
// 008aadb0  9d                   popfd 
// 008aadb1  ad                   lodsd eax, dword ptr [esi]
// 008aadb2  8a00                 mov al, byte ptr [eax]
// 008aadb4  a3ad8a00a9           mov dword ptr [0xa9008aad], eax
// 008aadb9  ad                   lodsd eax, dword ptr [esi]
// 008aadba  8a00                 mov al, byte ptr [eax]
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp