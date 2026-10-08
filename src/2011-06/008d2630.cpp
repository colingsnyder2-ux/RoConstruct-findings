// roc 2011-06 008d2630  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2630
//
// 008d2630  83ec10               sub esp, 0x10
// 008d2633  53                   push ebx
// 008d2634  56                   push esi
// 008d2635  57                   push edi
// 008d2636  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d263a  8bd9                 mov ebx, ecx
// 008d263c  8bcf                 mov ecx, edi
// 008d263e  e87d84f4ff           call 0x81aac0
// 008d2643  85c0                 test eax, eax
// 008d2645  0f85dd000000         jne 0x8d2728
// 008d264b  8bcf                 mov ecx, edi
// 008d264d  e8fe84f4ff           call 0x81ab50
// 008d2652  f6802801000001       test byte ptr [eax + 0x128], 1
// 008d2659  7531                 jne 0x8d268c
// 008d265b  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008d265f  0f84c3000000         je 0x8d2728
// 008d2665  6a00                 push 0
// 008d2667  8d442424             lea eax, [esp + 0x24]
// 008d266b  50                   push eax
// 008d266c  6a00                 push 0
// 008d266e  6824100000           push 0x1024
// 008d2673  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008d267b  ff155c1ba400         call dword ptr [0xa41b5c]
// 008d2681  837c242000           cmp dword ptr [esp + 0x20], 0
// 008d2686  0f849c000000         je 0x8d2728
// 008d268c  57                   push edi
// 008d268d  8d4c2410             lea ecx, [esp + 0x10]
// 008d2691  e89aa6f8ff           call 0x85cd30
// 008d2696  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d269a  8b0e                 mov ecx, dword ptr [esi]
// 008d269c  8b5604               mov edx, dword ptr [esi + 4]
// 008d269f  6a00                 push 0
// 008d26a1  57                   push edi
// 008d26a2  83ec10               sub esp, 0x10
// 008d26a5  8bc4                 mov eax, esp
// 008d26a7  8908                 mov dword ptr [eax], ecx
// 008d26a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d26ac  895004               mov dword ptr [eax + 4], edx
// 008d26af  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d26b2  894808               mov dword ptr [eax + 8], ecx
// 008d26b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d26b9  89500c               mov dword ptr [eax + 0xc], edx
// 008d26bc  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d26c0  83ec10               sub esp, 0x10
// 008d26c3  8bc4                 mov eax, esp
// 008d26c5  8908                 mov dword ptr [eax], ecx
// 008d26c7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d26cb  895004               mov dword ptr [eax + 4], edx
// 008d26ce  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d26d2  894808               mov dword ptr [eax + 8], ecx
// 008d26d5  6a01                 push 1
// 008d26d7  8bcb                 mov ecx, ebx
// 008d26d9  89500c               mov dword ptr [eax + 0xc], edx
// 008d26dc  e8bffdffff           call 0x8d24a0
// 008d26e1  8b0e                 mov ecx, dword ptr [esi]
// 008d26e3  8b5604               mov edx, dword ptr [esi + 4]
// 008d26e6  6a00                 push 0
// 008d26e8  57                   push edi
// 008d26e9  83ec10               sub esp, 0x10
// 008d26ec  8bc4                 mov eax, esp
// 008d26ee  8908                 mov dword ptr [eax], ecx
// 008d26f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d26f3  895004               mov dword ptr [eax + 4], edx
// 008d26f6  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d26f9  894808               mov dword ptr [eax + 8], ecx
// 008d26fc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d2700  89500c               mov dword ptr [eax + 0xc], edx
// 008d2703  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d2707  83ec10               sub esp, 0x10
// 008d270a  8bc4                 mov eax, esp
// 008d270c  8908                 mov dword ptr [eax], ecx
// 008d270e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d2712  895004               mov dword ptr [eax + 4], edx
// 008d2715  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d2719  894808               mov dword ptr [eax + 8], ecx
// 008d271c  6a00                 push 0
// 008d271e  8bcb                 mov ecx, ebx
// 008d2720  89500c               mov dword ptr [eax + 0xc], edx
// 008d2723  e878fdffff           call 0x8d24a0
// 008d2728  5f                   pop edi
// 008d2729  5e                   pop esi
// 008d272a  5b                   pop ebx
// 008d272b  83c410               add esp, 0x10
// 008d272e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
