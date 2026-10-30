// roc 2007-08 006dab10  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dab10
//
// 006dab10  e8bbeeffff           call 0x6d99d0
// 006dab15  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006dab1b  83f803               cmp eax, 3
// 006dab1e  7719                 ja 0x6dab39
// 006dab20  ff24853cab6d00       jmp dword ptr [eax*4 + 0x6dab3c]
// 006dab27  b803000000           mov eax, 3
// 006dab2c  c3                   ret 
// 006dab2d  b801000000           mov eax, 1
// 006dab32  c3                   ret 
// 006dab33  b802000000           mov eax, 2
// 006dab38  c3                   ret 
// 006dab39  33c0                 xor eax, eax
// 006dab3b  c3                   ret 
// 006dab3c  27                   daa 
// 006dab3d  ab                   stosd dword ptr es:[edi], eax
// 006dab3e  6d                   insd dword ptr es:[edi], dx
// 006dab3f  002dab6d0033         add byte ptr [0x33006dab], ch
// 006dab45  ab                   stosd dword ptr es:[edi], eax
// 006dab46  6d                   insd dword ptr es:[edi], dx
// 006dab47  0039                 add byte ptr [ecx], bh
// 006dab49  ab                   stosd dword ptr es:[edi], eax
// 006dab4a  6d                   insd dword ptr es:[edi], dx
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp