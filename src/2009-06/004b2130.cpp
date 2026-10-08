// from server: 100% by auto
// roc 2009-06 004b2130  unit: G3D::VertexAndPixelShader  size: 1363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b2130
//
// 004b2130  6aff                 push -1
// 004b2132  68b0858500           push 0x8585b0
// 004b2137  64a100000000         mov eax, dword ptr fs:[0]
// 004b213d  50                   push eax
// 004b213e  64892500000000       mov dword ptr fs:[0], esp
// 004b2145  81ec4c010000         sub esp, 0x14c
// 004b214b  53                   push ebx
// 004b214c  33db                 xor ebx, ebx
// 004b214e  895c2408             mov dword ptr [esp + 8], ebx
// 004b2152  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b2156  8d4c2444             lea ecx, [esp + 0x44]
// 004b215a  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004b215f  c644243d01           mov byte ptr [esp + 0x3d], 1
// 004b2164  c644243e01           mov byte ptr [esp + 0x3e], 1
// 004b2169  885c243f             mov byte ptr [esp + 0x3f], bl
// 004b216d  885c2440             mov byte ptr [esp + 0x40], bl
// 004b2171  c644244101           mov byte ptr [esp + 0x41], 1
// 004b2176  c644244201           mov byte ptr [esp + 0x42], 1
// 004b217b  ff15c0e48900         call dword ptr [0x89e4c0]
// 004b2181  895c2460             mov dword ptr [esp + 0x60], ebx
// 004b2185  885c2464             mov byte ptr [esp + 0x64], bl
// 004b2189  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 004b2190  8d44243c             lea eax, [esp + 0x3c]
// 004b2194  50                   push eax
// 004b2195  51                   push ecx
// 004b2196  53                   push ebx
// 004b2197  8d4c2474             lea ecx, [esp + 0x74]
// 004b219b  899c2464010000       mov dword ptr [esp + 0x164], ebx
// 004b21a2  e8d9990c00           call 0x57bb80
// 004b21a7  8d4c2444             lea ecx, [esp + 0x44]
// 004b21ab  c684245801000002     mov byte ptr [esp + 0x158], 2
// 004b21b3  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b21b9  8d4c2468             lea ecx, [esp + 0x68]
// 004b21bd  e8dea00c00           call 0x57c2a0
// 004b21c2  84c0                 test al, al
// 004b21c4  0f848d040000         je 0x4b2657
// 004b21ca  55                   push ebp
// 004b21cb  56                   push esi
// 004b21cc  57                   push edi
// 004b21cd  8d4900               lea ecx, [ecx]
// 004b21d0  8d9424d8000000       lea edx, [esp + 0xd8]
// 004b21d7  52                   push edx
// 004b21d8  8d4c2478             lea ecx, [esp + 0x78]
// 004b21dc  e8ff9f0c00           call 0x57c1e0
// 004b21e1  be01000000           mov esi, 1
// 004b21e6  0bde                 or ebx, esi
// 004b21e8  c684246401000003     mov byte ptr [esp + 0x164], 3
// 004b21f0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b21f4  397024               cmp dword ptr [eax + 0x24], esi
// 004b21f7  753c                 jne 0x4b2235
// 004b21f9  8d44241c             lea eax, [esp + 0x1c]
// 004b21fd  50                   push eax
// 004b21fe  8d4c2478             lea ecx, [esp + 0x78]
// 004b2202  e8d99f0c00           call 0x57c1e0
// 004b2207  8b3d74e48900         mov edi, dword ptr [0x89e474]
// 004b220d  6858428c00           push 0x8c4258
// 004b2212  83cb02               or ebx, 2
// 004b2215  50                   push eax
// 004b2216  c784246c01000004000000 mov dword ptr [esp + 0x16c], 4
// 004b2221  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004b2225  ffd7                 call edi
// 004b2227  83c408               add esp, 8
// 004b222a  84c0                 test al, al
// 004b222c  740d                 je 0x4b223b
// 004b222e  c644241301           mov byte ptr [esp + 0x13], 1
// 004b2233  eb0b                 jmp 0x4b2240
// 004b2235  8b3d74e48900         mov edi, dword ptr [0x89e474]
// 004b223b  c644241300           mov byte ptr [esp + 0x13], 0
// 004b2240  c784246401000003000000 mov dword ptr [esp + 0x164], 3
// 004b224b  f6c302               test bl, 2
// 004b224e  7411                 je 0x4b2261
// 004b2250  83e3fd               and ebx, 0xfffffffd
// 004b2253  8d4c241c             lea ecx, [esp + 0x1c]
// 004b2257  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b225b  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2261  bd02000000           mov ebp, 2
// 004b2266  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004b226d  f6c301               test bl, 1
// 004b2270  7410                 je 0x4b2282
// 004b2272  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004b2279  83e3fe               and ebx, 0xfffffffe
// 004b227c  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2282  807c241300           cmp byte ptr [esp + 0x13], 0
// 004b2287  0f8498030000         je 0x4b2625
// 004b228d  6858428c00           push 0x8c4258
// 004b2292  8d4c2420             lea ecx, [esp + 0x20]
// 004b2296  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b229c  8d4c241c             lea ecx, [esp + 0x1c]
// 004b22a0  51                   push ecx
// 004b22a1  8d4c2478             lea ecx, [esp + 0x78]
// 004b22a5  c684246801000005     mov byte ptr [esp + 0x168], 5
// 004b22ad  e8fe9d0c00           call 0x57c0b0
// 004b22b2  8d4c241c             lea ecx, [esp + 0x1c]
// 004b22b6  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004b22be  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b22c4  8d942404010000       lea edx, [esp + 0x104]
// 004b22cb  52                   push edx
// 004b22cc  8d4c2478             lea ecx, [esp + 0x78]
// 004b22d0  e80b9f0c00           call 0x57c1e0
// 004b22d5  83cb04               or ebx, 4
// 004b22d8  c684246401000006     mov byte ptr [esp + 0x164], 6
// 004b22e0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b22e4  397024               cmp dword ptr [eax + 0x24], esi
// 004b22e7  7534                 jne 0x4b231d
// 004b22e9  8d44241c             lea eax, [esp + 0x1c]
// 004b22ed  50                   push eax
// 004b22ee  8d4c2478             lea ecx, [esp + 0x78]
// 004b22f2  e8e99e0c00           call 0x57c1e0
// 004b22f7  6850428c00           push 0x8c4250
// 004b22fc  83cb08               or ebx, 8
// 004b22ff  50                   push eax
// 004b2300  c784246c01000007000000 mov dword ptr [esp + 0x16c], 7
// 004b230b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004b230f  ffd7                 call edi
// 004b2311  83c408               add esp, 8
// 004b2314  c644241301           mov byte ptr [esp + 0x13], 1
// 004b2319  84c0                 test al, al
// 004b231b  7505                 jne 0x4b2322
// 004b231d  c644241300           mov byte ptr [esp + 0x13], 0
// 004b2322  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 004b232d  f6c308               test bl, 8
// 004b2330  7411                 je 0x4b2343
// 004b2332  83e3f7               and ebx, 0xfffffff7
// 004b2335  8d4c241c             lea ecx, [esp + 0x1c]
// 004b2339  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b233d  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2343  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004b234a  f6c304               test bl, 4
// 004b234d  7410                 je 0x4b235f
// 004b234f  8d8c2404010000       lea ecx, [esp + 0x104]
// 004b2356  83e3fb               and ebx, 0xfffffffb
// 004b2359  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b235f  807c241300           cmp byte ptr [esp + 0x13], 0
// 004b2364  7437                 je 0x4b239d
// 004b2366  6850428c00           push 0x8c4250
// 004b236b  8d4c2420             lea ecx, [esp + 0x20]
// 004b236f  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b2375  8d4c241c             lea ecx, [esp + 0x1c]
// 004b2379  51                   push ecx
// 004b237a  8d4c2478             lea ecx, [esp + 0x78]
// 004b237e  c684246801000008     mov byte ptr [esp + 0x168], 8
// 004b2386  e8259d0c00           call 0x57c0b0
// 004b238b  8d4c241c             lea ecx, [esp + 0x1c]
// 004b238f  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004b2397  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b239d  8d54241c             lea edx, [esp + 0x1c]
// 004b23a1  52                   push edx
// 004b23a2  8d4c2478             lea ecx, [esp + 0x78]
// 004b23a6  e8959c0c00           call 0x57c040
// 004b23ab  8bf0                 mov esi, eax
// 004b23ad  c684246401000009     mov byte ptr [esp + 0x164], 9
// 004b23b5  e8e6d1ffff           call 0x4af5a0
// 004b23ba  8d4c241c             lea ecx, [esp + 0x1c]
// 004b23be  8be8                 mov ebp, eax
// 004b23c0  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004b23c8  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b23ce  8d8424d8000000       lea eax, [esp + 0xd8]
// 004b23d5  50                   push eax
// 004b23d6  8d4c2478             lea ecx, [esp + 0x78]
// 004b23da  e8619c0c00           call 0x57c040
// 004b23df  8d4c241c             lea ecx, [esp + 0x1c]
// 004b23e3  51                   push ecx
// 004b23e4  8d4c2478             lea ecx, [esp + 0x78]
// 004b23e8  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 004b23f0  e8eb9d0c00           call 0x57c1e0
// 004b23f5  83cb10               or ebx, 0x10
// 004b23f8  83782401             cmp dword ptr [eax + 0x24], 1
// 004b23fc  c68424640100000b     mov byte ptr [esp + 0x164], 0xb
// 004b2404  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b2408  7537                 jne 0x4b2441
// 004b240a  8d942404010000       lea edx, [esp + 0x104]
// 004b2411  52                   push edx
// 004b2412  8d4c2478             lea ecx, [esp + 0x78]
// 004b2416  e8c59d0c00           call 0x57c1e0
// 004b241b  684c428c00           push 0x8c424c
// 004b2420  83cb20               or ebx, 0x20
// 004b2423  50                   push eax
// 004b2424  c784246c0100000c000000 mov dword ptr [esp + 0x16c], 0xc
// 004b242f  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004b2433  ffd7                 call edi
// 004b2435  83c408               add esp, 8
// 004b2438  c644241301           mov byte ptr [esp + 0x13], 1
// 004b243d  84c0                 test al, al
// 004b243f  7505                 jne 0x4b2446
// 004b2441  c644241300           mov byte ptr [esp + 0x13], 0
// 004b2446  c78424640100000b000000 mov dword ptr [esp + 0x164], 0xb
// 004b2451  f6c320               test bl, 0x20
// 004b2454  7414                 je 0x4b246a
// 004b2456  83e3df               and ebx, 0xffffffdf
// 004b2459  8d8c2404010000       lea ecx, [esp + 0x104]
// 004b2460  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b2464  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b246a  c78424640100000a000000 mov dword ptr [esp + 0x164], 0xa
// 004b2475  f6c310               test bl, 0x10
// 004b2478  740d                 je 0x4b2487
// 004b247a  8d4c241c             lea ecx, [esp + 0x1c]
// 004b247e  83e3ef               and ebx, 0xffffffef
// 004b2481  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2487  807c241300           cmp byte ptr [esp + 0x13], 0
// 004b248c  7479                 je 0x4b2507
// 004b248e  684c428c00           push 0x8c424c
// 004b2493  8d4c2420             lea ecx, [esp + 0x20]
// 004b2497  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b249d  8d44241c             lea eax, [esp + 0x1c]
// 004b24a1  50                   push eax
// 004b24a2  8d4c2478             lea ecx, [esp + 0x78]
// 004b24a6  c68424680100000d     mov byte ptr [esp + 0x168], 0xd
// 004b24ae  e8fd9b0c00           call 0x57c0b0
// 004b24b3  8d4c241c             lea ecx, [esp + 0x1c]
// 004b24b7  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004b24bf  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b24c5  8d4c2474             lea ecx, [esp + 0x74]
// 004b24c9  e832990c00           call 0x57be00
// 004b24ce  ddd8                 fstp st(0)
// 004b24d0  6868f48b00           push 0x8bf468
// 004b24d5  8d4c2420             lea ecx, [esp + 0x20]
// 004b24d9  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b24df  8d4c241c             lea ecx, [esp + 0x1c]
// 004b24e3  51                   push ecx
// 004b24e4  8d4c2478             lea ecx, [esp + 0x78]
// 004b24e8  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 004b24f0  e8bb9b0c00           call 0x57c0b0
// 004b24f5  8d4c241c             lea ecx, [esp + 0x1c]
// 004b24f9  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004b2501  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2507  68d4748b00           push 0x8b74d4
// 004b250c  8d4c2420             lea ecx, [esp + 0x20]
// 004b2510  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b2516  8d54241c             lea edx, [esp + 0x1c]
// 004b251a  52                   push edx
// 004b251b  8d4c2478             lea ecx, [esp + 0x78]
// 004b251f  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 004b2527  e8849b0c00           call 0x57c0b0
// 004b252c  8d4c241c             lea ecx, [esp + 0x1c]
// 004b2530  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004b2538  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b253e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b2542  33f6                 xor esi, esi
// 004b2544  39b094010000         cmp dword ptr [eax + 0x194], esi
// 004b254a  7e3d                 jle 0x4b2589
// 004b254c  33ff                 xor edi, edi
// 004b254e  8bff                 mov edi, edi
// 004b2550  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b2554  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 004b255a  03c7                 add eax, edi
// 004b255c  8d9424d8000000       lea edx, [esp + 0xd8]
// 004b2563  52                   push edx
// 004b2564  83c008               add eax, 8
// 004b2567  50                   push eax
// 004b2568  ff1544e48900         call dword ptr [0x89e444]
// 004b256e  83c408               add esp, 8
// 004b2571  84c0                 test al, al
// 004b2573  0f859b000000         jne 0x4b2614
// 004b2579  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b257d  46                   inc esi
// 004b257e  83c730               add edi, 0x30
// 004b2581  3bb094010000         cmp esi, dword ptr [eax + 0x194]
// 004b2587  7cc7                 jl 0x4b2550
// 004b2589  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b258d  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 004b2593  81c690010000         add esi, 0x190
// 004b2599  41                   inc ecx
// 004b259a  6a00                 push 0
// 004b259c  51                   push ecx
// 004b259d  8bce                 mov ecx, esi
// 004b259f  e8fcd5ffff           call 0x4afba0
// 004b25a4  8b4604               mov eax, dword ptr [esi + 4]
// 004b25a7  8d1440               lea edx, [eax + eax*2]
// 004b25aa  8b06                 mov eax, dword ptr [esi]
// 004b25ac  c1e204               shl edx, 4
// 004b25af  c64402d001           mov byte ptr [edx + eax - 0x30], 1
// 004b25b4  8b4604               mov eax, dword ptr [esi + 4]
// 004b25b7  8b16                 mov edx, dword ptr [esi]
// 004b25b9  8d0c40               lea ecx, [eax + eax*2]
// 004b25bc  c1e104               shl ecx, 4
// 004b25bf  8d8424d8000000       lea eax, [esp + 0xd8]
// 004b25c6  83cfff               or edi, 0xffffffff
// 004b25c9  897c11d4             mov dword ptr [ecx + edx - 0x2c], edi
// 004b25cd  8b16                 mov edx, dword ptr [esi]
// 004b25cf  50                   push eax
// 004b25d0  8b4604               mov eax, dword ptr [esi + 4]
// 004b25d3  8d0c40               lea ecx, [eax + eax*2]
// 004b25d6  c1e104               shl ecx, 4
// 004b25d9  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 004b25dd  ff1564e48900         call dword ptr [0x89e464]
// 004b25e3  8b4604               mov eax, dword ptr [esi + 4]
// 004b25e6  8b0e                 mov ecx, dword ptr [esi]
// 004b25e8  8d0440               lea eax, [eax + eax*2]
// 004b25eb  c1e004               shl eax, 4
// 004b25ee  c74408f801000000     mov dword ptr [eax + ecx - 8], 1
// 004b25f6  8b4604               mov eax, dword ptr [esi + 4]
// 004b25f9  8d1440               lea edx, [eax + eax*2]
// 004b25fc  8b06                 mov eax, dword ptr [esi]
// 004b25fe  c1e204               shl edx, 4
// 004b2601  896c02f4             mov dword ptr [edx + eax - 0xc], ebp
// 004b2605  8b4604               mov eax, dword ptr [esi + 4]
// 004b2608  8b16                 mov edx, dword ptr [esi]
// 004b260a  8d0c40               lea ecx, [eax + eax*2]
// 004b260d  c1e104               shl ecx, 4
// 004b2610  897c11fc             mov dword ptr [ecx + edx - 4], edi
// 004b2614  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004b261c  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004b2623  eb18                 jmp 0x4b263d
// 004b2625  8d842430010000       lea eax, [esp + 0x130]
// 004b262c  50                   push eax
// 004b262d  8d4c2478             lea ecx, [esp + 0x78]
// 004b2631  e82a940c00           call 0x57ba60
// 004b2636  8d8c2430010000       lea ecx, [esp + 0x130]
// 004b263d  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2643  8d4c2474             lea ecx, [esp + 0x74]
// 004b2647  e8549c0c00           call 0x57c2a0
// 004b264c  84c0                 test al, al
// 004b264e  0f857cfbffff         jne 0x4b21d0
// 004b2654  5f                   pop edi
// 004b2655  5e                   pop esi
// 004b2656  5d                   pop ebp
// 004b2657  8d4c2468             lea ecx, [esp + 0x68]
// 004b265b  c7842458010000ffffffff mov dword ptr [esp + 0x158], 0xffffffff
// 004b2666  e815f4ffff           call 0x4b1a80
// 004b266b  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 004b2672  5b                   pop ebx
// 004b2673  64890d00000000       mov dword ptr fs:[0], ecx
// 004b267a  81c458010000         add esp, 0x158
// 004b2680  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
