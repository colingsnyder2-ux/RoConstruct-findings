// roc 2010-06 008601d0  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008601d0
//
// 008601d0  56                   push esi
// 008601d1  8b742408             mov esi, dword ptr [esp + 8]
// 008601d5  8d4e54               lea ecx, [esi + 0x54]
// 008601d8  e843470000           call 0x864920
// 008601dd  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008601e3  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 008601ea  7437                 je 0x860223
// 008601ec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008601f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008601f4  51                   push ecx
// 008601f5  52                   push edx
// 008601f6  8bce                 mov ecx, esi
// 008601f8  e8f3eeffff           call 0x85f0f0
// 008601fd  85c0                 test eax, eax
// 008601ff  7422                 je 0x860223
// 00860201  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00860207  85c9                 test ecx, ecx
// 00860209  740e                 je 0x860219
// 0086020b  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00860211  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 00860217  740a                 je 0x860223
// 00860219  6a00                 push 0
// 0086021b  50                   push eax
// 0086021c  8bce                 mov ecx, esi
// 0086021e  e8edfcffff           call 0x85ff10
// 00860223  33c0                 xor eax, eax
// 00860225  5e                   pop esi
// 00860226  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
