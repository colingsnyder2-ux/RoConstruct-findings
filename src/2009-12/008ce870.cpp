// roc 2009-12 008ce870  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce870
//
// 008ce870  56                   push esi
// 008ce871  8bf1                 mov esi, ecx
// 008ce873  8d4e28               lea ecx, [esi + 0x28]
// 008ce876  c7069ca6a000         mov dword ptr [esi], 0xa0a69c
// 008ce87c  ff1574de9800         call dword ptr [0x98de74]
// 008ce882  8b442408             mov eax, dword ptr [esp + 8]
// 008ce886  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ce88a  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ce88e  89460c               mov dword ptr [esi + 0xc], eax
// 008ce891  8d4610               lea eax, [esi + 0x10]
// 008ce894  50                   push eax
// 008ce895  894e04               mov dword ptr [esi + 4], ecx
// 008ce898  895608               mov dword ptr [esi + 8], edx
// 008ce89b  ff159cca9800         call dword ptr [0x98ca9c]
// 008ce8a1  33c0                 xor eax, eax
// 008ce8a3  894624               mov dword ptr [esi + 0x24], eax
// 008ce8a6  89462c               mov dword ptr [esi + 0x2c], eax
// 008ce8a9  c7462001000000       mov dword ptr [esi + 0x20], 1
// 008ce8b0  8bc6                 mov eax, esi
// 008ce8b2  5e                   pop esi
// 008ce8b3  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPTabManagerNavigateButton@@QAE@PAVCXTPTabManager@@IW4XTPTabNavigateButtonFlags@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp