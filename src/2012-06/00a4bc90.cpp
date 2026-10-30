// roc 2012-06 00a4bc90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4bc90
//
// 00a4bc90  56                   push esi
// 00a4bc91  8bf1                 mov esi, ecx
// 00a4bc93  8d4e28               lea ecx, [esi + 0x28]
// 00a4bc96  c706802fc200         mov dword ptr [esi], 0xc22f80
// 00a4bc9c  ff158447b200         call dword ptr [0xb24784]
// 00a4bca2  8b442408             mov eax, dword ptr [esp + 8]
// 00a4bca6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a4bcaa  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4bcae  89460c               mov dword ptr [esi + 0xc], eax
// 00a4bcb1  8d4610               lea eax, [esi + 0x10]
// 00a4bcb4  50                   push eax
// 00a4bcb5  894e04               mov dword ptr [esi + 4], ecx
// 00a4bcb8  895608               mov dword ptr [esi + 8], edx
// 00a4bcbb  ff15903ab200         call dword ptr [0xb23a90]
// 00a4bcc1  33c0                 xor eax, eax
// 00a4bcc3  894624               mov dword ptr [esi + 0x24], eax
// 00a4bcc6  89462c               mov dword ptr [esi + 0x2c], eax
// 00a4bcc9  c7462001000000       mov dword ptr [esi + 0x20], 1
// 00a4bcd0  8bc6                 mov eax, esi
// 00a4bcd2  5e                   pop esi
// 00a4bcd3  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabManager.cpp (function ??0CXTPTabManagerNavigateButton@@QAE@PAVCXTPTabManager@@IW4XTPTabNavigateButtonFlags@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabManager.cpp
