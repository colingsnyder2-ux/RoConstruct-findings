// roc 2008-06 00797270  unit: CXTPRibbonTabPopupToolBar  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797270
//
// 00797270  83ec10               sub esp, 0x10
// 00797273  56                   push esi
// 00797274  8bf1                 mov esi, ecx
// 00797276  8b4614               mov eax, dword ptr [esi + 0x14]
// 00797279  85c0                 test eax, eax
// 0079727b  7437                 je 0x7972b4
// 0079727d  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00797280  894c2404             mov dword ptr [esp + 4], ecx
// 00797284  8b5038               mov edx, dword ptr [eax + 0x38]
// 00797287  89542408             mov dword ptr [esp + 8], edx
// 0079728b  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0079728e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00797292  8b5040               mov edx, dword ptr [eax + 0x40]
// 00797295  8b4e08               mov ecx, dword ptr [esi + 8]
// 00797298  89542410             mov dword ptr [esp + 0x10], edx
// 0079729c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 007972a3  8b01                 mov eax, dword ptr [ecx]
// 007972a5  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 007972ab  6a01                 push 1
// 007972ad  8d542408             lea edx, [esp + 8]
// 007972b1  52                   push edx
// 007972b2  ffd0                 call eax
// 007972b4  8b442418             mov eax, dword ptr [esp + 0x18]
// 007972b8  894614               mov dword ptr [esi + 0x14], eax
// 007972bb  85c0                 test eax, eax
// 007972bd  7430                 je 0x7972ef
// 007972bf  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007972c2  894c2404             mov dword ptr [esp + 4], ecx
// 007972c6  8b5038               mov edx, dword ptr [eax + 0x38]
// 007972c9  89542408             mov dword ptr [esp + 8], edx
// 007972cd  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007972d0  894c240c             mov dword ptr [esp + 0xc], ecx
// 007972d4  8b5040               mov edx, dword ptr [eax + 0x40]
// 007972d7  8b4e08               mov ecx, dword ptr [esi + 8]
// 007972da  89542410             mov dword ptr [esp + 0x10], edx
// 007972de  8b01                 mov eax, dword ptr [ecx]
// 007972e0  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 007972e6  6a01                 push 1
// 007972e8  8d542408             lea edx, [esp + 8]
// 007972ec  52                   push edx
// 007972ed  ffd0                 call eax
// 007972ef  5e                   pop esi
// 007972f0  83c410               add esp, 0x10
// 007972f3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?HighlightGroup@CXTPRibbonScrollableBar@@QAEXPAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
