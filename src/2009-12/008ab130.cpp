// roc 2009-12 008ab130  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab130
//
// 008ab130  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ab134  57                   push edi
// 008ab135  8bf9                 mov edi, ecx
// 008ab137  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ab13b  50                   push eax
// 008ab13c  51                   push ecx
// 008ab13d  8bcf                 mov ecx, edi
// 008ab13f  e87cfeffff           call 0x8aafc0
// 008ab144  85c0                 test eax, eax
// 008ab146  741c                 je 0x8ab164
// 008ab148  56                   push esi
// 008ab149  8d4f54               lea ecx, [edi + 0x54]
// 008ab14c  8d7020               lea esi, [eax + 0x20]
// 008ab14f  e8ec560000           call 0x8b0840
// 008ab154  8b10                 mov edx, dword ptr [eax]
// 008ab156  56                   push esi
// 008ab157  8bc8                 mov ecx, eax
// 008ab159  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008ab15f  6a02                 push 2
// 008ab161  ffd0                 call eax
// 008ab163  5e                   pop esi
// 008ab164  5f                   pop edi
// 008ab165  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp