// roc 2008-06 00757d30  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757d30
//
// 00757d30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00757d34  57                   push edi
// 00757d35  8bf9                 mov edi, ecx
// 00757d37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00757d3b  50                   push eax
// 00757d3c  51                   push ecx
// 00757d3d  8bcf                 mov ecx, edi
// 00757d3f  e87cfeffff           call 0x757bc0
// 00757d44  85c0                 test eax, eax
// 00757d46  741c                 je 0x757d64
// 00757d48  56                   push esi
// 00757d49  8d4f54               lea ecx, [edi + 0x54]
// 00757d4c  8d7020               lea esi, [eax + 0x20]
// 00757d4f  e84c570000           call 0x75d4a0
// 00757d54  8b10                 mov edx, dword ptr [eax]
// 00757d56  56                   push esi
// 00757d57  8bc8                 mov ecx, eax
// 00757d59  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00757d5f  6a02                 push 2
// 00757d61  ffd0                 call eax
// 00757d63  5e                   pop esi
// 00757d64  5f                   pop edi
// 00757d65  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnRButtonDown@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
