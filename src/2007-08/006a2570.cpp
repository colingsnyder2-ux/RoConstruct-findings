// roc 2007-08 006a2570  unit: CXTPDockBar  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2570
//
// 006a2570  83ec20               sub esp, 0x20
// 006a2573  894c2404             mov dword ptr [esp + 4], ecx
// 006a2577  e8965e0900           call 0x738412
// 006a257c  a900000010           test eax, 0x10000000
// 006a2581  890424               mov dword ptr [esp], eax
// 006a2584  0f8440010000         je 0x6a26ca
// 006a258a  53                   push ebx
// 006a258b  55                   push ebp
// 006a258c  56                   push esi
// 006a258d  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a2591  57                   push edi
// 006a2592  8d6e04               lea ebp, [esi + 4]
// 006a2595  55                   push ebp
// 006a2596  8d442424             lea eax, [esp + 0x24]
// 006a259a  50                   push eax
// 006a259b  ff15e0ed7700         call dword ptr [0x77ede0]
// 006a25a1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006a25a5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006a25a9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 006a25ad  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 006a25b1  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a25b5  8b4254               mov eax, dword ptr [edx + 0x54]
// 006a25b8  33c9                 xor ecx, ecx
// 006a25ba  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 006a25bd  0f95c1               setne cl
// 006a25c0  a804                 test al, 4
// 006a25c2  7409                 je 0x6a25cd
// 006a25c4  a801                 test al, 1
// 006a25c6  7405                 je 0x6a25cd
// 006a25c8  83c906               or ecx, 6
// 006a25cb  eb12                 jmp 0x6a25df
// 006a25cd  f744241000a00000     test dword ptr [esp + 0x10], 0xa000
// 006a25d5  7405                 je 0x6a25dc
// 006a25d7  83c90a               or ecx, 0xa
// 006a25da  eb03                 jmp 0x6a25df
// 006a25dc  83c910               or ecx, 0x10
// 006a25df  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a25e3  2500a00000           and eax, 0xa000
// 006a25e8  89442438             mov dword ptr [esp + 0x38], eax
// 006a25ec  8bc7                 mov eax, edi
// 006a25ee  7502                 jne 0x6a25f2
// 006a25f0  8bc3                 mov eax, ebx
// 006a25f2  56                   push esi
// 006a25f3  51                   push ecx
// 006a25f4  50                   push eax
// 006a25f5  8d4c2424             lea ecx, [esp + 0x24]
// 006a25f9  51                   push ecx
// 006a25fa  8bca                 mov ecx, edx
// 006a25fc  e8affdffff           call 0x6a23b0
// 006a2601  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a2605  3bc7                 cmp eax, edi
// 006a2607  7c02                 jl 0x6a260b
// 006a2609  8bc7                 mov eax, edi
// 006a260b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a260f  3bcb                 cmp ecx, ebx
// 006a2611  7c02                 jl 0x6a2615
// 006a2613  8bcb                 mov ecx, ebx
// 006a2615  837c243800           cmp dword ptr [esp + 0x38], 0
// 006a261a  7437                 je 0x6a2653
// 006a261c  8b5614               mov edx, dword ptr [esi + 0x14]
// 006a261f  014e18               add dword ptr [esi + 0x18], ecx
// 006a2622  3bd0                 cmp edx, eax
// 006a2624  7f02                 jg 0x6a2628
// 006a2626  8bd0                 mov edx, eax
// 006a2628  895614               mov dword ptr [esi + 0x14], edx
// 006a262b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a262f  f7c200200000         test edx, 0x2000
// 006a2635  7405                 je 0x6a263c
// 006a2637  014e08               add dword ptr [esi + 8], ecx
// 006a263a  eb4c                 jmp 0x6a2688
// 006a263c  f7c200800000         test edx, 0x8000
// 006a2642  7444                 je 0x6a2688
// 006a2644  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a2648  2bd1                 sub edx, ecx
// 006a264a  294e10               sub dword ptr [esi + 0x10], ecx
// 006a264d  89542424             mov dword ptr [esp + 0x24], edx
// 006a2651  eb35                 jmp 0x6a2688
// 006a2653  8b5618               mov edx, dword ptr [esi + 0x18]
// 006a2656  014614               add dword ptr [esi + 0x14], eax
// 006a2659  3bd1                 cmp edx, ecx
// 006a265b  7f02                 jg 0x6a265f
// 006a265d  8bd1                 mov edx, ecx
// 006a265f  895618               mov dword ptr [esi + 0x18], edx
// 006a2662  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a2666  f7c200100000         test edx, 0x1000
// 006a266c  7405                 je 0x6a2673
// 006a266e  014500               add dword ptr [ebp], eax
// 006a2671  eb15                 jmp 0x6a2688
// 006a2673  f7c200400000         test edx, 0x4000
// 006a2679  740d                 je 0x6a2688
// 006a267b  8b542428             mov edx, dword ptr [esp + 0x28]
// 006a267f  2bd0                 sub edx, eax
// 006a2681  29460c               sub dword ptr [esi + 0xc], eax
// 006a2684  89542420             mov dword ptr [esp + 0x20], edx
// 006a2688  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a268c  03d0                 add edx, eax
// 006a268e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a2692  03c1                 add eax, ecx
// 006a2694  833e00               cmp dword ptr [esi], 0
// 006a2697  89542428             mov dword ptr [esp + 0x28], edx
// 006a269b  8944242c             mov dword ptr [esp + 0x2c], eax
// 006a269f  7413                 je 0x6a26b4
// 006a26a1  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a26a5  8b4220               mov eax, dword ptr [edx + 0x20]
// 006a26a8  8d4c2420             lea ecx, [esp + 0x20]
// 006a26ac  51                   push ecx
// 006a26ad  50                   push eax
// 006a26ae  56                   push esi
// 006a26af  e8e85d0900           call 0x73849c
// 006a26b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a26b8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a26bb  6a00                 push 0
// 006a26bd  6a00                 push 0
// 006a26bf  52                   push edx
// 006a26c0  ff15dcec7700         call dword ptr [0x77ecdc]
// 006a26c6  5f                   pop edi
// 006a26c7  5e                   pop esi
// 006a26c8  5d                   pop ebp
// 006a26c9  5b                   pop ebx
// 006a26ca  33c0                 xor eax, eax
// 006a26cc  83c420               add esp, 0x20
// 006a26cf  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?OnSizeParent@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
