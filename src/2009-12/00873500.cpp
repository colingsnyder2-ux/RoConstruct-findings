// roc 2009-12 00873500  unit: CXTPRibbonTheme  size: 687 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00873500
//
// 00873500  6aff                 push -1
// 00873502  68c9ff9500           push 0x95ffc9
// 00873507  64a100000000         mov eax, dword ptr fs:[0]
// 0087350d  50                   push eax
// 0087350e  83ec3c               sub esp, 0x3c
// 00873511  53                   push ebx
// 00873512  55                   push ebp
// 00873513  56                   push esi
// 00873514  57                   push edi
// 00873515  a10052b600           mov eax, dword ptr [0xb65200]
// 0087351a  33c4                 xor eax, esp
// 0087351c  50                   push eax
// 0087351d  8d442450             lea eax, [esp + 0x50]
// 00873521  64a300000000         mov dword ptr fs:[0], eax
// 00873527  8bd9                 mov ebx, ecx
// 00873529  8b742464             mov esi, dword ptr [esp + 0x64]
// 0087352d  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 00873533  85c0                 test eax, eax
// 00873535  0f8453020000         je 0x87378e
// 0087353b  83782400             cmp dword ptr [eax + 0x24], 0
// 0087353f  0f8449020000         je 0x87378e
// 00873545  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0087354b  85c0                 test eax, eax
// 0087354d  750c                 jne 0x87355b
// 0087354f  398694000000         cmp dword ptr [esi + 0x94], eax
// 00873555  7504                 jne 0x87355b
// 00873557  33ff                 xor edi, edi
// 00873559  eb05                 jmp 0x873560
// 0087355b  bf01000000           mov edi, 1
// 00873560  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00873566  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0087356c  6a01                 push 1
// 0087356e  6a00                 push 0
// 00873570  6a01                 push 1
// 00873572  6a01                 push 1
// 00873574  50                   push eax
// 00873575  e8561ffdff           call 0x8454d0
// 0087357a  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00873580  7e46                 jle 0x8735c8
// 00873582  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00873588  85c0                 test eax, eax
// 0087358a  7c0f                 jl 0x87359b
// 0087358c  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0087358f  7d0a                 jge 0x87359b
// 00873591  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00873594  8d1482               lea edx, [edx + eax*4]
// 00873597  8b12                 mov edx, dword ptr [edx]
// 00873599  eb02                 jmp 0x87359d
// 0087359b  33d2                 xor edx, edx
// 0087359d  83ba9800000000       cmp dword ptr [edx + 0x98], 0
// 008735a4  7522                 jne 0x8735c8
// 008735a6  85c0                 test eax, eax
// 008735a8  7c0f                 jl 0x8735b9
// 008735aa  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008735ad  7d0a                 jge 0x8735b9
// 008735af  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008735b2  8d0481               lea eax, [ecx + eax*4]
// 008735b5  8b00                 mov eax, dword ptr [eax]
// 008735b7  eb02                 jmp 0x8735bb
// 008735b9  33c0                 xor eax, eax
// 008735bb  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008735c2  7504                 jne 0x8735c8
// 008735c4  33c0                 xor eax, eax
// 008735c6  eb05                 jmp 0x8735cd
// 008735c8  b801000000           mov eax, 1
// 008735cd  85ff                 test edi, edi
// 008735cf  7412                 je 0x8735e3
// 008735d1  85c0                 test eax, eax
// 008735d3  7407                 je 0x8735dc
// 008735d5  b8e413a000           mov eax, 0xa013e4
// 008735da  eb15                 jmp 0x8735f1
// 008735dc  b8c813a000           mov eax, 0xa013c8
// 008735e1  eb0e                 jmp 0x8735f1
// 008735e3  85c0                 test eax, eax
// 008735e5  b8ac13a000           mov eax, 0xa013ac
// 008735ea  7505                 jne 0x8735f1
// 008735ec  b89013a000           mov eax, 0xa01390
// 008735f1  50                   push eax
// 008735f2  8d4c2468             lea ecx, [esp + 0x68]
// 008735f6  ff15b8de9800         call dword ptr [0x98deb8]
// 008735fc  8d4c2464             lea ecx, [esp + 0x64]
// 00873600  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00873608  ff1580de9800         call dword ptr [0x98de80]
// 0087360e  50                   push eax
// 0087360f  8bcb                 mov ecx, ebx
// 00873611  e8eab60000           call 0x87ed00
// 00873616  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087361a  85c0                 test eax, eax
// 0087361c  0f8455010000         je 0x873777
// 00873622  8b16                 mov edx, dword ptr [esi]
// 00873624  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0087362a  8bce                 mov ecx, esi
// 0087362c  ffd0                 call eax
// 0087362e  89442418             mov dword ptr [esp + 0x18], eax
// 00873632  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00873638  83f8ff               cmp eax, -1
// 0087363b  750f                 jne 0x87364c
// 0087363d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00873643  85c9                 test ecx, ecx
// 00873645  7405                 je 0x87364c
// 00873647  e8642ff8ff           call 0x7f65b0
// 0087364c  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00873652  8be8                 mov ebp, eax
// 00873654  83f9ff               cmp ecx, -1
// 00873657  750d                 jne 0x873666
// 00873659  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0087365f  85c0                 test eax, eax
// 00873661  7403                 je 0x873666
// 00873663  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00873666  8b16                 mov edx, dword ptr [esi]
// 00873668  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0087366b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087366f  8bce                 mov ecx, esi
// 00873671  ffd0                 call eax
// 00873673  8b16                 mov edx, dword ptr [esi]
// 00873675  8bd8                 mov ebx, eax
// 00873677  8b4278               mov eax, dword ptr [edx + 0x78]
// 0087367a  8bce                 mov ecx, esi
// 0087367c  ffd0                 call eax
// 0087367e  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00873684  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0087368a  8bf8                 mov edi, eax
// 0087368c  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00873692  894c2440             mov dword ptr [esp + 0x40], ecx
// 00873696  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0087369c  33f6                 xor esi, esi
// 0087369e  89442448             mov dword ptr [esp + 0x48], eax
// 008736a2  b816000000           mov eax, 0x16
// 008736a7  89542444             mov dword ptr [esp + 0x44], edx
// 008736ab  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008736af  89742420             mov dword ptr [esp + 0x20], esi
// 008736b3  89742424             mov dword ptr [esp + 0x24], esi
// 008736b7  89442428             mov dword ptr [esp + 0x28], eax
// 008736bb  8944242c             mov dword ptr [esp + 0x2c], eax
// 008736bf  3bee                 cmp ebp, esi
// 008736c1  7511                 jne 0x8736d4
// 008736c3  83fb02               cmp ebx, 2
// 008736c6  7405                 je 0x8736cd
// 008736c8  83fb03               cmp ebx, 3
// 008736cb  7547                 jne 0x873714
// 008736cd  be01000000           mov esi, 1
// 008736d2  eb40                 jmp 0x873714
// 008736d4  39742418             cmp dword ptr [esp + 0x18], esi
// 008736d8  750e                 jne 0x8736e8
// 008736da  39742414             cmp dword ptr [esp + 0x14], esi
// 008736de  741a                 je 0x8736fa
// 008736e0  3bde                 cmp ebx, esi
// 008736e2  750b                 jne 0x8736ef
// 008736e4  3bfe                 cmp edi, esi
// 008736e6  7512                 jne 0x8736fa
// 008736e8  be03000000           mov esi, 3
// 008736ed  eb25                 jmp 0x873714
// 008736ef  3bfe                 cmp edi, esi
// 008736f1  7507                 jne 0x8736fa
// 008736f3  be04000000           mov esi, 4
// 008736f8  eb1a                 jmp 0x873714
// 008736fa  57                   push edi
// 008736fb  e83023f8ff           call 0x7f5a30
// 00873700  83c404               add esp, 4
// 00873703  85c0                 test eax, eax
// 00873705  7508                 jne 0x87370f
// 00873707  85db                 test ebx, ebx
// 00873709  7478                 je 0x873783
// 0087370b  85ff                 test edi, edi
// 0087370d  7478                 je 0x873787
// 0087370f  be02000000           mov esi, 2
// 00873714  6bf616               imul esi, esi, 0x16
// 00873717  56                   push esi
// 00873718  6a00                 push 0
// 0087371a  8d542428             lea edx, [esp + 0x28]
// 0087371e  52                   push edx
// 0087371f  ff156ccc9800         call dword ptr [0x98cc6c]
// 00873725  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00873729  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087372d  b802000000           mov eax, 2
// 00873732  89442430             mov dword ptr [esp + 0x30], eax
// 00873736  89442434             mov dword ptr [esp + 0x34], eax
// 0087373a  89442438             mov dword ptr [esp + 0x38], eax
// 0087373e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00873742  68ff00ff00           push 0xff00ff
// 00873747  8d442434             lea eax, [esp + 0x34]
// 0087374b  50                   push eax
// 0087374c  83ec10               sub esp, 0x10
// 0087374f  8bc4                 mov eax, esp
// 00873751  8908                 mov dword ptr [eax], ecx
// 00873753  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00873757  895004               mov dword ptr [eax + 4], edx
// 0087375a  8b542444             mov edx, dword ptr [esp + 0x44]
// 0087375e  894808               mov dword ptr [eax + 8], ecx
// 00873761  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00873765  89500c               mov dword ptr [eax + 0xc], edx
// 00873768  8d442458             lea eax, [esp + 0x58]
// 0087376c  50                   push eax
// 0087376d  51                   push ecx
// 0087376e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00873772  e889d60600           call 0x8e0e00
// 00873777  8d4c2464             lea ecx, [esp + 0x64]
// 0087377b  ff15c0de9800         call dword ptr [0x98dec0]
// 00873781  eb16                 jmp 0x873799
// 00873783  85ff                 test edi, edi
// 00873785  748d                 je 0x873714
// 00873787  be01000000           mov esi, 1
// 0087378c  eb86                 jmp 0x873714
// 0087378e  8b542460             mov edx, dword ptr [esp + 0x60]
// 00873792  56                   push esi
// 00873793  52                   push edx
// 00873794  e8d7a2f8ff           call 0x7fda70
// 00873799  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087379d  64890d00000000       mov dword ptr fs:[0], ecx
// 008737a4  59                   pop ecx
// 008737a5  5f                   pop edi
// 008737a6  5e                   pop esi
// 008737a7  5d                   pop ebp
// 008737a8  5b                   pop ebx
// 008737a9  83c448               add esp, 0x48
// 008737ac  c20800               ret 8
// copied from an identical function in another client (function ?DrawControlEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp