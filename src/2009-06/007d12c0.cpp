// roc 2009-06 007d12c0  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d12c0
//
// 007d12c0  56                   push esi
// 007d12c1  8b742408             mov esi, dword ptr [esp + 8]
// 007d12c5  8d4e54               lea ecx, [esi + 0x54]
// 007d12c8  e8434a0000           call 0x7d5d10
// 007d12cd  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 007d12d3  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 007d12da  7437                 je 0x7d1313
// 007d12dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d12e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007d12e4  51                   push ecx
// 007d12e5  52                   push edx
// 007d12e6  8bce                 mov ecx, esi
// 007d12e8  e8b3eeffff           call 0x7d01a0
// 007d12ed  85c0                 test eax, eax
// 007d12ef  7422                 je 0x7d1313
// 007d12f1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007d12f7  85c9                 test ecx, ecx
// 007d12f9  740e                 je 0x7d1309
// 007d12fb  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 007d1301  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 007d1307  740a                 je 0x7d1313
// 007d1309  6a00                 push 0
// 007d130b  50                   push eax
// 007d130c  8bce                 mov ecx, esi
// 007d130e  e8edfcffff           call 0x7d1000
// 007d1313  33c0                 xor eax, eax
// 007d1315  5e                   pop esi
// 007d1316  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
