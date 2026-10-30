// roc 2012-06 00a35890  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a35890
//
// 00a35890  56                   push esi
// 00a35891  8b742408             mov esi, dword ptr [esp + 8]
// 00a35895  8d4e54               lea ecx, [esi + 0x54]
// 00a35898  e8e3480000           call 0xa3a180
// 00a3589d  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00a358a3  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 00a358aa  7437                 je 0xa358e3
// 00a358ac  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a358b0  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a358b4  51                   push ecx
// 00a358b5  52                   push edx
// 00a358b6  8bce                 mov ecx, esi
// 00a358b8  e8f3eeffff           call 0xa347b0
// 00a358bd  85c0                 test eax, eax
// 00a358bf  7422                 je 0xa358e3
// 00a358c1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00a358c7  85c9                 test ecx, ecx
// 00a358c9  740e                 je 0xa358d9
// 00a358cb  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00a358d1  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 00a358d7  740a                 je 0xa358e3
// 00a358d9  6a00                 push 0
// 00a358db  50                   push eax
// 00a358dc  8bce                 mov ecx, esi
// 00a358de  e8edfcffff           call 0xa355d0
// 00a358e3  33c0                 xor eax, eax
// 00a358e5  5e                   pop esi
// 00a358e6  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
