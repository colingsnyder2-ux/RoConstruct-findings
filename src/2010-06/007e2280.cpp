// roc 2010-06 007e2280  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e2280
//
// 007e2280  6aff                 push -1
// 007e2282  68e31a9b00           push 0x9b1ae3
// 007e2287  64a100000000         mov eax, dword ptr fs:[0]
// 007e228d  50                   push eax
// 007e228e  83ec3c               sub esp, 0x3c
// 007e2291  53                   push ebx
// 007e2292  55                   push ebp
// 007e2293  56                   push esi
// 007e2294  57                   push edi
// 007e2295  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e229a  33c4                 xor eax, esp
// 007e229c  50                   push eax
// 007e229d  8d442450             lea eax, [esp + 0x50]
// 007e22a1  64a300000000         mov dword ptr fs:[0], eax
// 007e22a7  8be9                 mov ebp, ecx
// 007e22a9  896c2420             mov dword ptr [esp + 0x20], ebp
// 007e22ad  8b442464             mov eax, dword ptr [esp + 0x64]
// 007e22b1  33db                 xor ebx, ebx
// 007e22b3  895c2414             mov dword ptr [esp + 0x14], ebx
// 007e22b7  33ff                 xor edi, edi
// 007e22b9  8918                 mov dword ptr [eax], ebx
// 007e22bb  395d28               cmp dword ptr [ebp + 0x28], ebx
// 007e22be  895c2418             mov dword ptr [esp + 0x18], ebx
// 007e22c2  897c241c             mov dword ptr [esp + 0x1c], edi
// 007e22c6  0f8e91010000         jle 0x7e245d
// 007e22cc  8d642400             lea esp, [esp]
// 007e22d0  3bfb                 cmp edi, ebx
// 007e22d2  0f8c75020000         jl 0x7e254d
// 007e22d8  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 007e22db  0f8d6c020000         jge 0x7e254d
// 007e22e1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 007e22e4  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 007e22e7  8b16                 mov edx, dword ptr [esi]
// 007e22e9  8d04b9               lea eax, [ecx + edi*4]
// 007e22ec  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 007e22f2  8bce                 mov ecx, esi
// 007e22f4  8974242c             mov dword ptr [esp + 0x2c], esi
// 007e22f8  ffd0                 call eax
// 007e22fa  85c0                 test eax, eax
// 007e22fc  0f84a1010000         je 0x7e24a3
// 007e2302  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 007e2306  8b5500               mov edx, dword ptr [ebp]
// 007e2309  8b4260               mov eax, dword ptr [edx + 0x60]
// 007e230c  8bcd                 mov ecx, ebp
// 007e230e  ffd0                 call eax
// 007e2310  8bf8                 mov edi, eax
// 007e2312  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007e2315  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 007e231b  3bfb                 cmp edi, ebx
// 007e231d  0f8424010000         je 0x7e2447
// 007e2323  3bc3                 cmp eax, ebx
// 007e2325  0f841c010000         je 0x7e2447
// 007e232b  8b16                 mov edx, dword ptr [esi]
// 007e232d  8b6820               mov ebp, dword ptr [eax + 0x20]
// 007e2330  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 007e2336  8bce                 mov ecx, esi
// 007e2338  ffd0                 call eax
// 007e233a  50                   push eax
// 007e233b  8bcd                 mov ecx, ebp
// 007e233d  e8fedf0300           call 0x820340
// 007e2342  8be8                 mov ebp, eax
// 007e2344  55                   push ebp
// 007e2345  8bcf                 mov ecx, edi
// 007e2347  e864caffff           call 0x7dedb0
// 007e234c  3bc3                 cmp eax, ebx
// 007e234e  7422                 je 0x7e2372
// 007e2350  8b10                 mov edx, dword ptr [eax]
// 007e2352  8b5274               mov edx, dword ptr [edx + 0x74]
// 007e2355  55                   push ebp
// 007e2356  8d4c2428             lea ecx, [esp + 0x28]
// 007e235a  51                   push ecx
// 007e235b  8bc8                 mov ecx, eax
// 007e235d  ffd2                 call edx
// 007e235f  834c241401           or dword ptr [esp + 0x14], 1
// 007e2364  8bc8                 mov ecx, eax
// 007e2366  895c2458             mov dword ptr [esp + 0x58], ebx
// 007e236a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e2370  eb05                 jmp 0x7e2377
// 007e2372  b8fe08a000           mov eax, 0xa008fe
// 007e2377  33c9                 xor ecx, ecx
// 007e2379  66894c2440           mov word ptr [esp + 0x40], cx
// 007e237e  50                   push eax
// 007e237f  8d4c2444             lea ecx, [esp + 0x44]
// 007e2383  e848ac1900           call 0x97cfd0
// 007e2388  f644241401           test byte ptr [esp + 0x14], 1
// 007e238d  c744245802000000     mov dword ptr [esp + 0x58], 2
// 007e2395  740f                 je 0x7e23a6
// 007e2397  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 007e239c  8d4c2424             lea ecx, [esp + 0x24]
// 007e23a0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e23a6  8b16                 mov edx, dword ptr [esi]
// 007e23a8  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 007e23ae  8d442428             lea eax, [esp + 0x28]
// 007e23b2  50                   push eax
// 007e23b3  8bce                 mov ecx, esi
// 007e23b5  ffd2                 call edx
// 007e23b7  8bc8                 mov ecx, eax
// 007e23b9  c644245803           mov byte ptr [esp + 0x58], 3
// 007e23be  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e23c4  33c9                 xor ecx, ecx
// 007e23c6  66894c2430           mov word ptr [esp + 0x30], cx
// 007e23cb  50                   push eax
// 007e23cc  8d4c2434             lea ecx, [esp + 0x34]
// 007e23d0  e8fbab1900           call 0x97cfd0
// 007e23d5  8d4c2428             lea ecx, [esp + 0x28]
// 007e23d9  c644245805           mov byte ptr [esp + 0x58], 5
// 007e23de  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e23e4  8b4750               mov eax, dword ptr [edi + 0x50]
// 007e23e7  8b4040               mov eax, dword ptr [eax + 0x40]
// 007e23ea  33d2                 xor edx, edx
// 007e23ec  3bc3                 cmp eax, ebx
// 007e23ee  a18472be00           mov eax, dword ptr [0xbe7284]
// 007e23f3  0f94c2               sete dl
// 007e23f6  8bfa                 mov edi, edx
// 007e23f8  3d00040000           cmp eax, 0x400
// 007e23fd  7505                 jne 0x7e2404
// 007e23ff  e83cdffeff           call 0x7d0340
// 007e2404  57                   push edi
// 007e2405  50                   push eax
// 007e2406  8d442438             lea eax, [esp + 0x38]
// 007e240a  50                   push eax
// 007e240b  8d4c244c             lea ecx, [esp + 0x4c]
// 007e240f  51                   push ecx
// 007e2410  e8ffb31900           call 0x97d814
// 007e2415  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 007e2418  8bf8                 mov edi, eax
// 007e241a  4f                   dec edi
// 007e241b  3beb                 cmp ebp, ebx
// 007e241d  7408                 je 0x7e2427
// 007e241f  3bfb                 cmp edi, ebx
// 007e2421  7f08                 jg 0x7e242b
// 007e2423  3beb                 cmp ebp, ebx
// 007e2425  7550                 jne 0x7e2477
// 007e2427  3bfb                 cmp edi, ebx
// 007e2429  7d4c                 jge 0x7e2477
// 007e242b  8b3564aa9e00         mov esi, dword ptr [0x9eaa64]
// 007e2431  8d542430             lea edx, [esp + 0x30]
// 007e2435  52                   push edx
// 007e2436  ffd6                 call esi
// 007e2438  8d442440             lea eax, [esp + 0x40]
// 007e243c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007e2444  50                   push eax
// 007e2445  ffd6                 call esi
// 007e2447  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007e244b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007e244f  47                   inc edi
// 007e2450  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 007e2453  897c241c             mov dword ptr [esp + 0x1c], edi
// 007e2457  0f8c73feffff         jl 0x7e22d0
// 007e245d  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e2461  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007e2465  64890d00000000       mov dword ptr fs:[0], ecx
// 007e246c  59                   pop ecx
// 007e246d  5f                   pop edi
// 007e246e  5e                   pop esi
// 007e246f  5d                   pop ebp
// 007e2470  5b                   pop ebx
// 007e2471  83c448               add esp, 0x48
// 007e2474  c20800               ret 8
// 007e2477  8b16                 mov edx, dword ptr [esi]
// 007e2479  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007e247f  8bce                 mov ecx, esi
// 007e2481  ffd0                 call eax
// 007e2483  85c0                 test eax, eax
// 007e2485  7538                 jne 0x7e24bf
// 007e2487  8b3564aa9e00         mov esi, dword ptr [0x9eaa64]
// 007e248d  8d4c2430             lea ecx, [esp + 0x30]
// 007e2491  51                   push ecx
// 007e2492  ffd6                 call esi
// 007e2494  8d542440             lea edx, [esp + 0x40]
// 007e2498  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007e24a0  52                   push edx
// 007e24a1  eba2                 jmp 0x7e2445
// 007e24a3  8d44242c             lea eax, [esp + 0x2c]
// 007e24a7  50                   push eax
// 007e24a8  8d4c2464             lea ecx, [esp + 0x64]
// 007e24ac  51                   push ecx
// 007e24ad  e87efbffff           call 0x7e2030
// 007e24b2  83c408               add esp, 8
// 007e24b5  85c0                 test eax, eax
// 007e24b7  7f96                 jg 0x7e244f
// 007e24b9  89742418             mov dword ptr [esp + 0x18], esi
// 007e24bd  eb9e                 jmp 0x7e245d
// 007e24bf  3bfb                 cmp edi, ebx
// 007e24c1  0f8580000000         jne 0x7e2547
// 007e24c7  8b16                 mov edx, dword ptr [esi]
// 007e24c9  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007e24cf  8bce                 mov ecx, esi
// 007e24d1  ffd0                 call eax
// 007e24d3  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007e24d7  8b10                 mov edx, dword ptr [eax]
// 007e24d9  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007e24df  51                   push ecx
// 007e24e0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007e24e4  51                   push ecx
// 007e24e5  8bc8                 mov ecx, eax
// 007e24e7  ffd2                 call edx
// 007e24e9  89442418             mov dword ptr [esp + 0x18], eax
// 007e24ed  3bc3                 cmp eax, ebx
// 007e24ef  753d                 jne 0x7e252e
// 007e24f1  8b06                 mov eax, dword ptr [esi]
// 007e24f3  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 007e24f9  8bce                 mov ecx, esi
// 007e24fb  ffd2                 call edx
// 007e24fd  8be8                 mov ebp, eax
// 007e24ff  8b06                 mov eax, dword ptr [esi]
// 007e2501  8b7d00               mov edi, dword ptr [ebp]
// 007e2504  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 007e250a  8bce                 mov ecx, esi
// 007e250c  83c75c               add edi, 0x5c
// 007e250f  ffd2                 call edx
// 007e2511  8bc8                 mov ecx, eax
// 007e2513  e868f2ffff           call 0x7e1780
// 007e2518  48                   dec eax
// 007e2519  50                   push eax
// 007e251a  8b07                 mov eax, dword ptr [edi]
// 007e251c  8bcd                 mov ecx, ebp
// 007e251e  ffd0                 call eax
// 007e2520  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007e2524  89442418             mov dword ptr [esp + 0x18], eax
// 007e2528  c70101000000         mov dword ptr [ecx], 1
// 007e252e  8b3564aa9e00         mov esi, dword ptr [0x9eaa64]
// 007e2534  8d542430             lea edx, [esp + 0x30]
// 007e2538  52                   push edx
// 007e2539  ffd6                 call esi
// 007e253b  8d442440             lea eax, [esp + 0x40]
// 007e253f  50                   push eax
// 007e2540  ffd6                 call esi
// 007e2542  e916ffffff           jmp 0x7e245d
// 007e2547  89742418             mov dword ptr [esp + 0x18], esi
// 007e254b  ebe1                 jmp 0x7e252e
// 007e254d  e8fa56fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?FindInsertionPos@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRows.cpp