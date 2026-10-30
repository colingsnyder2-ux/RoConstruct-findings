// roc 2011-06 008b2060  unit: CXTPReportPaintManager  size: 1251 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2060
//
// 008b2060  6aff                 push -1
// 008b2062  6854b2a000           push 0xa0b254
// 008b2067  64a100000000         mov eax, dword ptr fs:[0]
// 008b206d  50                   push eax
// 008b206e  83ec50               sub esp, 0x50
// 008b2071  a12058c900           mov eax, dword ptr [0xc95820]
// 008b2076  33c4                 xor eax, esp
// 008b2078  8944244c             mov dword ptr [esp + 0x4c], eax
// 008b207c  53                   push ebx
// 008b207d  55                   push ebp
// 008b207e  56                   push esi
// 008b207f  57                   push edi
// 008b2080  a12058c900           mov eax, dword ptr [0xc95820]
// 008b2085  33c4                 xor eax, esp
// 008b2087  50                   push eax
// 008b2088  8d442464             lea eax, [esp + 0x64]
// 008b208c  64a300000000         mov dword ptr fs:[0], eax
// 008b2092  8bf1                 mov esi, ecx
// 008b2094  89742420             mov dword ptr [esp + 0x20], esi
// 008b2098  e82da51100           call 0x9cc5ca
// 008b209d  33ff                 xor edi, edi
// 008b209f  c7069c3fad00         mov dword ptr [esi], 0xad3f9c
// 008b20a5  b89041a700           mov eax, 0xa74190
// 008b20aa  897c246c             mov dword ptr [esp + 0x6c], edi
// 008b20ae  897e24               mov dword ptr [esi + 0x24], edi
// 008b20b1  894620               mov dword ptr [esi + 0x20], eax
// 008b20b4  897e2c               mov dword ptr [esi + 0x2c], edi
// 008b20b7  894628               mov dword ptr [esi + 0x28], eax
// 008b20ba  897e34               mov dword ptr [esi + 0x34], edi
// 008b20bd  894630               mov dword ptr [esi + 0x30], eax
// 008b20c0  897e3c               mov dword ptr [esi + 0x3c], edi
// 008b20c3  894638               mov dword ptr [esi + 0x38], eax
// 008b20c6  8d4e40               lea ecx, [esi + 0x40]
// 008b20c9  c644246c04           mov byte ptr [esp + 0x6c], 4
// 008b20ce  e8ed27f9ff           call 0x8448c0
// 008b20d3  8d4e4c               lea ecx, [esi + 0x4c]
// 008b20d6  e8e527f9ff           call 0x8448c0
// 008b20db  8d4e58               lea ecx, [esi + 0x58]
// 008b20de  e8dd27f9ff           call 0x8448c0
// 008b20e3  8d4e64               lea ecx, [esi + 0x64]
// 008b20e6  e8d527f9ff           call 0x8448c0
// 008b20eb  8d4e70               lea ecx, [esi + 0x70]
// 008b20ee  e8cd27f9ff           call 0x8448c0
// 008b20f3  8d4e7c               lea ecx, [esi + 0x7c]
// 008b20f6  e8c527f9ff           call 0x8448c0
// 008b20fb  8d8e88000000         lea ecx, [esi + 0x88]
// 008b2101  e8ba27f9ff           call 0x8448c0
// 008b2106  8d8e94000000         lea ecx, [esi + 0x94]
// 008b210c  e8af27f9ff           call 0x8448c0
// 008b2111  8d8ea0000000         lea ecx, [esi + 0xa0]
// 008b2117  e8a427f9ff           call 0x8448c0
// 008b211c  8d8eac000000         lea ecx, [esi + 0xac]
// 008b2122  e89927f9ff           call 0x8448c0
// 008b2127  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008b212d  e88e27f9ff           call 0x8448c0
// 008b2132  8d8ec4000000         lea ecx, [esi + 0xc4]
// 008b2138  e88327f9ff           call 0x8448c0
// 008b213d  8d8ed0000000         lea ecx, [esi + 0xd0]
// 008b2143  e87827f9ff           call 0x8448c0
// 008b2148  8d8edc000000         lea ecx, [esi + 0xdc]
// 008b214e  e86d27f9ff           call 0x8448c0
// 008b2153  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008b2159  e86227f9ff           call 0x8448c0
// 008b215e  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008b2164  e85727f9ff           call 0x8448c0
// 008b2169  8d8e00010000         lea ecx, [esi + 0x100]
// 008b216f  e84c27f9ff           call 0x8448c0
// 008b2174  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008b217a  e84127f9ff           call 0x8448c0
// 008b217f  8d8e18010000         lea ecx, [esi + 0x118]
// 008b2185  e83627f9ff           call 0x8448c0
// 008b218a  8d8e24010000         lea ecx, [esi + 0x124]
// 008b2190  e82b27f9ff           call 0x8448c0
// 008b2195  8d8e30010000         lea ecx, [esi + 0x130]
// 008b219b  e82027f9ff           call 0x8448c0
// 008b21a0  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008b21a6  e81527f9ff           call 0x8448c0
// 008b21ab  8d8e48010000         lea ecx, [esi + 0x148]
// 008b21b1  e80a27f9ff           call 0x8448c0
// 008b21b6  8d8e54010000         lea ecx, [esi + 0x154]
// 008b21bc  e81f27f9ff           call 0x8448e0
// 008b21c1  8d8e74010000         lea ecx, [esi + 0x174]
// 008b21c7  e81427f9ff           call 0x8448e0
// 008b21cc  8d8e94010000         lea ecx, [esi + 0x194]
// 008b21d2  e80927f9ff           call 0x8448e0
// 008b21d7  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 008b21dd  e8de26f9ff           call 0x8448c0
// 008b21e2  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 008b21e8  e8d326f9ff           call 0x8448c0
// 008b21ed  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 008b21f3  e8c826f9ff           call 0x8448c0
// 008b21f8  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 008b21fe  e8bd26f9ff           call 0x8448c0
// 008b2203  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 008b2209  e8b226f9ff           call 0x8448c0
// 008b220e  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008b2214  e8a726f9ff           call 0x8448c0
// 008b2219  8d8e14020000         lea ecx, [esi + 0x214]
// 008b221f  ff15b42da400         call dword ptr [0xa42db4]
// 008b2225  8d9e18020000         lea ebx, [esi + 0x218]
// 008b222b  8bcb                 mov ecx, ebx
// 008b222d  ff15b42da400         call dword ptr [0xa42db4]
// 008b2233  8d8e1c020000         lea ecx, [esi + 0x21c]
// 008b2239  ff15b42da400         call dword ptr [0xa42db4]
// 008b223f  8d8e20020000         lea ecx, [esi + 0x220]
// 008b2245  ff15b42da400         call dword ptr [0xa42db4]
// 008b224b  8d8e70020000         lea ecx, [esi + 0x270]
// 008b2251  c644246c08           mov byte ptr [esp + 0x6c], 8
// 008b2256  e8b385f5ff           call 0x80a80e
// 008b225b  b888dfa500           mov eax, 0xa5df88
// 008b2260  89be90020000         mov dword ptr [esi + 0x290], edi
// 008b2266  89868c020000         mov dword ptr [esi + 0x28c], eax
// 008b226c  89be98020000         mov dword ptr [esi + 0x298], edi
// 008b2272  898694020000         mov dword ptr [esi + 0x294], eax
// 008b2278  89bea0020000         mov dword ptr [esi + 0x2a0], edi
// 008b227e  89869c020000         mov dword ptr [esi + 0x29c], eax
// 008b2284  bd01000000           mov ebp, 1
// 008b2289  55                   push ebp
// 008b228a  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 008b2290  c64424700c           mov byte ptr [esp + 0x70], 0xc
// 008b2295  e866acfcff           call 0x87cf00
// 008b229a  55                   push ebp
// 008b229b  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 008b22a1  c64424700d           mov byte ptr [esp + 0x70], 0xd
// 008b22a6  e855acfcff           call 0x87cf00
// 008b22ab  55                   push ebp
// 008b22ac  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 008b22b2  c64424700e           mov byte ptr [esp + 0x70], 0xe
// 008b22b7  e844acfcff           call 0x87cf00
// 008b22bc  6a2c                 push 0x2c
// 008b22be  c64424700f           mov byte ptr [esp + 0x70], 0xf
// 008b22c3  e8967df5ff           call 0x80a05e
// 008b22c8  83c404               add esp, 4
// 008b22cb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b22cf  c644246c10           mov byte ptr [esp + 0x6c], 0x10
// 008b22d4  3bc7                 cmp eax, edi
// 008b22d6  7409                 je 0x8b22e1
// 008b22d8  8bc8                 mov ecx, eax
// 008b22da  e85195ffff           call 0x8ab830
// 008b22df  eb02                 jmp 0x8b22e3
// 008b22e1  33c0                 xor eax, eax
// 008b22e3  6a08                 push 8
// 008b22e5  8986e4020000         mov dword ptr [esi + 0x2e4], eax
// 008b22eb  8b10                 mov edx, dword ptr [eax]
// 008b22ed  6a0a                 push 0xa
// 008b22ef  8bc8                 mov ecx, eax
// 008b22f1  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008b22f4  6a0b                 push 0xb
// 008b22f6  c64424780f           mov byte ptr [esp + 0x78], 0xf
// 008b22fb  ffd0                 call eax
// 008b22fd  b80c000000           mov eax, 0xc
// 008b2302  8bc8                 mov ecx, eax
// 008b2304  c786340100000000ff00 mov dword ptr [esi + 0x134], 0xff0000
// 008b230e  c786fc010000ffffffff mov dword ptr [esi + 0x1fc], 0xffffffff
// 008b2318  c7868002000003000000 mov dword ptr [esi + 0x280], 3
// 008b2322  898684020000         mov dword ptr [esi + 0x284], eax
// 008b2328  898e88020000         mov dword ptr [esi + 0x288], ecx
// 008b232e  89ae5c020000         mov dword ptr [esi + 0x25c], ebp
// 008b2334  c7866c02000002000000 mov dword ptr [esi + 0x26c], 2
// 008b233e  89ae7c020000         mov dword ptr [esi + 0x27c], ebp
// 008b2344  89be78020000         mov dword ptr [esi + 0x278], edi
// 008b234a  89be04020000         mov dword ptr [esi + 0x204], edi
// 008b2350  89be00020000         mov dword ptr [esi + 0x200], edi
// 008b2356  89ae08020000         mov dword ptr [esi + 0x208], ebp
// 008b235c  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 008b2362  89ae3c020000         mov dword ptr [esi + 0x23c], ebp
// 008b2368  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 008b236e  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 008b2374  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 008b237a  c786b802000004000000 mov dword ptr [esi + 0x2b8], 4
// 008b2384  89be30020000         mov dword ptr [esi + 0x230], edi
// 008b238a  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 008b2390  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 008b2396  89ae0c020000         mov dword ptr [esi + 0x20c], ebp
// 008b239c  89ae10020000         mov dword ptr [esi + 0x210], ebp
// 008b23a2  e899dbfcff           call 0x87ff40
// 008b23a7  8b10                 mov edx, dword ptr [eax]
// 008b23a9  6851250000           push 0x2551
// 008b23ae  8d8e14020000         lea ecx, [esi + 0x214]
// 008b23b4  51                   push ecx
// 008b23b5  8bc8                 mov ecx, eax
// 008b23b7  8b4208               mov eax, dword ptr [edx + 8]
// 008b23ba  ffd0                 call eax
// 008b23bc  e87fdbfcff           call 0x87ff40
// 008b23c1  8b10                 mov edx, dword ptr [eax]
// 008b23c3  6850250000           push 0x2550
// 008b23c8  8d8e1c020000         lea ecx, [esi + 0x21c]
// 008b23ce  51                   push ecx
// 008b23cf  8bc8                 mov ecx, eax
// 008b23d1  8b4208               mov eax, dword ptr [edx + 8]
// 008b23d4  ffd0                 call eax
// 008b23d6  e865dbfcff           call 0x87ff40
// 008b23db  8b10                 mov edx, dword ptr [eax]
// 008b23dd  6852250000           push 0x2552
// 008b23e2  8d8e20020000         lea ecx, [esi + 0x220]
// 008b23e8  51                   push ecx
// 008b23e9  8bc8                 mov ecx, eax
// 008b23eb  8b4208               mov eax, dword ptr [edx + 8]
// 008b23ee  ffd0                 call eax
// 008b23f0  e84bdbfcff           call 0x87ff40
// 008b23f5  8b10                 mov edx, dword ptr [eax]
// 008b23f7  6853250000           push 0x2553
// 008b23fc  8bc8                 mov ecx, eax
// 008b23fe  8b4208               mov eax, dword ptr [edx + 8]
// 008b2401  53                   push ebx
// 008b2402  ffd0                 call eax
// 008b2404  85c0                 test eax, eax
// 008b2406  740d                 je 0x8b2415
// 008b2408  686056a600           push 0xa65660
// 008b240d  8bcb                 mov ecx, ebx
// 008b240f  ff15a822a400         call dword ptr [0xa422a8]
// 008b2415  6a02                 push 2
// 008b2417  6a0a                 push 0xa
// 008b2419  57                   push edi
// 008b241a  6a0a                 push 0xa
// 008b241c  8d8e48020000         lea ecx, [esi + 0x248]
// 008b2422  51                   push ecx
// 008b2423  89be24020000         mov dword ptr [esi + 0x224], edi
// 008b2429  ff15c81ba400         call dword ptr [0xa41bc8]
// 008b242f  57                   push edi
// 008b2430  8d542428             lea edx, [esp + 0x28]
// 008b2434  52                   push edx
// 008b2435  6a3c                 push 0x3c
// 008b2437  6a1f                 push 0x1f
// 008b2439  c7865802000014000000 mov dword ptr [esi + 0x258], 0x14
// 008b2443  89ae28020000         mov dword ptr [esi + 0x228], ebp
// 008b2449  ff155c1ba400         call dword ptr [0xa41b5c]
// 008b244f  8d442424             lea eax, [esp + 0x24]
// 008b2453  50                   push eax
// 008b2454  ff152001a400         call dword ptr [0xa40120]
// 008b245a  50                   push eax
// 008b245b  8d4e38               lea ecx, [esi + 0x38]
// 008b245e  e8c581f5ff           call 0x80a628
// 008b2463  8d4c2424             lea ecx, [esp + 0x24]
// 008b2467  51                   push ecx
// 008b2468  8bce                 mov ecx, esi
// 008b246a  e8a1c9ffff           call 0x8aee10
// 008b246f  8d542424             lea edx, [esp + 0x24]
// 008b2473  52                   push edx
// 008b2474  8bce                 mov ecx, esi
// 008b2476  e8a5c8ffff           call 0x8aed20
// 008b247b  55                   push ebp
// 008b247c  57                   push edi
// 008b247d  6a19                 push 0x19
// 008b247f  6a0c                 push 0xc
// 008b2481  6a0c                 push 0xc
// 008b2483  8d8e70020000         lea ecx, [esi + 0x270]
// 008b2489  e87a83f5ff           call 0x80a808
// 008b248e  bb90e7a500           mov ebx, 0xa5e790
// 008b2493  897c2418             mov dword ptr [esp + 0x18], edi
// 008b2497  895c2414             mov dword ptr [esp + 0x14], ebx
// 008b249b  c644246c11           mov byte ptr [esp + 0x6c], 0x11
// 008b24a0  e89bdafcff           call 0x87ff40
// 008b24a5  8b10                 mov edx, dword ptr [eax]
// 008b24a7  8b5214               mov edx, dword ptr [edx + 0x14]
// 008b24aa  684e250000           push 0x254e
// 008b24af  8d4c2418             lea ecx, [esp + 0x18]
// 008b24b3  51                   push ecx
// 008b24b4  8bc8                 mov ecx, eax
// 008b24b6  ffd2                 call edx
// 008b24b8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b24bc  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008b24c2  68ff00ff00           push 0xff00ff
// 008b24c7  51                   push ecx
// 008b24c8  50                   push eax
// 008b24c9  e84e7ef5ff           call 0x80a31c
// 008b24ce  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008b24d4  8b0a                 mov ecx, dword ptr [edx]
// 008b24d6  e81531b6ff           call 0x4155f0
// 008b24db  8bce                 mov ecx, esi
// 008b24dd  89aea8020000         mov dword ptr [esi + 0x2a8], ebp
// 008b24e3  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 008b24e9  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 008b24ef  c786a40200000d000000 mov dword ptr [esi + 0x2a4], 0xd
// 008b24f9  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 008b24ff  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 008b2505  89be38020000         mov dword ptr [esi + 0x238], edi
// 008b250b  e820eeffff           call 0x8b1330
// 008b2510  8d4c2414             lea ecx, [esp + 0x14]
// 008b2514  c644246c0f           mov byte ptr [esp + 0x6c], 0xf
// 008b2519  895c2414             mov dword ptr [esp + 0x14], ebx
// 008b251d  e80e14b6ff           call 0x413930
// 008b2522  8bc6                 mov eax, esi
// 008b2524  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008b2528  64890d00000000       mov dword ptr fs:[0], ecx
// 008b252f  59                   pop ecx
// 008b2530  5f                   pop edi
// 008b2531  5e                   pop esi
// 008b2532  5d                   pop ebp
// 008b2533  5b                   pop ebx
// 008b2534  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008b2538  33cc                 xor ecx, esp
// 008b253a  e8b893f5ff           call 0x80b8f7
// 008b253f  83c45c               add esp, 0x5c
// 008b2542  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp