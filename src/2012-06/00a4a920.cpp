// roc 2012-06 00a4a920  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4a920
//
// 00a4a920  83ec10               sub esp, 0x10
// 00a4a923  53                   push ebx
// 00a4a924  56                   push esi
// 00a4a925  57                   push edi
// 00a4a926  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a4a92a  8bd9                 mov ebx, ecx
// 00a4a92c  8bcf                 mov ecx, edi
// 00a4a92e  e8ed83f4ff           call 0x992d20
// 00a4a933  85c0                 test eax, eax
// 00a4a935  0f85dd000000         jne 0xa4aa18
// 00a4a93b  8bcf                 mov ecx, edi
// 00a4a93d  e86e84f4ff           call 0x992db0
// 00a4a942  f6802801000001       test byte ptr [eax + 0x128], 1
// 00a4a949  7531                 jne 0xa4a97c
// 00a4a94b  837b2000             cmp dword ptr [ebx + 0x20], 0
// 00a4a94f  0f84c3000000         je 0xa4aa18
// 00a4a955  6a00                 push 0
// 00a4a957  8d442424             lea eax, [esp + 0x24]
// 00a4a95b  50                   push eax
// 00a4a95c  6a00                 push 0
// 00a4a95e  6824100000           push 0x1024
// 00a4a963  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00a4a96b  ff15543ab200         call dword ptr [0xb23a54]
// 00a4a971  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a4a976  0f849c000000         je 0xa4aa18
// 00a4a97c  57                   push edi
// 00a4a97d  8d4c2410             lea ecx, [esp + 0x10]
// 00a4a981  e8baa7f8ff           call 0x9d5140
// 00a4a986  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a4a98a  8b0e                 mov ecx, dword ptr [esi]
// 00a4a98c  8b5604               mov edx, dword ptr [esi + 4]
// 00a4a98f  6a00                 push 0
// 00a4a991  57                   push edi
// 00a4a992  83ec10               sub esp, 0x10
// 00a4a995  8bc4                 mov eax, esp
// 00a4a997  8908                 mov dword ptr [eax], ecx
// 00a4a999  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a4a99c  895004               mov dword ptr [eax + 4], edx
// 00a4a99f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a4a9a2  894808               mov dword ptr [eax + 8], ecx
// 00a4a9a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a4a9a9  89500c               mov dword ptr [eax + 0xc], edx
// 00a4a9ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a4a9b0  83ec10               sub esp, 0x10
// 00a4a9b3  8bc4                 mov eax, esp
// 00a4a9b5  8908                 mov dword ptr [eax], ecx
// 00a4a9b7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a4a9bb  895004               mov dword ptr [eax + 4], edx
// 00a4a9be  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a4a9c2  894808               mov dword ptr [eax + 8], ecx
// 00a4a9c5  6a01                 push 1
// 00a4a9c7  8bcb                 mov ecx, ebx
// 00a4a9c9  89500c               mov dword ptr [eax + 0xc], edx
// 00a4a9cc  e8bffdffff           call 0xa4a790
// 00a4a9d1  8b0e                 mov ecx, dword ptr [esi]
// 00a4a9d3  8b5604               mov edx, dword ptr [esi + 4]
// 00a4a9d6  6a00                 push 0
// 00a4a9d8  57                   push edi
// 00a4a9d9  83ec10               sub esp, 0x10
// 00a4a9dc  8bc4                 mov eax, esp
// 00a4a9de  8908                 mov dword ptr [eax], ecx
// 00a4a9e0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a4a9e3  895004               mov dword ptr [eax + 4], edx
// 00a4a9e6  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a4a9e9  894808               mov dword ptr [eax + 8], ecx
// 00a4a9ec  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a4a9f0  89500c               mov dword ptr [eax + 0xc], edx
// 00a4a9f3  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a4a9f7  83ec10               sub esp, 0x10
// 00a4a9fa  8bc4                 mov eax, esp
// 00a4a9fc  8908                 mov dword ptr [eax], ecx
// 00a4a9fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a4aa02  895004               mov dword ptr [eax + 4], edx
// 00a4aa05  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a4aa09  894808               mov dword ptr [eax + 8], ecx
// 00a4aa0c  6a00                 push 0
// 00a4aa0e  8bcb                 mov ecx, ebx
// 00a4aa10  89500c               mov dword ptr [eax + 0xc], edx
// 00a4aa13  e878fdffff           call 0xa4a790
// 00a4aa18  5f                   pop edi
// 00a4aa19  5e                   pop esi
// 00a4aa1a  5b                   pop ebx
// 00a4aa1b  83c410               add esp, 0x10
// 00a4aa1e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
