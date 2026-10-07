// roc 2008-06 00758ce0  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758ce0
//
// 00758ce0  56                   push esi
// 00758ce1  8b742408             mov esi, dword ptr [esp + 8]
// 00758ce5  8d4e54               lea ecx, [esi + 0x54]
// 00758ce8  e8c3470000           call 0x75d4b0
// 00758ced  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00758cf3  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 00758cfa  7437                 je 0x758d33
// 00758cfc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00758d00  8b542414             mov edx, dword ptr [esp + 0x14]
// 00758d04  51                   push ecx
// 00758d05  52                   push edx
// 00758d06  8bce                 mov ecx, esi
// 00758d08  e8b3eeffff           call 0x757bc0
// 00758d0d  85c0                 test eax, eax
// 00758d0f  7422                 je 0x758d33
// 00758d11  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00758d17  85c9                 test ecx, ecx
// 00758d19  740e                 je 0x758d29
// 00758d1b  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00758d21  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 00758d27  740a                 je 0x758d33
// 00758d29  6a00                 push 0
// 00758d2b  50                   push eax
// 00758d2c  8bce                 mov ecx, esi
// 00758d2e  e8edfcffff           call 0x758a20
// 00758d33  33c0                 xor eax, eax
// 00758d35  5e                   pop esi
// 00758d36  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
