// roc 2009-12 008f2580  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2580
//
// 008f2580  6aff                 push -1
// 008f2582  68056b9600           push 0x966b05
// 008f2587  64a100000000         mov eax, dword ptr fs:[0]
// 008f258d  50                   push eax
// 008f258e  83ec3c               sub esp, 0x3c
// 008f2591  53                   push ebx
// 008f2592  55                   push ebp
// 008f2593  56                   push esi
// 008f2594  57                   push edi
// 008f2595  a10052b600           mov eax, dword ptr [0xb65200]
// 008f259a  33c4                 xor eax, esp
// 008f259c  50                   push eax
// 008f259d  8d442450             lea eax, [esp + 0x50]
// 008f25a1  64a300000000         mov dword ptr fs:[0], eax
// 008f25a7  8bf1                 mov esi, ecx
// 008f25a9  e89239f0ff           call 0x7f5f40
// 008f25ae  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008f25b2  8bf8                 mov edi, eax
// 008f25b4  8d87f8000000         lea eax, [edi + 0xf8]
// 008f25ba  50                   push eax
// 008f25bb  55                   push ebp
// 008f25bc  8d4c2448             lea ecx, [esp + 0x48]
// 008f25c0  e89b90f5ff           call 0x84b660
// 008f25c5  8b17                 mov edx, dword ptr [edi]
// 008f25c7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008f25ca  56                   push esi
// 008f25cb  8bcf                 mov ecx, edi
// 008f25cd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008f25d5  ffd0                 call eax
// 008f25d7  8b5500               mov edx, dword ptr [ebp]
// 008f25da  50                   push eax
// 008f25db  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f25de  8bcd                 mov ecx, ebp
// 008f25e0  ffd0                 call eax
// 008f25e2  6a01                 push 1
// 008f25e4  8bcd                 mov ecx, ebp
// 008f25e6  e8a53e0300           call 0x926490
// 008f25eb  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008f25f1  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008f25f7  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 008f25fd  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008f2603  8954243c             mov dword ptr [esp + 0x3c], edx
// 008f2607  83c2fb               add edx, -5
// 008f260a  89542460             mov dword ptr [esp + 0x60], edx
// 008f260e  83c004               add eax, 4
// 008f2611  89442424             mov dword ptr [esp + 0x24], eax
// 008f2615  8b442460             mov eax, dword ptr [esp + 0x60]
// 008f2619  8d5307               lea edx, [ebx + 7]
// 008f261c  89542420             mov dword ptr [esp + 0x20], edx
// 008f2620  8b16                 mov edx, dword ptr [esi]
// 008f2622  8b5258               mov edx, dword ptr [edx + 0x58]
// 008f2625  8944242c             mov dword ptr [esp + 0x2c], eax
// 008f2629  8d442418             lea eax, [esp + 0x18]
// 008f262d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008f2631  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f2635  50                   push eax
// 008f2636  8bce                 mov ecx, esi
// 008f2638  ffd2                 call edx
// 008f263a  8bf0                 mov esi, eax
// 008f263c  8b4500               mov eax, dword ptr [ebp]
// 008f263f  6a20                 push 0x20
// 008f2641  8d4c2424             lea ecx, [esp + 0x24]
// 008f2645  51                   push ecx
// 008f2646  8bce                 mov ecx, esi
// 008f2648  c644246001           mov byte ptr [esp + 0x60], 1
// 008f264d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f2651  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008f2657  50                   push eax
// 008f2658  8bce                 mov ecx, esi
// 008f265a  ff1580de9800         call dword ptr [0x98de80]
// 008f2660  8b542420             mov edx, dword ptr [esp + 0x20]
// 008f2664  50                   push eax
// 008f2665  8b4270               mov eax, dword ptr [edx + 0x70]
// 008f2668  8bcd                 mov ecx, ebp
// 008f266a  ffd0                 call eax
// 008f266c  8d4c2418             lea ecx, [esp + 0x18]
// 008f2670  c644245800           mov byte ptr [esp + 0x58], 0
// 008f2675  ff15c0de9800         call dword ptr [0x98dec0]
// 008f267b  51                   push ecx
// 008f267c  8bcc                 mov ecx, esp
// 008f267e  89642418             mov dword ptr [esp + 0x18], esp
// 008f2682  6850f8a000           push 0xa0f850
// 008f2687  ff15b8de9800         call dword ptr [0x98deb8]
// 008f268d  51                   push ecx
// 008f268e  8bcc                 mov ecx, esp
// 008f2690  89642424             mov dword ptr [esp + 0x24], esp
// 008f2694  68000fa000           push 0xa00f00
// 008f2699  c644246402           mov byte ptr [esp + 0x64], 2
// 008f269e  ff15b8de9800         call dword ptr [0x98deb8]
// 008f26a4  8bcf                 mov ecx, edi
// 008f26a6  c644246003           mov byte ptr [esp + 0x60], 3
// 008f26ab  e840c6f8ff           call 0x87ecf0
// 008f26b0  8bc8                 mov ecx, eax
// 008f26b2  c644246000           mov byte ptr [esp + 0x60], 0
// 008f26b7  e844eafeff           call 0x8e1100
// 008f26bc  8b742438             mov esi, dword ptr [esp + 0x38]
// 008f26c0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f26c4  50                   push eax
// 008f26c5  56                   push esi
// 008f26c6  83c1fa               add ecx, -6
// 008f26c9  51                   push ecx
// 008f26ca  53                   push ebx
// 008f26cb  55                   push ebp
// 008f26cc  8bcf                 mov ecx, edi
// 008f26ce  e89db1f0ff           call 0x7fd870
// 008f26d3  51                   push ecx
// 008f26d4  8bcc                 mov ecx, esp
// 008f26d6  89642420             mov dword ptr [esp + 0x20], esp
// 008f26da  6834f8a000           push 0xa0f834
// 008f26df  ff15b8de9800         call dword ptr [0x98deb8]
// 008f26e5  51                   push ecx
// 008f26e6  8bcc                 mov ecx, esp
// 008f26e8  8964241c             mov dword ptr [esp + 0x1c], esp
// 008f26ec  68000fa000           push 0xa00f00
// 008f26f1  c644246404           mov byte ptr [esp + 0x64], 4
// 008f26f6  ff15b8de9800         call dword ptr [0x98deb8]
// 008f26fc  8bcf                 mov ecx, edi
// 008f26fe  c644246005           mov byte ptr [esp + 0x60], 5
// 008f2703  e8e8c5f8ff           call 0x87ecf0
// 008f2708  8bc8                 mov ecx, eax
// 008f270a  c644246000           mov byte ptr [esp + 0x60], 0
// 008f270f  e8ece9feff           call 0x8e1100
// 008f2714  8b542460             mov edx, dword ptr [esp + 0x60]
// 008f2718  50                   push eax
// 008f2719  56                   push esi
// 008f271a  52                   push edx
// 008f271b  53                   push ebx
// 008f271c  55                   push ebp
// 008f271d  8bcf                 mov ecx, edi
// 008f271f  e84cb1f0ff           call 0x7fd870
// 008f2724  8d4c2440             lea ecx, [esp + 0x40]
// 008f2728  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008f2730  e8ab8ff5ff           call 0x84b6e0
// 008f2735  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008f2739  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2740  59                   pop ecx
// 008f2741  5f                   pop edi
// 008f2742  5e                   pop esi
// 008f2743  5d                   pop ebp
// 008f2744  5b                   pop ebx
// 008f2745  83c448               add esp, 0x48
// 008f2748  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp