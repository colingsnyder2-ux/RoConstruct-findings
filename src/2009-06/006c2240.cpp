// roc 2009-06 006c2240  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2240
//
// 006c2240  55                   push ebp
// 006c2241  8bec                 mov ebp, esp
// 006c2243  6aff                 push -1
// 006c2245  68900c8700           push 0x870c90
// 006c224a  64a100000000         mov eax, dword ptr fs:[0]
// 006c2250  50                   push eax
// 006c2251  64892500000000       mov dword ptr fs:[0], esp
// 006c2258  83ec30               sub esp, 0x30
// 006c225b  53                   push ebx
// 006c225c  56                   push esi
// 006c225d  8bf1                 mov esi, ecx
// 006c225f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c2262  57                   push edi
// 006c2263  8965f0               mov dword ptr [ebp - 0x10], esp
// 006c2266  8975e0               mov dword ptr [ebp - 0x20], esi
// 006c2269  85c0                 test eax, eax
// 006c226b  7505                 jne 0x6c2272
// 006c226d  8945ec               mov dword ptr [ebp - 0x14], eax
// 006c2270  eb19                 jmp 0x6c228b
// 006c2272  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c2275  2bc8                 sub ecx, eax
// 006c2277  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c227c  f7e9                 imul ecx
// 006c227e  c1fa02               sar edx, 2
// 006c2281  8bc2                 mov eax, edx
// 006c2283  c1e81f               shr eax, 0x1f
// 006c2286  03c2                 add eax, edx
// 006c2288  8945ec               mov dword ptr [ebp - 0x14], eax
// 006c228b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006c228e  85ff                 test edi, edi
// 006c2290  0f84e9020000         je 0x6c257f
// 006c2296  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 006c2299  8bcb                 mov ecx, ebx
// 006c229b  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 006c229e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c22a3  f7e9                 imul ecx
// 006c22a5  c1fa02               sar edx, 2
// 006c22a8  8bc2                 mov eax, edx
// 006c22aa  c1e81f               shr eax, 0x1f
// 006c22ad  03c2                 add eax, edx
// 006c22af  b9aaaaaa0a           mov ecx, 0xaaaaaaa
// 006c22b4  2bc8                 sub ecx, eax
// 006c22b6  3bcf                 cmp ecx, edi
// 006c22b8  7305                 jae 0x6c22bf
// 006c22ba  e8a1e0dcff           call 0x490360
// 006c22bf  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006c22c2  03c7                 add eax, edi
// 006c22c4  3bc8                 cmp ecx, eax
// 006c22c6  0f838e010000         jae 0x6c245a
// 006c22cc  8bd1                 mov edx, ecx
// 006c22ce  d1ea                 shr edx, 1
// 006c22d0  bbaaaaaa0a           mov ebx, 0xaaaaaaa
// 006c22d5  2bda                 sub ebx, edx
// 006c22d7  3bd9                 cmp ebx, ecx
// 006c22d9  730c                 jae 0x6c22e7
// 006c22db  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 006c22e2  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006c22e5  eb05                 jmp 0x6c22ec
// 006c22e7  03ca                 add ecx, edx
// 006c22e9  894dec               mov dword ptr [ebp - 0x14], ecx
// 006c22ec  3bc8                 cmp ecx, eax
// 006c22ee  7305                 jae 0x6c22f5
// 006c22f0  8945ec               mov dword ptr [ebp - 0x14], eax
// 006c22f3  8bc8                 mov ecx, eax
// 006c22f5  6a00                 push 0
// 006c22f7  51                   push ecx
// 006c22f8  e803f8ffff           call 0x6c1b00
// 006c22fd  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006c2300  2b560c               sub edx, dword ptr [esi + 0xc]
// 006c2303  8bc8                 mov ecx, eax
// 006c2305  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c230a  f7ea                 imul edx
// 006c230c  c1fa02               sar edx, 2
// 006c230f  8bda                 mov ebx, edx
// 006c2311  33c0                 xor eax, eax
// 006c2313  83c408               add esp, 8
// 006c2316  c1eb1f               shr ebx, 0x1f
// 006c2319  03da                 add ebx, edx
// 006c231b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006c231e  8945e4               mov dword ptr [ebp - 0x1c], eax
// 006c2321  8945fc               mov dword ptr [ebp - 4], eax
// 006c2324  52                   push edx
// 006c2325  894de8               mov dword ptr [ebp - 0x18], ecx
// 006c2328  8d045b               lea eax, [ebx + ebx*2]
// 006c232b  8d0cc1               lea ecx, [ecx + eax*8]
// 006c232e  57                   push edi
// 006c232f  51                   push ecx
// 006c2330  8bce                 mov ecx, esi
// 006c2332  895ddc               mov dword ptr [ebp - 0x24], ebx
// 006c2335  e8f6fcffff           call 0x6c2030
// 006c233a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c233d  c6451400             mov byte ptr [ebp + 0x14], 0
// 006c2341  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006c2344  52                   push edx
// 006c2345  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006c2348  52                   push edx
// 006c2349  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006c234c  8d4e08               lea ecx, [esi + 8]
// 006c234f  51                   push ecx
// 006c2350  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006c2353  51                   push ecx
// 006c2354  52                   push edx
// 006c2355  50                   push eax
// 006c2356  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 006c235d  e80efbffff           call 0x6c1e70
// 006c2362  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 006c2365  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c2368  83c418               add esp, 0x18
// 006c236b  03df                 add ebx, edi
// 006c236d  8d0c5b               lea ecx, [ebx + ebx*2]
// 006c2370  8d0cca               lea ecx, [edx + ecx*8]
// 006c2373  c6451400             mov byte ptr [ebp + 0x14], 0
// 006c2377  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006c237a  52                   push edx
// 006c237b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006c237e  52                   push edx
// 006c237f  8d5608               lea edx, [esi + 8]
// 006c2382  52                   push edx
// 006c2383  51                   push ecx
// 006c2384  50                   push eax
// 006c2385  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006c2388  50                   push eax
// 006c2389  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 006c2390  e8dbfaffff           call 0x6c1e70
// 006c2395  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006c2398  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c239b  2bcb                 sub ecx, ebx
// 006c239d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c23a2  f7e9                 imul ecx
// 006c23a4  c1fa02               sar edx, 2
// 006c23a7  8bca                 mov ecx, edx
// 006c23a9  c1e91f               shr ecx, 0x1f
// 006c23ac  03ca                 add ecx, edx
// 006c23ae  83c418               add esp, 0x18
// 006c23b1  03f9                 add edi, ecx
// 006c23b3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006c23ba  85db                 test ebx, ebx
// 006c23bc  741e                 je 0x6c23dc
// 006c23be  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006c23c1  52                   push edx
// 006c23c2  8d4608               lea eax, [esi + 8]
// 006c23c5  50                   push eax
// 006c23c6  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c23c9  50                   push eax
// 006c23ca  53                   push ebx
// 006c23cb  e8704df7ff           call 0x637140
// 006c23d0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c23d3  51                   push ecx
// 006c23d4  e859660500           call 0x718a32
// 006c23d9  83c414               add esp, 0x14
// 006c23dc  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006c23df  8d1440               lea edx, [eax + eax*2]
// 006c23e2  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 006c23e5  8d0cd0               lea ecx, [eax + edx*8]
// 006c23e8  8d147f               lea edx, [edi + edi*2]
// 006c23eb  894e14               mov dword ptr [esi + 0x14], ecx
// 006c23ee  8d0cd0               lea ecx, [eax + edx*8]
// 006c23f1  894e10               mov dword ptr [esi + 0x10], ecx
// 006c23f4  89460c               mov dword ptr [esi + 0xc], eax
// 006c23f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006c23fa  64890d00000000       mov dword ptr fs:[0], ecx
// 006c2401  5f                   pop edi
// 006c2402  5e                   pop esi
// 006c2403  5b                   pop ebx
// 006c2404  8be5                 mov esp, ebp
// 006c2406  5d                   pop ebp
// 006c2407  c21000               ret 0x10
// library openrbx-client/App\script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
