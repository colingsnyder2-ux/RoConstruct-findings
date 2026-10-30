// roc 2010-06 0085ee90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085ee90
//
// 0085ee90  e8bbeeffff           call 0x85dd50
// 0085ee95  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 0085ee9b  83f803               cmp eax, 3
// 0085ee9e  7719                 ja 0x85eeb9
// 0085eea0  ff2485bcee8500       jmp dword ptr [eax*4 + 0x85eebc]
// 0085eea7  b803000000           mov eax, 3
// 0085eeac  c3                   ret 
// 0085eead  b801000000           mov eax, 1
// 0085eeb2  c3                   ret 
// 0085eeb3  b802000000           mov eax, 2
// 0085eeb8  c3                   ret 
// 0085eeb9  33c0                 xor eax, eax
// 0085eebb  c3                   ret 
// 0085eebc  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0085eebd  ee                   out dx, al
// 0085eebe  8500                 test dword ptr [eax], eax
// 0085eec0  ad                   lodsd eax, dword ptr [esi]
// 0085eec1  ee                   out dx, al
// 0085eec2  8500                 test dword ptr [eax], eax
// 0085eec4  b3ee                 mov bl, 0xee
// 0085eec6  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp