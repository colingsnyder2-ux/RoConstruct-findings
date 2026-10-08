// roc 2009-06 007e63e0  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e63e0
//
// 007e63e0  83ec10               sub esp, 0x10
// 007e63e3  53                   push ebx
// 007e63e4  56                   push esi
// 007e63e5  57                   push edi
// 007e63e6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e63ea  8bd9                 mov ebx, ecx
// 007e63ec  8bcf                 mov ecx, edi
// 007e63ee  e8cd6ff4ff           call 0x72d3c0
// 007e63f3  85c0                 test eax, eax
// 007e63f5  0f85dd000000         jne 0x7e64d8
// 007e63fb  8bcf                 mov ecx, edi
// 007e63fd  e84e70f4ff           call 0x72d450
// 007e6402  f6802801000001       test byte ptr [eax + 0x128], 1
// 007e6409  7531                 jne 0x7e643c
// 007e640b  837b2000             cmp dword ptr [ebx + 0x20], 0
// 007e640f  0f84c3000000         je 0x7e64d8
// 007e6415  6a00                 push 0
// 007e6417  8d442424             lea eax, [esp + 0x24]
// 007e641b  50                   push eax
// 007e641c  6a00                 push 0
// 007e641e  6824100000           push 0x1024
// 007e6423  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007e642b  ff1564ee8900         call dword ptr [0x89ee64]
// 007e6431  837c242000           cmp dword ptr [esp + 0x20], 0
// 007e6436  0f849c000000         je 0x7e64d8
// 007e643c  57                   push edi
// 007e643d  8d4c2410             lea ecx, [esp + 0x10]
// 007e6441  e82aa0f8ff           call 0x770470
// 007e6446  8b742424             mov esi, dword ptr [esp + 0x24]
// 007e644a  8b0e                 mov ecx, dword ptr [esi]
// 007e644c  8b5604               mov edx, dword ptr [esi + 4]
// 007e644f  6a00                 push 0
// 007e6451  57                   push edi
// 007e6452  83ec10               sub esp, 0x10
// 007e6455  8bc4                 mov eax, esp
// 007e6457  8908                 mov dword ptr [eax], ecx
// 007e6459  8b4e08               mov ecx, dword ptr [esi + 8]
// 007e645c  895004               mov dword ptr [eax + 4], edx
// 007e645f  8b560c               mov edx, dword ptr [esi + 0xc]
// 007e6462  894808               mov dword ptr [eax + 8], ecx
// 007e6465  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e6469  89500c               mov dword ptr [eax + 0xc], edx
// 007e646c  8b542428             mov edx, dword ptr [esp + 0x28]
// 007e6470  83ec10               sub esp, 0x10
// 007e6473  8bc4                 mov eax, esp
// 007e6475  8908                 mov dword ptr [eax], ecx
// 007e6477  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e647b  895004               mov dword ptr [eax + 4], edx
// 007e647e  8b542440             mov edx, dword ptr [esp + 0x40]
// 007e6482  894808               mov dword ptr [eax + 8], ecx
// 007e6485  6a01                 push 1
// 007e6487  8bcb                 mov ecx, ebx
// 007e6489  89500c               mov dword ptr [eax + 0xc], edx
// 007e648c  e8bffdffff           call 0x7e6250
// 007e6491  8b0e                 mov ecx, dword ptr [esi]
// 007e6493  8b5604               mov edx, dword ptr [esi + 4]
// 007e6496  6a00                 push 0
// 007e6498  57                   push edi
// 007e6499  83ec10               sub esp, 0x10
// 007e649c  8bc4                 mov eax, esp
// 007e649e  8908                 mov dword ptr [eax], ecx
// 007e64a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 007e64a3  895004               mov dword ptr [eax + 4], edx
// 007e64a6  8b560c               mov edx, dword ptr [esi + 0xc]
// 007e64a9  894808               mov dword ptr [eax + 8], ecx
// 007e64ac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e64b0  89500c               mov dword ptr [eax + 0xc], edx
// 007e64b3  8b542428             mov edx, dword ptr [esp + 0x28]
// 007e64b7  83ec10               sub esp, 0x10
// 007e64ba  8bc4                 mov eax, esp
// 007e64bc  8908                 mov dword ptr [eax], ecx
// 007e64be  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e64c2  895004               mov dword ptr [eax + 4], edx
// 007e64c5  8b542440             mov edx, dword ptr [esp + 0x40]
// 007e64c9  894808               mov dword ptr [eax + 8], ecx
// 007e64cc  6a00                 push 0
// 007e64ce  8bcb                 mov ecx, ebx
// 007e64d0  89500c               mov dword ptr [eax + 0xc], edx
// 007e64d3  e878fdffff           call 0x7e6250
// 007e64d8  5f                   pop edi
// 007e64d9  5e                   pop esi
// 007e64da  5b                   pop ebx
// 007e64db  83c410               add esp, 0x10
// 007e64de  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
