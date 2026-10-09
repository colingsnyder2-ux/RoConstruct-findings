// roc 2007-03 00680710  unit: seg_00680000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680710
//
// 00680710  33c0                 xor eax, eax
// 00680712  56                   push esi
// 00680713  8bf1                 mov esi, ecx
// 00680715  c706ece17c00         mov dword ptr [esi], 0x7ce1ec
// 0068071b  894608               mov dword ptr [esi + 8], eax
// 0068071e  b990377900           mov ecx, 0x793790
// 00680723  894e04               mov dword ptr [esi + 4], ecx
// 00680726  894e0c               mov dword ptr [esi + 0xc], ecx
// 00680729  894610               mov dword ptr [esi + 0x10], eax
// 0068072c  894e14               mov dword ptr [esi + 0x14], ecx
// 0068072f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00680733  6a7c                 push 0x7c
// 00680735  894618               mov dword ptr [esi + 0x18], eax
// 00680738  50                   push eax
// 00680739  8d96b4000000         lea edx, [esi + 0xb4]
// 0068073f  52                   push edx
// 00680740  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00680743  894620               mov dword ptr [esi + 0x20], eax
// 00680746  894624               mov dword ptr [esi + 0x24], eax
// 00680749  e8cee8f9ff           call 0x61f01c
// 0068074e  6a7c                 push 0x7c
// 00680750  8d4638               lea eax, [esi + 0x38]
// 00680753  6aff                 push -1
// 00680755  50                   push eax
// 00680756  e8c1e8f9ff           call 0x61f01c
// 0068075b  83c418               add esp, 0x18
// 0068075e  8bc6                 mov eax, esi
// 00680760  5e                   pop esi
// 00680761  c20400               ret 4
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ??0CXTPSkinManagerMetrics@@QAE@PAVCXTPSkinManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
