// roc 2011-06 008bd380  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd380
//
// 008bd380  56                   push esi
// 008bd381  8b742408             mov esi, dword ptr [esp + 8]
// 008bd385  8d4e54               lea ecx, [esi + 0x54]
// 008bd388  e8e3490000           call 0x8c1d70
// 008bd38d  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008bd393  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 008bd39a  7437                 je 0x8bd3d3
// 008bd39c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bd3a0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bd3a4  51                   push ecx
// 008bd3a5  52                   push edx
// 008bd3a6  8bce                 mov ecx, esi
// 008bd3a8  e803efffff           call 0x8bc2b0
// 008bd3ad  85c0                 test eax, eax
// 008bd3af  7422                 je 0x8bd3d3
// 008bd3b1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008bd3b7  85c9                 test ecx, ecx
// 008bd3b9  740e                 je 0x8bd3c9
// 008bd3bb  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008bd3c1  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 008bd3c7  740a                 je 0x8bd3d3
// 008bd3c9  6a00                 push 0
// 008bd3cb  50                   push eax
// 008bd3cc  8bce                 mov ecx, esi
// 008bd3ce  e8edfcffff           call 0x8bd0c0
// 008bd3d3  33c0                 xor eax, eax
// 008bd3d5  5e                   pop esi
// 008bd3d6  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
