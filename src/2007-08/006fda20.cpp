// from server: 100% by tester
// roc 2008-06 0077b570  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b570
//
// 0077b570  56                   push esi
// 0077b571  8bf1                 mov esi, ecx
// 0077b573  8d4e28               lea ecx, [esi + 0x28]
// 0077b576  c70604928600         mov dword ptr [esi], 0x869204
// 0077b57c  ff15043f8000         call dword ptr [0x803f04]
// 0077b582  8b442408             mov eax, dword ptr [esp + 8]
// 0077b586  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077b58a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077b58e  89460c               mov dword ptr [esi + 0xc], eax
// 0077b591  8d4610               lea eax, [esi + 0x10]
// 0077b594  50                   push eax
// 0077b595  894e04               mov dword ptr [esi + 4], ecx
// 0077b598  895608               mov dword ptr [esi + 8], edx
// 0077b59b  ff157c2c8000         call dword ptr [0x802c7c]
// 0077b5a1  33c0                 xor eax, eax
// 0077b5a3  894624               mov dword ptr [esi + 0x24], eax
// 0077b5a6  89462c               mov dword ptr [esi + 0x2c], eax
// 0077b5a9  c7462001000000       mov dword ptr [esi + 0x20], 1
// 0077b5b0  8bc6                 mov eax, esi
// 0077b5b2  5e                   pop esi
// 0077b5b3  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabManager.cpp (function ??0CXTPTabManagerNavigateButton@@QAE@PAVCXTPTabManager@@IW4XTPTabNavigateButtonFlags@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp
