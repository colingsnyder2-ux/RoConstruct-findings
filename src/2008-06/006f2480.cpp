// roc 2008-06 006f2480  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2480
//
// 006f2480  83ec20               sub esp, 0x20
// 006f2483  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 006f2488  53                   push ebx
// 006f2489  55                   push ebp
// 006f248a  56                   push esi
// 006f248b  57                   push edi
// 006f248c  8bf1                 mov esi, ecx
// 006f248e  0f85ce000000         jne 0x6f2562
// 006f2494  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006f2498  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006f249c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 006f24a0  53                   push ebx
// 006f24a1  8d442440             lea eax, [esp + 0x40]
// 006f24a5  50                   push eax
// 006f24a6  57                   push edi
// 006f24a7  55                   push ebp
// 006f24a8  897c2448             mov dword ptr [esp + 0x48], edi
// 006f24ac  e80ffdffff           call 0x6f21c0
// 006f24b1  53                   push ebx
// 006f24b2  8d4c2440             lea ecx, [esp + 0x40]
// 006f24b6  51                   push ecx
// 006f24b7  6a00                 push 0
// 006f24b9  55                   push ebp
// 006f24ba  8bce                 mov ecx, esi
// 006f24bc  89442444             mov dword ptr [esp + 0x44], eax
// 006f24c0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006f24c8  e8f3fcffff           call 0x6f21c0
// 006f24cd  3b442434             cmp eax, dword ptr [esp + 0x34]
// 006f24d1  7462                 je 0x6f2535
// 006f24d3  85ff                 test edi, edi
// 006f24d5  7e5e                 jle 0x6f2535
// 006f24d7  eb07                 jmp 0x6f24e0
// 006f24d9  8da42400000000       lea esp, [esp]
// 006f24e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 006f24e4  8b442438             mov eax, dword ptr [esp + 0x38]
// 006f24e8  03c2                 add eax, edx
// 006f24ea  99                   cdq 
// 006f24eb  2bc2                 sub eax, edx
// 006f24ed  53                   push ebx
// 006f24ee  8bf8                 mov edi, eax
// 006f24f0  8d4c2440             lea ecx, [esp + 0x40]
// 006f24f4  51                   push ecx
// 006f24f5  d1ff                 sar edi, 1
// 006f24f7  57                   push edi
// 006f24f8  55                   push ebp
// 006f24f9  8bce                 mov ecx, esi
// 006f24fb  e8c0fcffff           call 0x6f21c0
// 006f2500  3b442434             cmp eax, dword ptr [esp + 0x34]
// 006f2504  7506                 jne 0x6f250c
// 006f2506  897c2438             mov dword ptr [esp + 0x38], edi
// 006f250a  eb0a                 jmp 0x6f2516
// 006f250c  397c2440             cmp dword ptr [esp + 0x40], edi
// 006f2510  7410                 je 0x6f2522
// 006f2512  897c2440             mov dword ptr [esp + 0x40], edi
// 006f2516  8b542438             mov edx, dword ptr [esp + 0x38]
// 006f251a  39542440             cmp dword ptr [esp + 0x40], edx
// 006f251e  7cc0                 jl 0x6f24e0
// 006f2520  eb13                 jmp 0x6f2535
// 006f2522  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f2526  53                   push ebx
// 006f2527  8d442440             lea eax, [esp + 0x40]
// 006f252b  50                   push eax
// 006f252c  51                   push ecx
// 006f252d  55                   push ebp
// 006f252e  8bce                 mov ecx, esi
// 006f2530  e88bfcffff           call 0x6f21c0
// 006f2535  6a00                 push 0
// 006f2537  53                   push ebx
// 006f2538  55                   push ebp
// 006f2539  8d542424             lea edx, [esp + 0x24]
// 006f253d  52                   push edx
// 006f253e  8bce                 mov ecx, esi
// 006f2540  e8dbfaffff           call 0x6f2020
// 006f2545  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f2549  53                   push ebx
// 006f254a  8d442440             lea eax, [esp + 0x40]
// 006f254e  50                   push eax
// 006f254f  51                   push ecx
// 006f2550  55                   push ebp
// 006f2551  8bce                 mov ecx, esi
// 006f2553  e868fcffff           call 0x6f21c0
// 006f2558  5f                   pop edi
// 006f2559  5e                   pop esi
// 006f255a  5d                   pop ebp
// 006f255b  5b                   pop ebx
// 006f255c  83c420               add esp, 0x20
// 006f255f  c21000               ret 0x10
// 006f2562  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006f2566  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006f256a  57                   push edi
// 006f256b  8d542440             lea edx, [esp + 0x40]
// 006f256f  52                   push edx
// 006f2570  6a00                 push 0
// 006f2572  53                   push ebx
// 006f2573  e848fcffff           call 0x6f21c0
// 006f2578  6a00                 push 0
// 006f257a  57                   push edi
// 006f257b  53                   push ebx
// 006f257c  8d442424             lea eax, [esp + 0x24]
// 006f2580  50                   push eax
// 006f2581  8bce                 mov ecx, esi
// 006f2583  e898faffff           call 0x6f2020
// 006f2588  8b4804               mov ecx, dword ptr [eax + 4]
// 006f258b  8b28                 mov ebp, dword ptr [eax]
// 006f258d  57                   push edi
// 006f258e  8d542440             lea edx, [esp + 0x40]
// 006f2592  52                   push edx
// 006f2593  68ff7f0000           push 0x7fff
// 006f2598  894c2428             mov dword ptr [esp + 0x28], ecx
// 006f259c  53                   push ebx
// 006f259d  8bce                 mov ecx, esi
// 006f259f  e81cfcffff           call 0x6f21c0
// 006f25a4  6a00                 push 0
// 006f25a6  57                   push edi
// 006f25a7  53                   push ebx
// 006f25a8  8d44242c             lea eax, [esp + 0x2c]
// 006f25ac  50                   push eax
// 006f25ad  8bce                 mov ecx, esi
// 006f25af  e86cfaffff           call 0x6f2020
// 006f25b4  8b08                 mov ecx, dword ptr [eax]
// 006f25b6  3be9                 cmp ebp, ecx
// 006f25b8  8b5004               mov edx, dword ptr [eax + 4]
// 006f25bb  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f25bf  89542414             mov dword ptr [esp + 0x14], edx
// 006f25c3  7d7f                 jge 0x6f2644
// 006f25c5  57                   push edi
// 006f25c6  8d442440             lea eax, [esp + 0x40]
// 006f25ca  50                   push eax
// 006f25cb  8d0429               lea eax, [ecx + ebp]
// 006f25ce  99                   cdq 
// 006f25cf  2bc2                 sub eax, edx
// 006f25d1  d1f8                 sar eax, 1
// 006f25d3  50                   push eax
// 006f25d4  53                   push ebx
// 006f25d5  8bce                 mov ecx, esi
// 006f25d7  e8e4fbffff           call 0x6f21c0
// 006f25dc  6a00                 push 0
// 006f25de  57                   push edi
// 006f25df  53                   push ebx
// 006f25e0  8d4c242c             lea ecx, [esp + 0x2c]
// 006f25e4  51                   push ecx
// 006f25e5  8bce                 mov ecx, esi
// 006f25e7  e834faffff           call 0x6f2020
// 006f25ec  8b10                 mov edx, dword ptr [eax]
// 006f25ee  8b4804               mov ecx, dword ptr [eax + 4]
// 006f25f1  89542428             mov dword ptr [esp + 0x28], edx
// 006f25f5  8b542438             mov edx, dword ptr [esp + 0x38]
// 006f25f9  3bd1                 cmp edx, ecx
// 006f25fb  7d19                 jge 0x6f2616
// 006f25fd  8b08                 mov ecx, dword ptr [eax]
// 006f25ff  8b5004               mov edx, dword ptr [eax + 4]
// 006f2602  3be9                 cmp ebp, ecx
// 006f2604  7506                 jne 0x6f260c
// 006f2606  3954241c             cmp dword ptr [esp + 0x1c], edx
// 006f260a  7425                 je 0x6f2631
// 006f260c  8bc2                 mov eax, edx
// 006f260e  8be9                 mov ebp, ecx
// 006f2610  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f2614  eb0f                 jmp 0x6f2625
// 006f2616  7e2c                 jle 0x6f2644
// 006f2618  8b08                 mov ecx, dword ptr [eax]
// 006f261a  8b5004               mov edx, dword ptr [eax + 4]
// 006f261d  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f2621  89542414             mov dword ptr [esp + 0x14], edx
// 006f2625  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 006f2629  7d19                 jge 0x6f2644
// 006f262b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f262f  eb94                 jmp 0x6f25c5
// 006f2631  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f2635  57                   push edi
// 006f2636  8d442440             lea eax, [esp + 0x40]
// 006f263a  50                   push eax
// 006f263b  51                   push ecx
// 006f263c  53                   push ebx
// 006f263d  8bce                 mov ecx, esi
// 006f263f  e87cfbffff           call 0x6f21c0
// 006f2644  5f                   pop edi
// 006f2645  5e                   pop esi
// 006f2646  5d                   pop ebp
// 006f2647  5b                   pop ebx
// 006f2648  83c420               add esp, 0x20
// 006f264b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
