// roc 2009-12 008c25a0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 488 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c25a0
//
// 008c25a0  6aff                 push -1
// 008c25a2  6820409600           push 0x964020
// 008c25a7  64a100000000         mov eax, dword ptr fs:[0]
// 008c25ad  50                   push eax
// 008c25ae  83ec3c               sub esp, 0x3c
// 008c25b1  53                   push ebx
// 008c25b2  55                   push ebp
// 008c25b3  56                   push esi
// 008c25b4  57                   push edi
// 008c25b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008c25ba  33c4                 xor eax, esp
// 008c25bc  50                   push eax
// 008c25bd  8d442450             lea eax, [esp + 0x50]
// 008c25c1  64a300000000         mov dword ptr fs:[0], eax
// 008c25c7  8bf1                 mov esi, ecx
// 008c25c9  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008c25cd  8bcf                 mov ecx, edi
// 008c25cf  e8cc82f4ff           call 0x80a8a0
// 008c25d4  85c0                 test eax, eax
// 008c25d6  0f8596010000         jne 0x8c2772
// 008c25dc  8d442414             lea eax, [esp + 0x14]
// 008c25e0  50                   push eax
// 008c25e1  8bcf                 mov ecx, edi
// 008c25e3  e8286bf4ff           call 0x809110
// 008c25e8  8b08                 mov ecx, dword ptr [eax]
// 008c25ea  898e600a0000         mov dword ptr [esi + 0xa60], ecx
// 008c25f0  8b5004               mov edx, dword ptr [eax + 4]
// 008c25f3  8d4c242c             lea ecx, [esp + 0x2c]
// 008c25f7  8996640a0000         mov dword ptr [esi + 0xa64], edx
// 008c25fd  e82e82f4ff           call 0x80a830
// 008c2602  33db                 xor ebx, ebx
// 008c2604  57                   push edi
// 008c2605  8d4c2430             lea ecx, [esp + 0x30]
// 008c2609  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008c260d  e8aeb5f4ff           call 0x80dbc0
// 008c2612  8d4c242c             lea ecx, [esp + 0x2c]
// 008c2616  e8d56af4ff           call 0x8090f0
// 008c261b  85c0                 test eax, eax
// 008c261d  7471                 je 0x8c2690
// 008c261f  8d4c242c             lea ecx, [esp + 0x2c]
// 008c2623  e818aaf4ff           call 0x80d040
// 008c2628  6a0c                 push 0xc
// 008c262a  e83112f3ff           call 0x7f3860
// 008c262f  83c404               add esp, 4
// 008c2632  3bc3                 cmp eax, ebx
// 008c2634  7414                 je 0x8c264a
// 008c2636  895804               mov dword ptr [eax + 4], ebx
// 008c2639  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c263f  c7400801000000       mov dword ptr [eax + 8], 1
// 008c2646  8bf8                 mov edi, eax
// 008c2648  eb02                 jmp 0x8c264c
// 008c264a  33ff                 xor edi, edi
// 008c264c  8d442460             lea eax, [esp + 0x60]
// 008c2650  50                   push eax
// 008c2651  8d4c2430             lea ecx, [esp + 0x30]
// 008c2655  e876f7b7ff           call 0x441dd0
// 008c265a  50                   push eax
// 008c265b  e8c083f4ff           call 0x80aa20
// 008c2660  83c408               add esp, 8
// 008c2663  50                   push eax
// 008c2664  8bcf                 mov ecx, edi
// 008c2666  e8bf17f3ff           call 0x7f3e2a
// 008c266b  8b8e640a0000         mov ecx, dword ptr [esi + 0xa64]
// 008c2671  0faf8e600a0000       imul ecx, dword ptr [esi + 0xa60]
// 008c2678  8b542460             mov edx, dword ptr [esp + 0x60]
// 008c267c  51                   push ecx
// 008c267d  52                   push edx
// 008c267e  8bce                 mov ecx, esi
// 008c2680  e89bebffff           call 0x8c1220
// 008c2685  89be98090000         mov dword ptr [esi + 0x998], edi
// 008c268b  e9d1000000           jmp 0x8c2761
// 008c2690  6a0c                 push 0xc
// 008c2692  e8c911f3ff           call 0x7f3860
// 008c2697  83c404               add esp, 4
// 008c269a  3bc3                 cmp eax, ebx
// 008c269c  7410                 je 0x8c26ae
// 008c269e  895804               mov dword ptr [eax + 4], ebx
// 008c26a1  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c26a7  895808               mov dword ptr [eax + 8], ebx
// 008c26aa  8be8                 mov ebp, eax
// 008c26ac  eb02                 jmp 0x8c26b0
// 008c26ae  33ed                 xor ebp, ebp
// 008c26b0  8d4c241c             lea ecx, [esp + 0x1c]
// 008c26b4  e8f53d0600           call 0x9264ae
// 008c26b9  53                   push ebx
// 008c26ba  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008c26bf  ff1554b19800         call dword ptr [0x98b154]
// 008c26c5  50                   push eax
// 008c26c6  8d4c2420             lea ecx, [esp + 0x20]
// 008c26ca  e8cd3d0600           call 0x92649c
// 008c26cf  8b86640a0000         mov eax, dword ptr [esi + 0xa64]
// 008c26d5  8b8e600a0000         mov ecx, dword ptr [esi + 0xa60]
// 008c26db  50                   push eax
// 008c26dc  51                   push ecx
// 008c26dd  8bcd                 mov ecx, ebp
// 008c26df  e81ceaffff           call 0x8c1100
// 008c26e4  3beb                 cmp ebp, ebx
// 008c26e6  7504                 jne 0x8c26ec
// 008c26e8  33c0                 xor eax, eax
// 008c26ea  eb03                 jmp 0x8c26ef
// 008c26ec  8b4504               mov eax, dword ptr [ebp + 4]
// 008c26ef  8b542420             mov edx, dword ptr [esp + 0x20]
// 008c26f3  50                   push eax
// 008c26f4  52                   push edx
// 008c26f5  e8fe3e0600           call 0x9265f8
// 008c26fa  8b8e600a0000         mov ecx, dword ptr [esi + 0xa60]
// 008c2700  68fffeff00           push 0xfffeff
// 008c2705  8bf8                 mov edi, eax
// 008c2707  8b86640a0000         mov eax, dword ptr [esi + 0xa64]
// 008c270d  50                   push eax
// 008c270e  51                   push ecx
// 008c270f  53                   push ebx
// 008c2710  53                   push ebx
// 008c2711  8d4c2430             lea ecx, [esp + 0x30]
// 008c2715  e87c3d0600           call 0x926496
// 008c271a  8d4c242c             lea ecx, [esp + 0x2c]
// 008c271e  e84dcfc6ff           call 0x52f670
// 008c2723  8b542420             mov edx, dword ptr [esp + 0x20]
// 008c2727  6a03                 push 3
// 008c2729  53                   push ebx
// 008c272a  53                   push ebx
// 008c272b  53                   push ebx
// 008c272c  53                   push ebx
// 008c272d  53                   push ebx
// 008c272e  50                   push eax
// 008c272f  53                   push ebx
// 008c2730  53                   push ebx
// 008c2731  52                   push edx
// 008c2732  ff15f8ca9800         call dword ptr [0x98caf8]
// 008c2738  3bfb                 cmp edi, ebx
// 008c273a  7504                 jne 0x8c2740
// 008c273c  33ff                 xor edi, edi
// 008c273e  eb03                 jmp 0x8c2743
// 008c2740  8b7f04               mov edi, dword ptr [edi + 4]
// 008c2743  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c2747  57                   push edi
// 008c2748  50                   push eax
// 008c2749  e8aa3e0600           call 0x9265f8
// 008c274e  8d4c241c             lea ecx, [esp + 0x1c]
// 008c2752  89ae98090000         mov dword ptr [esi + 0x998], ebp
// 008c2758  885c2458             mov byte ptr [esp + 0x58], bl
// 008c275c  e8473d0600           call 0x9264a8
// 008c2761  8d4c242c             lea ecx, [esp + 0x2c]
// 008c2765  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008c276d  e86ea6f4ff           call 0x80cde0
// 008c2772  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008c2776  64890d00000000       mov dword ptr fs:[0], ecx
// 008c277d  59                   pop ecx
// 008c277e  5f                   pop edi
// 008c277f  5e                   pop esi
// 008c2780  5d                   pop ebp
// 008c2781  5b                   pop ebx
// 008c2782  83c448               add esp, 0x48
// 008c2785  c20400               ret 4
// copied from an identical function in another client (function ?SetIcon@CXTPImageEditorDlg@@QAEXAAVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp