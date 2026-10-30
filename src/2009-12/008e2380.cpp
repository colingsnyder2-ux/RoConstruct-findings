// roc 2009-12 008e2380  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2380
//
// 008e2380  6aff                 push -1
// 008e2382  68f25d9600           push 0x965df2
// 008e2387  64a100000000         mov eax, dword ptr fs:[0]
// 008e238d  50                   push eax
// 008e238e  83ec14               sub esp, 0x14
// 008e2391  53                   push ebx
// 008e2392  55                   push ebp
// 008e2393  56                   push esi
// 008e2394  57                   push edi
// 008e2395  a10052b600           mov eax, dword ptr [0xb65200]
// 008e239a  33c4                 xor eax, esp
// 008e239c  50                   push eax
// 008e239d  8d442428             lea eax, [esp + 0x28]
// 008e23a1  64a300000000         mov dword ptr fs:[0], eax
// 008e23a7  8bf1                 mov esi, ecx
// 008e23a9  8d4c2414             lea ecx, [esp + 0x14]
// 008e23ad  e82eccf8ff           call 0x86efe0
// 008e23b2  8d8628010000         lea eax, [esi + 0x128]
// 008e23b8  50                   push eax
// 008e23b9  8d4c2418             lea ecx, [esp + 0x18]
// 008e23bd  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008e23c5  e8e6fbffff           call 0x8e1fb0
// 008e23ca  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 008e23d0  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 008e23d6  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 008e23dc  8d48ff               lea ecx, [eax - 1]
// 008e23df  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e23e3  3bc1                 cmp eax, ecx
// 008e23e5  0f85dd000000         jne 0x8e24c8
// 008e23eb  f6c304               test bl, 4
// 008e23ee  0f84d4000000         je 0x8e24c8
// 008e23f4  682c010000           push 0x12c
// 008e23f9  e86214f1ff           call 0x7f3860
// 008e23fe  8be8                 mov ebp, eax
// 008e2400  83c404               add esp, 4
// 008e2403  896c2438             mov dword ptr [esp + 0x38], ebp
// 008e2407  c644243001           mov byte ptr [esp + 0x30], 1
// 008e240c  85ed                 test ebp, ebp
// 008e240e  7420                 je 0x8e2430
// 008e2410  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e2413  52                   push edx
// 008e2414  ff15bccb9800         call dword ptr [0x98cbbc]
// 008e241a  50                   push eax
// 008e241b  e80a17f1ff           call 0x7f3b2a
// 008e2420  50                   push eax
// 008e2421  83e360               and ebx, 0x60
// 008e2424  53                   push ebx
// 008e2425  57                   push edi
// 008e2426  57                   push edi
// 008e2427  8bcd                 mov ecx, ebp
// 008e2429  e8b2ccf7ff           call 0x85f0e0
// 008e242e  eb02                 jmp 0x8e2432
// 008e2430  33c0                 xor eax, eax
// 008e2432  898658010000         mov dword ptr [esi + 0x158], eax
// 008e2438  8b10                 mov edx, dword ptr [eax]
// 008e243a  8bc8                 mov ecx, eax
// 008e243c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008e2442  c644243000           mov byte ptr [esp + 0x30], 0
// 008e2447  ffd0                 call eax
// 008e2449  83f801               cmp eax, 1
// 008e244c  7556                 jne 0x8e24a4
// 008e244e  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008e2454  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 008e245a  3bf8                 cmp edi, eax
// 008e245c  7507                 jne 0x8e2465
// 008e245e  bd29270000           mov ebp, 0x2729
// 008e2463  eb07                 jmp 0x8e246c
// 008e2465  bd2c270000           mov ebp, 0x272c
// 008e246a  8bf8                 mov edi, eax
// 008e246c  8b157cbfb900         mov edx, dword ptr [0xb9bf7c]
// 008e2472  3b566c               cmp edx, dword ptr [esi + 0x6c]
// 008e2475  7c0e                 jl 0x8e2485
// 008e2477  6a01                 push 1
// 008e2479  6a00                 push 0
// 008e247b  b974bfb900           mov ecx, 0xb9bf74
// 008e2480  e86b490400           call 0x926df0
// 008e2485  57                   push edi
// 008e2486  8bce                 mov ecx, esi
// 008e2488  e863faffff           call 0x8e1ef0
// 008e248d  85c0                 test eax, eax
// 008e248f  7518                 jne 0x8e24a9
// 008e2491  a17cbfb900           mov eax, dword ptr [0xb9bf7c]
// 008e2496  57                   push edi
// 008e2497  50                   push eax
// 008e2498  b974bfb900           mov ecx, 0xb9bf74
// 008e249d  e874410400           call 0x926616
// 008e24a2  eb05                 jmp 0x8e24a9
// 008e24a4  bd2d270000           mov ebp, 0x272d
// 008e24a9  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008e24af  85c9                 test ecx, ecx
// 008e24b1  746d                 je 0x8e2520
// 008e24b3  8b11                 mov edx, dword ptr [ecx]
// 008e24b5  8b4204               mov eax, dword ptr [edx + 4]
// 008e24b8  6a01                 push 1
// 008e24ba  ffd0                 call eax
// 008e24bc  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 008e24c6  eb58                 jmp 0x8e2520
// 008e24c8  85c0                 test eax, eax
// 008e24ca  7524                 jne 0x8e24f0
// 008e24cc  f6c301               test bl, 1
// 008e24cf  740a                 je 0x8e24db
// 008e24d1  bd2e270000           mov ebp, 0x272e
// 008e24d6  83cfff               or edi, 0xffffffff
// 008e24d9  eb45                 jmp 0x8e2520
// 008e24db  8bb6b4000000         mov esi, dword ptr [esi + 0xb4]
// 008e24e1  3bfe                 cmp edi, esi
// 008e24e3  7507                 jne 0x8e24ec
// 008e24e5  bd29270000           mov ebp, 0x2729
// 008e24ea  eb34                 jmp 0x8e2520
// 008e24ec  8bfe                 mov edi, esi
// 008e24ee  eb2b                 jmp 0x8e251b
// 008e24f0  83f8ff               cmp eax, -1
// 008e24f3  7507                 jne 0x8e24fc
// 008e24f5  bd2d270000           mov ebp, 0x272d
// 008e24fa  eb24                 jmp 0x8e2520
// 008e24fc  50                   push eax
// 008e24fd  8bce                 mov ecx, esi
// 008e24ff  e86cf5ffff           call 0x8e1a70
// 008e2504  85c0                 test eax, eax
// 008e2506  7454                 je 0x8e255c
// 008e2508  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 008e250e  3bf8                 cmp edi, eax
// 008e2510  7507                 jne 0x8e2519
// 008e2512  bd29270000           mov ebp, 0x2729
// 008e2517  eb07                 jmp 0x8e2520
// 008e2519  8bf8                 mov edi, eax
// 008e251b  bd2c270000           mov ebp, 0x272c
// 008e2520  33f6                 xor esi, esi
// 008e2522  3974241c             cmp dword ptr [esp + 0x1c], esi
// 008e2526  7e34                 jle 0x8e255c
// 008e2528  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008e252c  85f6                 test esi, esi
// 008e252e  7c53                 jl 0x8e2583
// 008e2530  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008e2534  7d4d                 jge 0x8e2583
// 008e2536  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 008e2539  51                   push ecx
// 008e253a  ff1584cc9800         call dword ptr [0x98cc84]
// 008e2540  85c0                 test eax, eax
// 008e2542  7411                 je 0x8e2555
// 008e2544  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008e2548  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 008e254b  52                   push edx
// 008e254c  57                   push edi
// 008e254d  55                   push ebp
// 008e254e  50                   push eax
// 008e254f  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008e2555  46                   inc esi
// 008e2556  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008e255a  7cd0                 jl 0x8e252c
// 008e255c  8d4c2414             lea ecx, [esp + 0x14]
// 008e2560  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008e2568  e893caf8ff           call 0x86f000
// 008e256d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e2571  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2578  59                   pop ecx
// 008e2579  5f                   pop edi
// 008e257a  5e                   pop esi
// 008e257b  5d                   pop ebp
// 008e257c  5b                   pop ebx
// 008e257d  83c420               add esp, 0x20
// 008e2580  c20800               ret 8
// 008e2583  e88415f1ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnEndSelection@CXTColorSelectorCtrl@@MAEXHJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp