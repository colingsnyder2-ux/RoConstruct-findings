// roc 2009-12 008ac0b0  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac0b0
//
// 008ac0b0  56                   push esi
// 008ac0b1  8b742408             mov esi, dword ptr [esp + 8]
// 008ac0b5  8d4e54               lea ecx, [esi + 0x54]
// 008ac0b8  e893470000           call 0x8b0850
// 008ac0bd  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008ac0c3  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 008ac0ca  7437                 je 0x8ac103
// 008ac0cc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ac0d0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ac0d4  51                   push ecx
// 008ac0d5  52                   push edx
// 008ac0d6  8bce                 mov ecx, esi
// 008ac0d8  e8e3eeffff           call 0x8aafc0
// 008ac0dd  85c0                 test eax, eax
// 008ac0df  7422                 je 0x8ac103
// 008ac0e1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008ac0e7  85c9                 test ecx, ecx
// 008ac0e9  740e                 je 0x8ac0f9
// 008ac0eb  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008ac0f1  3981a4010000         cmp dword ptr [ecx + 0x1a4], eax
// 008ac0f7  740a                 je 0x8ac103
// 008ac0f9  6a00                 push 0
// 008ac0fb  50                   push eax
// 008ac0fc  8bce                 mov ecx, esi
// 008ac0fe  e8edfcffff           call 0x8abdf0
// 008ac103  33c0                 xor eax, eax
// 008ac105  5e                   pop esi
// 008ac106  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDragOver@CPanelDropTarget@CXTPDockingPaneAutoHidePanel@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
