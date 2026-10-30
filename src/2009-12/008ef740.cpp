// roc 2009-12 008ef740  unit: CXTPRibbonTabPopupToolBar  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef740
//
// 008ef740  83ec10               sub esp, 0x10
// 008ef743  56                   push esi
// 008ef744  8bf1                 mov esi, ecx
// 008ef746  8b4614               mov eax, dword ptr [esi + 0x14]
// 008ef749  85c0                 test eax, eax
// 008ef74b  7437                 je 0x8ef784
// 008ef74d  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008ef750  894c2404             mov dword ptr [esp + 4], ecx
// 008ef754  8b5038               mov edx, dword ptr [eax + 0x38]
// 008ef757  89542408             mov dword ptr [esp + 8], edx
// 008ef75b  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008ef75e  894c240c             mov dword ptr [esp + 0xc], ecx
// 008ef762  8b5040               mov edx, dword ptr [eax + 0x40]
// 008ef765  8b4e08               mov ecx, dword ptr [esi + 8]
// 008ef768  89542410             mov dword ptr [esp + 0x10], edx
// 008ef76c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008ef773  8b01                 mov eax, dword ptr [ecx]
// 008ef775  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 008ef77b  6a01                 push 1
// 008ef77d  8d542408             lea edx, [esp + 8]
// 008ef781  52                   push edx
// 008ef782  ffd0                 call eax
// 008ef784  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ef788  894614               mov dword ptr [esi + 0x14], eax
// 008ef78b  85c0                 test eax, eax
// 008ef78d  7430                 je 0x8ef7bf
// 008ef78f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008ef792  894c2404             mov dword ptr [esp + 4], ecx
// 008ef796  8b5038               mov edx, dword ptr [eax + 0x38]
// 008ef799  89542408             mov dword ptr [esp + 8], edx
// 008ef79d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008ef7a0  894c240c             mov dword ptr [esp + 0xc], ecx
// 008ef7a4  8b5040               mov edx, dword ptr [eax + 0x40]
// 008ef7a7  8b4e08               mov ecx, dword ptr [esi + 8]
// 008ef7aa  89542410             mov dword ptr [esp + 0x10], edx
// 008ef7ae  8b01                 mov eax, dword ptr [ecx]
// 008ef7b0  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 008ef7b6  6a01                 push 1
// 008ef7b8  8d542408             lea edx, [esp + 8]
// 008ef7bc  52                   push edx
// 008ef7bd  ffd0                 call eax
// 008ef7bf  5e                   pop esi
// 008ef7c0  83c410               add esp, 0x10
// 008ef7c3  c20400               ret 4
// copied from an identical function in another client (function ?HighlightGroup@CXTPRibbonScrollableBar@@QAEXPAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp